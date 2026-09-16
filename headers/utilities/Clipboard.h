#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 2 member(s).
namespace winrt::Windows::ApplicationModel::DataTransfer {
class Clipboard {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContent@Clipboard@DataTransfer@ApplicationModel@Windows@winrt@@SA@XZ
    static GetContent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContent@Clipboard@DataTransfer@ApplicationModel@Windows@winrt@@SA@AEBUDataPackage@2345@@Z
    static SetContent(WindissectOpaque const &);
};
} // namespace winrt::Windows::ApplicationModel::DataTransfer
