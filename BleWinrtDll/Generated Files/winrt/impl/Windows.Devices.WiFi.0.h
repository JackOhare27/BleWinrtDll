// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220131.2

#pragma once
#ifndef WINRT_Windows_Devices_WiFi_0_H
#define WINRT_Windows_Devices_WiFi_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IVectorView;
}
WINRT_EXPORT namespace winrt::Windows::Networking::Connectivity
{
    struct NetworkAdapter;
    struct NetworkSecuritySettings;
}
WINRT_EXPORT namespace winrt::Windows::Security::Credentials
{
    struct PasswordCredential;
}
WINRT_EXPORT namespace winrt::Windows::Devices::WiFi
{
    enum class WiFiAccessStatus : int32_t
    {
        Unspecified = 0,
        Allowed = 1,
        DeniedByUser = 2,
        DeniedBySystem = 3,
    };
    enum class WiFiConnectionMethod : int32_t
    {
        Default = 0,
        WpsPin = 1,
        WpsPushButton = 2,
    };
    enum class WiFiConnectionStatus : int32_t
    {
        UnspecifiedFailure = 0,
        Success = 1,
        AccessRevoked = 2,
        InvalidCredential = 3,
        NetworkNotAvailable = 4,
        Timeout = 5,
        UnsupportedAuthenticationProtocol = 6,
    };
    enum class WiFiNetworkKind : int32_t
    {
        Any = 0,
        Infrastructure = 1,
        Adhoc = 2,
    };
    enum class WiFiPhyKind : int32_t
    {
        Unknown = 0,
        Fhss = 1,
        Dsss = 2,
        IRBaseband = 3,
        Ofdm = 4,
        Hrdsss = 5,
        Erp = 6,
        HT = 7,
        Vht = 8,
        Dmg = 9,
        HE = 10,
    };
    enum class WiFiReconnectionKind : int32_t
    {
        Automatic = 0,
        Manual = 1,
    };
    enum class WiFiWpsConfigurationStatus : int32_t
    {
        UnspecifiedFailure = 0,
        Success = 1,
        Timeout = 2,
    };
    enum class WiFiWpsKind : int32_t
    {
        Unknown = 0,
        Pin = 1,
        PushButton = 2,
        Nfc = 3,
        Ethernet = 4,
        Usb = 5,
    };
    struct IWiFiAdapter;
    struct IWiFiAdapter2;
    struct IWiFiAdapterStatics;
    struct IWiFiAvailableNetwork;
    struct IWiFiConnectionResult;
    struct IWiFiNetworkReport;
    struct IWiFiWpsConfigurationResult;
    struct WiFiAdapter;
    struct WiFiAvailableNetwork;
    struct WiFiConnectionResult;
    struct WiFiNetworkReport;
    struct WiFiWpsConfigurationResult;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Devices::WiFi::IWiFiAdapter>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::WiFi::IWiFiAdapter2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::WiFi::IWiFiAdapterStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::WiFi::IWiFiAvailableNetwork>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::WiFi::IWiFiConnectionResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::WiFi::IWiFiNetworkReport>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::WiFi::IWiFiWpsConfigurationResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::WiFi::WiFiAdapter>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::WiFi::WiFiAvailableNetwork>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::WiFi::WiFiConnectionResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::WiFi::WiFiNetworkReport>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::WiFi::WiFiWpsConfigurationResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::WiFi::WiFiAccessStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Devices::WiFi::WiFiConnectionMethod>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Devices::WiFi::WiFiConnectionStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Devices::WiFi::WiFiNetworkKind>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Devices::WiFi::WiFiPhyKind>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Devices::WiFi::WiFiReconnectionKind>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Devices::WiFi::WiFiWpsConfigurationStatus>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Devices::WiFi::WiFiWpsKind>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::WiFi::WiFiAdapter> = L"Windows.Devices.WiFi.WiFiAdapter";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::WiFi::WiFiAvailableNetwork> = L"Windows.Devices.WiFi.WiFiAvailableNetwork";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::WiFi::WiFiConnectionResult> = L"Windows.Devices.WiFi.WiFiConnectionResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::WiFi::WiFiNetworkReport> = L"Windows.Devices.WiFi.WiFiNetworkReport";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::WiFi::WiFiWpsConfigurationResult> = L"Windows.Devices.WiFi.WiFiWpsConfigurationResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::WiFi::WiFiAccessStatus> = L"Windows.Devices.WiFi.WiFiAccessStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::WiFi::WiFiConnectionMethod> = L"Windows.Devices.WiFi.WiFiConnectionMethod";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::WiFi::WiFiConnectionStatus> = L"Windows.Devices.WiFi.WiFiConnectionStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::WiFi::WiFiNetworkKind> = L"Windows.Devices.WiFi.WiFiNetworkKind";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::WiFi::WiFiPhyKind> = L"Windows.Devices.WiFi.WiFiPhyKind";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::WiFi::WiFiReconnectionKind> = L"Windows.Devices.WiFi.WiFiReconnectionKind";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::WiFi::WiFiWpsConfigurationStatus> = L"Windows.Devices.WiFi.WiFiWpsConfigurationStatus";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::WiFi::WiFiWpsKind> = L"Windows.Devices.WiFi.WiFiWpsKind";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::WiFi::IWiFiAdapter> = L"Windows.Devices.WiFi.IWiFiAdapter";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::WiFi::IWiFiAdapter2> = L"Windows.Devices.WiFi.IWiFiAdapter2";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::WiFi::IWiFiAdapterStatics> = L"Windows.Devices.WiFi.IWiFiAdapterStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::WiFi::IWiFiAvailableNetwork> = L"Windows.Devices.WiFi.IWiFiAvailableNetwork";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::WiFi::IWiFiConnectionResult> = L"Windows.Devices.WiFi.IWiFiConnectionResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::WiFi::IWiFiNetworkReport> = L"Windows.Devices.WiFi.IWiFiNetworkReport";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::WiFi::IWiFiWpsConfigurationResult> = L"Windows.Devices.WiFi.IWiFiWpsConfigurationResult";
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::WiFi::IWiFiAdapter>{ 0xA6C4E423,0x3D75,0x43A4,{ 0xB9,0xDE,0x11,0xE2,0x6B,0x72,0xD9,0xB0 } }; // A6C4E423-3D75-43A4-B9DE-11E26B72D9B0
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::WiFi::IWiFiAdapter2>{ 0x5BC4501D,0x81E4,0x453D,{ 0x94,0x30,0x1F,0xCA,0xFB,0xAD,0xD6,0xB6 } }; // 5BC4501D-81E4-453D-9430-1FCAFBADD6B6
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::WiFi::IWiFiAdapterStatics>{ 0xDA25FDDD,0xD24C,0x43E3,{ 0xAA,0xBD,0xC4,0x65,0x9F,0x73,0x0F,0x99 } }; // DA25FDDD-D24C-43E3-AABD-C4659F730F99
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::WiFi::IWiFiAvailableNetwork>{ 0x26E96246,0x183E,0x4704,{ 0x98,0x26,0x71,0xB4,0xA2,0xF0,0xF6,0x68 } }; // 26E96246-183E-4704-9826-71B4A2F0F668
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::WiFi::IWiFiConnectionResult>{ 0x143BDFD9,0xC37D,0x40BE,{ 0xA5,0xC8,0x85,0x7B,0xCE,0x85,0xA9,0x31 } }; // 143BDFD9-C37D-40BE-A5C8-857BCE85A931
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::WiFi::IWiFiNetworkReport>{ 0x9524DED2,0x5911,0x445E,{ 0x81,0x94,0xBE,0x4F,0x1A,0x70,0x48,0x95 } }; // 9524DED2-5911-445E-8194-BE4F1A704895
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::WiFi::IWiFiWpsConfigurationResult>{ 0x67B49871,0x17EE,0x42D1,{ 0xB1,0x4F,0x5A,0x11,0xF1,0x22,0x6F,0xB5 } }; // 67B49871-17EE-42D1-B14F-5A11F1226FB5
    template <> struct default_interface<winrt::Windows::Devices::WiFi::WiFiAdapter>{ using type = winrt::Windows::Devices::WiFi::IWiFiAdapter; };
    template <> struct default_interface<winrt::Windows::Devices::WiFi::WiFiAvailableNetwork>{ using type = winrt::Windows::Devices::WiFi::IWiFiAvailableNetwork; };
    template <> struct default_interface<winrt::Windows::Devices::WiFi::WiFiConnectionResult>{ using type = winrt::Windows::Devices::WiFi::IWiFiConnectionResult; };
    template <> struct default_interface<winrt::Windows::Devices::WiFi::WiFiNetworkReport>{ using type = winrt::Windows::Devices::WiFi::IWiFiNetworkReport; };
    template <> struct default_interface<winrt::Windows::Devices::WiFi::WiFiWpsConfigurationResult>{ using type = winrt::Windows::Devices::WiFi::IWiFiWpsConfigurationResult; };
    template <> struct abi<winrt::Windows::Devices::WiFi::IWiFiAdapter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NetworkAdapter(void**) noexcept = 0;
            virtual int32_t __stdcall ScanAsync(void**) noexcept = 0;
            virtual int32_t __stdcall get_NetworkReport(void**) noexcept = 0;
            virtual int32_t __stdcall add_AvailableNetworksChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AvailableNetworksChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall ConnectAsync(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall ConnectWithPasswordCredentialAsync(void*, int32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall ConnectWithPasswordCredentialAndSsidAsync(void*, int32_t, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall Disconnect() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::WiFi::IWiFiAdapter2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetWpsConfigurationAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ConnectWithPasswordCredentialAndSsidAndConnectionMethodAsync(void*, int32_t, void*, void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::WiFi::IWiFiAdapterStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindAllAdaptersAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestAccessAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::WiFi::IWiFiAvailableNetwork>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Uptime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Ssid(void**) noexcept = 0;
            virtual int32_t __stdcall get_Bssid(void**) noexcept = 0;
            virtual int32_t __stdcall get_ChannelCenterFrequencyInKilohertz(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_NetworkRssiInDecibelMilliwatts(double*) noexcept = 0;
            virtual int32_t __stdcall get_SignalBars(uint8_t*) noexcept = 0;
            virtual int32_t __stdcall get_NetworkKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PhyKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SecuritySettings(void**) noexcept = 0;
            virtual int32_t __stdcall get_BeaconInterval(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsWiFiDirect(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::WiFi::IWiFiConnectionResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ConnectionStatus(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::WiFi::IWiFiNetworkReport>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Timestamp(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_AvailableNetworks(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::WiFi::IWiFiWpsConfigurationResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_SupportedWpsKinds(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_WiFi_IWiFiAdapter
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Networking::Connectivity::NetworkAdapter) NetworkAdapter() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncAction) ScanAsync() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::WiFi::WiFiNetworkReport) NetworkReport() const;
        WINRT_IMPL_AUTO(winrt::event_token) AvailableNetworksChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::WiFi::WiFiAdapter, winrt::Windows::Foundation::IInspectable> const& args) const;
        using AvailableNetworksChanged_revoker = impl::event_revoker<winrt::Windows::Devices::WiFi::IWiFiAdapter, &impl::abi_t<winrt::Windows::Devices::WiFi::IWiFiAdapter>::remove_AvailableNetworksChanged>;
        [[nodiscard]] AvailableNetworksChanged_revoker AvailableNetworksChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::WiFi::WiFiAdapter, winrt::Windows::Foundation::IInspectable> const& args) const;
        WINRT_IMPL_AUTO(void) AvailableNetworksChanged(winrt::event_token const& eventCookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::WiFi::WiFiConnectionResult>) ConnectAsync(winrt::Windows::Devices::WiFi::WiFiAvailableNetwork const& availableNetwork, winrt::Windows::Devices::WiFi::WiFiReconnectionKind const& reconnectionKind) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::WiFi::WiFiConnectionResult>) ConnectAsync(winrt::Windows::Devices::WiFi::WiFiAvailableNetwork const& availableNetwork, winrt::Windows::Devices::WiFi::WiFiReconnectionKind const& reconnectionKind, winrt::Windows::Security::Credentials::PasswordCredential const& passwordCredential) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::WiFi::WiFiConnectionResult>) ConnectAsync(winrt::Windows::Devices::WiFi::WiFiAvailableNetwork const& availableNetwork, winrt::Windows::Devices::WiFi::WiFiReconnectionKind const& reconnectionKind, winrt::Windows::Security::Credentials::PasswordCredential const& passwordCredential, param::hstring const& ssid) const;
        WINRT_IMPL_AUTO(void) Disconnect() const;
    };
    template <> struct consume<winrt::Windows::Devices::WiFi::IWiFiAdapter>
    {
        template <typename D> using type = consume_Windows_Devices_WiFi_IWiFiAdapter<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_WiFi_IWiFiAdapter2
    {
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::WiFi::WiFiWpsConfigurationResult>) GetWpsConfigurationAsync(winrt::Windows::Devices::WiFi::WiFiAvailableNetwork const& availableNetwork) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::WiFi::WiFiConnectionResult>) ConnectAsync(winrt::Windows::Devices::WiFi::WiFiAvailableNetwork const& availableNetwork, winrt::Windows::Devices::WiFi::WiFiReconnectionKind const& reconnectionKind, winrt::Windows::Security::Credentials::PasswordCredential const& passwordCredential, param::hstring const& ssid, winrt::Windows::Devices::WiFi::WiFiConnectionMethod const& connectionMethod) const;
    };
    template <> struct consume<winrt::Windows::Devices::WiFi::IWiFiAdapter2>
    {
        template <typename D> using type = consume_Windows_Devices_WiFi_IWiFiAdapter2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_WiFi_IWiFiAdapterStatics
    {
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::WiFi::WiFiAdapter>>) FindAllAdaptersAsync() const;
        WINRT_IMPL_AUTO(hstring) GetDeviceSelector() const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::WiFi::WiFiAdapter>) FromIdAsync(param::hstring const& deviceId) const;
        WINRT_IMPL_AUTO(winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::WiFi::WiFiAccessStatus>) RequestAccessAsync() const;
    };
    template <> struct consume<winrt::Windows::Devices::WiFi::IWiFiAdapterStatics>
    {
        template <typename D> using type = consume_Windows_Devices_WiFi_IWiFiAdapterStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_WiFi_IWiFiAvailableNetwork
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) Uptime() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Ssid() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Bssid() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) ChannelCenterFrequencyInKilohertz() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) NetworkRssiInDecibelMilliwatts() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint8_t) SignalBars() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::WiFi::WiFiNetworkKind) NetworkKind() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::WiFi::WiFiPhyKind) PhyKind() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Networking::Connectivity::NetworkSecuritySettings) SecuritySettings() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) BeaconInterval() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsWiFiDirect() const;
    };
    template <> struct consume<winrt::Windows::Devices::WiFi::IWiFiAvailableNetwork>
    {
        template <typename D> using type = consume_Windows_Devices_WiFi_IWiFiAvailableNetwork<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_WiFi_IWiFiConnectionResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::WiFi::WiFiConnectionStatus) ConnectionStatus() const;
    };
    template <> struct consume<winrt::Windows::Devices::WiFi::IWiFiConnectionResult>
    {
        template <typename D> using type = consume_Windows_Devices_WiFi_IWiFiConnectionResult<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_WiFi_IWiFiNetworkReport
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::DateTime) Timestamp() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::WiFi::WiFiAvailableNetwork>) AvailableNetworks() const;
    };
    template <> struct consume<winrt::Windows::Devices::WiFi::IWiFiNetworkReport>
    {
        template <typename D> using type = consume_Windows_Devices_WiFi_IWiFiNetworkReport<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_WiFi_IWiFiWpsConfigurationResult
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Devices::WiFi::WiFiWpsConfigurationStatus) Status() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Devices::WiFi::WiFiWpsKind>) SupportedWpsKinds() const;
    };
    template <> struct consume<winrt::Windows::Devices::WiFi::IWiFiWpsConfigurationResult>
    {
        template <typename D> using type = consume_Windows_Devices_WiFi_IWiFiWpsConfigurationResult<D>;
    };
}
#endif
