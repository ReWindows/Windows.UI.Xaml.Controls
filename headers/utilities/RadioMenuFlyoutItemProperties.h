#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 5 member(s).
class RadioMenuFlyoutItemProperties {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@RadioMenuFlyoutItemProperties@@SAXXZ
    static void EnsureProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GroupName@RadioMenuFlyoutItemProperties@@QEAA?AUhstring@winrt@@XZ
    WindissectOpaque GroupName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsChecked@RadioMenuFlyoutItemProperties@@QEAAX_N@Z
    void IsChecked(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsChecked@RadioMenuFlyoutItemProperties@@QEAA_NXZ
    bool IsChecked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@RadioMenuFlyoutItemProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
};
