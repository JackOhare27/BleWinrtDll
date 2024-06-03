using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Threading;
using UnityEngine.UI;
using TMPro;
using Random = System.Random;

public class BLEBehaviour : MonoBehaviour
{
    public TMP_Text TextIsScanning, TextTargetDeviceConnection, TextTargetDeviceData, TextDiscoveredDevices;
    public Button ButtonStartScan;
    
    // Hard call to Prestan CPR Manakin
    string targetDeviceName = "Prestan";
    string serviceUuid = "{F000FEEA-6865-6172-7469-73656E7365AE}";
    string[] characteristicUuids = {
        "{F000FEEB-6865-6172-7469-73656E7365AE}",   //we just need the compression data  
    };

    BLE ble;
    BLE.BLEScan scan;
    bool isScanning = false, isConnected = false, isReading = false;
    string deviceId = null;  
    IDictionary<string, string> discoveredDevices = new Dictionary<string, string>();
    int devicesCount = 0;
    byte[] valuesToWrite;
    public int compressionVal = 100;

    // BLE Threads 
    Thread scanningThread, connectionThread, writingThread;
    
    void Start()
    {
        ble = new BLE();
        
        TextTargetDeviceConnection.text = targetDeviceName + " not found.";
    }

    void Update()
    {  
        if (isScanning)
        {
            if (discoveredDevices.Count > devicesCount)
            {
                UpdateGuiText("scan");

                devicesCount = discoveredDevices.Count;
            }                
        } else
        {
            if (TextIsScanning.text != "Not scanning.")
            {
                TextIsScanning.color = Color.white;
                TextIsScanning.text = "Not scanning.";
            }
        }

        // The target device was found.
        if (deviceId != null && deviceId != "-1")
        {
            // Target device is connected and GUI knows.
            if (ble.isConnected && isConnected)
            {
                //UpdateGuiText("writeData");
            }
            // Target device is connected, but GUI hasn't updated yet.
            else if (ble.isConnected && !isConnected)
            {
                UpdateGuiText("connected");
                isConnected = true;
                // Device was found, but not connected yet. 
            } else if (!isConnected)
            {
                TextTargetDeviceConnection.text = "Found target device:\n" + targetDeviceName;
            } 
        }


    }
    
    public void StartScanHandler()
    {
        devicesCount = 0;
        isScanning = true;
        discoveredDevices.Clear();
        scanningThread = new Thread(ScanBleDevices);
        scanningThread.Start();
        TextIsScanning.color = new Color(244, 180, 26);
        TextIsScanning.text = "Scanning...";
        TextIsScanning.text +=
            $"Searching for {targetDeviceName} with \nservice {serviceUuid} and \ncharacteristic {characteristicUuids[0]}";
        TextDiscoveredDevices.text = "";
        StartCoroutine(dataRead());
    }
    
    void ScanBleDevices()
    {
        scan = BLE.ScanDevices();
        Debug.Log("BLE.ScanDevices() started.");
        scan.Found = (_deviceId, deviceName) =>
        {
            if (!discoveredDevices.ContainsKey(_deviceId))
            {
                Debug.Log("found device with name: " + deviceName);
                discoveredDevices.Add(_deviceId, deviceName);
            }

            if (deviceId == null && deviceName == targetDeviceName)
            {
                deviceId = _deviceId;
            }
        };

        scan.Finished = () =>
        {
            isScanning = false;
            Debug.Log("scan finished");
            if (deviceId == null)
                deviceId = "-1";
        };
        while (deviceId == null)
            Thread.Sleep(500);
        scan.Cancel();
        scanningThread = null;
        isScanning = false;
        
        if (deviceId == "-1")
        {
            Debug.Log($"Scan is finished. {targetDeviceName} was not found.");
            return;
        }
        Debug.Log($"Found {targetDeviceName} device with id {deviceId}.");
        StartConHandler();
    }
    
    public void StartConHandler()
    {
        connectionThread = new Thread(ConnectBleDevice);
        connectionThread.Start();
    }

    void ConnectBleDevice()
    {
        if (deviceId != null)
        {
            try
            {
                Debug.Log($"Attempting to connect to {targetDeviceName} device with id {deviceId} ...");
                ble.Connect(deviceId,
                    serviceUuid,
                    characteristicUuids);
            } catch(Exception e)
            {
                Debug.Log("Could not establish connection to device with ID " + deviceId + "\n" + e);
            }
        }
        if (ble.isConnected)
            Debug.Log("Connected to: " + targetDeviceName);
    }
    
    void UpdateGuiText(string action)
    {
        switch(action) {
            case "scan":
                TextDiscoveredDevices.text = "";
                foreach (KeyValuePair<string, string> entry in discoveredDevices)
                {
                    TextDiscoveredDevices.text += "DeviceID: " + entry.Key + "\nDeviceName: " + entry.Value + "\n\n";
                    Debug.Log("Added device: " + entry.Key);
                }
                break;
            case "connected":
                TextTargetDeviceConnection.text = "Connected to target device:\n" + targetDeviceName;
                break;
            case "writeData":
                //if (!readingThread.IsAlive)
                //{
                //     readingThread = new Thread(ReadBleData);
                //     readingThread.Start();
                //}
                //if (remoteAngle != lastRemoteAngle)
                // {
                //   TextTargetDeviceData.text = "Remote angle: " + remoteAngle;
                //     lastRemoteAngle = remoteAngle;
                // }
                break;
        }
    }
    
    private void OnDestroy()
    {
        CleanUp();
    }

    private void OnApplicationQuit()
    {
        CleanUp();
    }

    // Prevent threading issues and free BLE stack.
    // Can cause Unity to freeze and lead
    // to errors when omitted.
    private void CleanUp()
    {
        try
        {
            scan.Cancel();
            ble.Close();
            scanningThread.Abort();
            connectionThread.Abort();
            //readingThread.Abort();
            writingThread.Abort();
        } catch(NullReferenceException e)
        {
            Debug.Log("Thread or object never initialized.\n" + e);
        }        
    }

    public void StartWritingHandler()
    {
        if (deviceId == "-1" || !isConnected || (writingThread?.IsAlive ?? false))
        {
            Debug.Log("Cannot write yet");
            return;
        }
        
        byte[] bytes = new byte[] {0, 1, 2, 3};
        Random random = new Random();
        int start2 = random.Next(0, bytes.Length);
        valuesToWrite = new byte[] {bytes[start2]};
        TextTargetDeviceData.text = "Writing some new: " + valuesToWrite[0];
        
        writingThread = new Thread(WriteBleData);
        writingThread.Start();
    }

    private void WriteBleData()
    {
        bool ok = BLE.WritePackage(deviceId,
            serviceUuid,
            characteristicUuids[0],
            valuesToWrite);
        
        Debug.Log($"Writing status: {ok}. {BLE.GetError()}");
        writingThread = null;
    }
    
    public void ReadBleData()
    {
        isReading = true;
        compressionVal = BLE.ReadPackage();
        //if needing constant call just remove
        //StartCoroutine(dataRead());

    }

    /*
     * Use if needing constant calling else just use compression val into
     */
    private IEnumerator dataRead()
    {
        while (true)
        {
            compressionVal =  BLE.ReadPackage();
            //best refresh rate before performance dips, dont mess with!!!
            yield return new WaitForSeconds(.088f);
            
        }
    }
}
