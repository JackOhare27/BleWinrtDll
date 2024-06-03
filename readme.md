# Unity project with BleWinrtDll configured for HoloLens 2 + Prestan CPR Manakin

To try it out in Unity, open the project "BleWinrtDll Unity" in Unity. Then start the scene "Assets/Scenes/Demo.scene".
To test on HoloLens, build as you would from Unity project. You will need to assign ReadBleData() to a button or input. Once this is done the program update the compression depth to you in the debug console and also is stored in a variable. I recommend using the couroutine method to constantly grab data especially if you are trying to determine compression depth and consistency

My goal was to send data from Arduino to HoloLens 2 through BLE created in Unity Engine.
