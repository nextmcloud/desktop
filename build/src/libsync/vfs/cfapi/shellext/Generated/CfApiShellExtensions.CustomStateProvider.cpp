#include "pch.h"
#include "CfApiShellExtensions.CustomStateProvider.h"

// Note: Remove this static_assert after copying these generated source files to your project.
// This assertion exists to avoid compiling these generated source files directly.
static_assert(false, "Do not compile generated C++/WinRT source files directly");

namespace winrt::CfApiShellExtensions::implementation
{
    Windows::Foundation::Collections::IIterable<Windows::Storage::Provider::StorageProviderItemProperty> CustomStateProvider::GetItemProperties(hstring const& itemPath)
    {
        throw hresult_not_implemented();
    }
}
