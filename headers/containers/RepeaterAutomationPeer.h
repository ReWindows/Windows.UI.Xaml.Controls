#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 2 member(s).
class RepeaterAutomationPeer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildrenCore@RepeaterAutomationPeer@@QEAA?AU?$IVector@UAutomationPeer@Peers@Automation@Xaml@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@XZ
    WindissectOpaque GetChildrenCore();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElement@RepeaterAutomationPeer@@AEAA?AUUIElement@Xaml@UI@Windows@winrt@@AEBUAutomationPeer@Peers@Automation@3456@AEBUItemsRepeater@Controls@3456@@Z
    WindissectOpaque GetElement(WindissectOpaque const &, WindissectOpaque const &);
};
