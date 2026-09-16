#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 6 member(s).
class NavigationViewItemProperties {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompactPaneLength@NavigationViewItemProperties@@QEAANXZ
    double CompactPaneLength();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@NavigationViewItemProperties@@SAXXZ
    static void EnsureProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Icon@NavigationViewItemProperties@@QEAA?AUIconElement@Controls@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque Icon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@NavigationViewItemProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectsOnInvoked@NavigationViewItemProperties@@QEAAX_N@Z
    void SelectsOnInvoked(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectsOnInvoked@NavigationViewItemProperties@@QEAA_NXZ
    bool SelectsOnInvoked();
};
