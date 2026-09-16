#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 15 member(s).
class NavigationViewItemBase {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNavigationView@NavigationViewItemBase@@QEAA?AUNavigationView@Controls@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque GetNavigationView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNavigationViewList@NavigationViewItemBase@@QEAA?AUNavigationViewList@Controls@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque GetNavigationViewList();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSplitView@NavigationViewItemBase@@QEAA?AUSplitView@Controls@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque GetSplitView();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NavigationViewItemBase@@QEAA@XZ
    NavigationViewItemBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@NavigationViewItemBase@@UEAAXXZ
    virtual void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentChanged@NavigationViewItemBase@@UEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    virtual void OnContentChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@NavigationViewItemBase@@UEAA?AUAutomationPeer@Peers@Automation@Xaml@UI@Windows@winrt@@XZ
    virtual WindissectOpaque OnCreateAutomationPeer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocus@NavigationViewItemBase@@UEAAXAEBURoutedEventArgs@Xaml@UI@Windows@winrt@@@Z
    virtual void OnGotFocus(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLostFocus@NavigationViewItemBase@@UEAAXAEBURoutedEventArgs@Xaml@UI@Windows@winrt@@@Z
    virtual void OnLostFocus(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigationViewListPositionChanged@NavigationViewItemBase@@UEAAXXZ
    virtual void OnNavigationViewListPositionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Position@NavigationViewItemBase@@QEAAXW4NavigationViewListPosition@@@Z
    void Position(int);
};
