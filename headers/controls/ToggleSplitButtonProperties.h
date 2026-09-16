#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 5 member(s).
class ToggleSplitButtonProperties {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@ToggleSplitButtonProperties@@SAXXZ
    static void EnsureProperties();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsChecked@ToggleSplitButtonProperties@@QEAAX_N@Z
    void IsChecked(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsChecked@ToggleSplitButtonProperties@@QEAA_NXZ
    bool IsChecked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@ToggleSplitButtonProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ToggleSplitButtonProperties@@QEAA@XZ
    ~ToggleSplitButtonProperties();
};
