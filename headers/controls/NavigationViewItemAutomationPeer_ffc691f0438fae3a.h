#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 10 member(s).
class NavigationViewItemAutomationPeer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNameCore@NavigationViewItemAutomationPeer@@QEAA?AUhstring@winrt@@XZ
    WindissectOpaque GetNameCore();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionInSetCore@NavigationViewItemAutomationPeer@@QEAAHXZ
    int GetPositionInSetCore();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeOfSetCore@NavigationViewItemAutomationPeer@@QEAAHXZ
    int GetSizeOfSetCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@NavigationViewItemAutomationPeer@@QEAAXXZ
    void Invoke();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNavigationViewListPosition@NavigationViewItemAutomationPeer@@AEAA?AW4NavigationViewListPosition@@XZ
    int GetNavigationViewListPosition();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentNavigationView@NavigationViewItemAutomationPeer@@AEAA?AUNavigationView@Controls@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque GetParentNavigationView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionOrSetCountInLeftNavHelper@NavigationViewItemAutomationPeer@@AEAAHW4AutomationOutput@1@@Z
    int GetPositionOrSetCountInLeftNavHelper(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionOrSetCountInTopNavHelper@NavigationViewItemAutomationPeer@@AEAAHU?$IVector@UIInspectable@Foundation@Windows@winrt@@@Collections@Foundation@Windows@winrt@@W4AutomationOutput@1@@Z
    int GetPositionOrSetCountInTopNavHelper(WindissectOpaque, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOnTopNavigation@NavigationViewItemAutomationPeer@@AEAA_NXZ
    bool IsOnTopNavigation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOnTopNavigationOverflow@NavigationViewItemAutomationPeer@@AEAA_NXZ
    bool IsOnTopNavigationOverflow();
};
