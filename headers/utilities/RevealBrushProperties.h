#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 6 member(s).
class RevealBrushProperties {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AlwaysUseFallback@RevealBrushProperties@@QEAA_NXZ
    bool AlwaysUseFallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AlwaysUseFallback@RevealBrushProperties@@QEAAX_N@Z
    void AlwaysUseFallback(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Color@RevealBrushProperties@@QEAA?AU0UI@Windows@winrt@@XZ
    WindissectOpaque Color();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@RevealBrushProperties@@SAXXZ
    static void EnsureProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@RevealBrushProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetTheme@RevealBrushProperties@@QEAA?AW4ApplicationTheme@Xaml@UI@Windows@winrt@@XZ
    int TargetTheme();
};
