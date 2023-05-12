#pragma once
#include "CfApiShellExtensions/CustomStateProvider.g.h"

// Note: Remove this static_assert after copying these generated source files to your project.
// This assertion exists to avoid compiling these generated source files directly.
static_assert(false, "Do not compile generated C++/WinRT source files directly");

namespace winrt::CfApiShellExtensions::implementation
{
    struct CustomStateProvider : CustomStateProviderT<CustomStateProvider>
    {
        CustomStateProvider() = default;

        Windows::Foundation::Collections::IIterable<Windows::Storage::Provider::StorageProviderItemProperty> GetItemProperties(hstring const& itemPath);
    };
}
namespace winrt::CfApiShellExtensions::factory_implementation
{
    struct CustomStateProvider : CustomStateProviderT<CustomStateProvider, implementation::CustomStateProvider>
    {
    };
}
