#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 12 member(s).
class NavigationViewList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearContainerForItemOverride@NavigationViewList@@QEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUIInspectable@Foundation@56@@Z
    void ClearContainerForItemOverride(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainerForItemOverride@NavigationViewList@@QEAA?AUDependencyObject@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque GetContainerForItemOverride();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNavigationViewParent@NavigationViewList@@QEAA?AUNavigationView@Controls@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque GetNavigationViewParent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsItemItsOwnContainerOverride@NavigationViewList@@QEAA_NAEBUIInspectable@Foundation@Windows@winrt@@@Z
    bool IsItemItsOwnContainerOverride(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@NavigationViewList@@QEAAXAEBUKeyRoutedEventArgs@Input@Xaml@UI@Windows@winrt@@@Z
    void OnKeyDown(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareContainerForItemOverride@NavigationViewList@@QEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUIInspectable@Foundation@56@@Z
    void PrepareContainerForItemOverride(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShowFocusVisual@NavigationViewList@@QEAAX_N@Z
    void SetShowFocusVisual(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NavigationViewList@@UEAA@XZ
    virtual ~NavigationViewList();
};
