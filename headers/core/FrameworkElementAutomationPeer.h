#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 3 member(s).
namespace winrt::Windows::UI::Xaml::Automation::Peers {
class FrameworkElementAutomationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePeerForElement@FrameworkElementAutomationPeer@Peers@Automation@Xaml@UI@Windows@winrt@@SA@AEBUUIElement@4567@@Z
    static CreatePeerForElement(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromElement@FrameworkElementAutomationPeer@Peers@Automation@Xaml@UI@Windows@winrt@@SA@AEBUUIElement@4567@@Z
    static FromElement(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FrameworkElementAutomationPeer@Peers@Automation@Xaml@UI@Windows@winrt@@QEAA@XZ
    ~FrameworkElementAutomationPeer();
};
} // namespace winrt::Windows::UI::Xaml::Automation::Peers
