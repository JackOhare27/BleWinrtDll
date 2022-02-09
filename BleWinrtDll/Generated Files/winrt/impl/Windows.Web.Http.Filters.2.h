// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220131.2

#pragma once
#ifndef WINRT_Windows_Web_Http_Filters_2_H
#define WINRT_Windows_Web_Http_Filters_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.Web.Http.Filters.1.h"
WINRT_EXPORT namespace winrt::Windows::Web::Http::Filters
{
    struct __declspec(empty_bases) HttpBaseProtocolFilter : winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter,
        impl::require<HttpBaseProtocolFilter, winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter2, winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter3, winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter4, winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter5, winrt::Windows::Foundation::IClosable, winrt::Windows::Web::Http::Filters::IHttpFilter>
    {
        HttpBaseProtocolFilter(std::nullptr_t) noexcept {}
        HttpBaseProtocolFilter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Web::Http::Filters::IHttpBaseProtocolFilter(ptr, take_ownership_from_abi) {}
        HttpBaseProtocolFilter();
        static auto CreateForUser(winrt::Windows::System::User const& user);
    };
    struct __declspec(empty_bases) HttpCacheControl : winrt::Windows::Web::Http::Filters::IHttpCacheControl
    {
        HttpCacheControl(std::nullptr_t) noexcept {}
        HttpCacheControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Web::Http::Filters::IHttpCacheControl(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) HttpServerCustomValidationRequestedEventArgs : winrt::Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs
    {
        HttpServerCustomValidationRequestedEventArgs(std::nullptr_t) noexcept {}
        HttpServerCustomValidationRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Web::Http::Filters::IHttpServerCustomValidationRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
