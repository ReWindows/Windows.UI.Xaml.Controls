#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 24 member(s).
class NavigationViewItem {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NavigationViewItem@@QEAA@XZ
    NavigationViewItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@NavigationViewItem@@UEAAXXZ
    virtual void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentChanged@NavigationViewItem@@UEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    virtual void OnContentChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@NavigationViewItem@@UEAA?AUAutomationPeer@Peers@Automation@Xaml@UI@Windows@winrt@@XZ
    virtual WindissectOpaque OnCreateAutomationPeer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocus@NavigationViewItem@@UEAAXAEBURoutedEventArgs@Xaml@UI@Windows@winrt@@@Z
    virtual void OnGotFocus(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLostFocus@NavigationViewItem@@UEAAXAEBURoutedEventArgs@Xaml@UI@Windows@winrt@@@Z
    virtual void OnLostFocus(WindissectOpaque const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@NavigationViewItem@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NavigationViewItem@@UEAA@XZ
    virtual ~NavigationViewItem();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigationViewListPositionChanged@NavigationViewItem@@EEAAXXZ
    virtual void OnNavigationViewListPositionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSplitViewPropertyChanged@NavigationViewItem@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnSplitViewPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldEnableToolTip@NavigationViewItem@@AEAA_NXZ
    bool ShouldEnableToolTip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuggestedToolTipChanged@NavigationViewItem@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@@Z
    void SuggestedToolTipChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCompactPaneLength@NavigationViewItem@@AEAAXXZ
    void UpdateCompactPaneLength();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsClosedCompact@NavigationViewItem@@AEAAXXZ
    void UpdateIsClosedCompact();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateNavigationViewItemToolTip@NavigationViewItem@@AEAAXXZ
    void UpdateNavigationViewItemToolTip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualState@NavigationViewItem@@AEAAX_N@Z
    void UpdateVisualState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualStateForIconAndContent@NavigationViewItem@@AEAAX_N0@Z
    void UpdateVisualStateForIconAndContent(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualStateForKeyboardFocusedState@NavigationViewItem@@AEAAXXZ
    void UpdateVisualStateForKeyboardFocusedState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualStateForNavigationViewListPositionChange@NavigationViewItem@@AEAAXXZ
    void UpdateVisualStateForNavigationViewListPositionChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualStateForToolTip@NavigationViewItem@@AEAAXXZ
    void UpdateVisualStateForToolTip();
};
