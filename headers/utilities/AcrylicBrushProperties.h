#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 11 member(s).
class AcrylicBrushProperties {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AlwaysUseFallback@AcrylicBrushProperties@@QEAA_NXZ
    bool AlwaysUseFallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AlwaysUseFallback@AcrylicBrushProperties@@QEAAX_N@Z
    void AlwaysUseFallback(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BackgroundSource@AcrylicBrushProperties@@QEAA?AW4AcrylicBackgroundSource@Media@Xaml@UI@Windows@winrt@@XZ
    int BackgroundSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearProperties@AcrylicBrushProperties@@SAXXZ
    static void ClearProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@AcrylicBrushProperties@@SAXXZ
    static void EnsureProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@AcrylicBrushProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged_CoerceToZeroOneRange@AcrylicBrushProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnPropertyChanged_CoerceToZeroOneRange(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged_CoerceToZeroOneRange_Nullable@AcrylicBrushProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnPropertyChanged_CoerceToZeroOneRange_Nullable(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TintColor@AcrylicBrushProperties@@QEAA?AUColor@UI@Windows@winrt@@XZ
    WindissectOpaque TintColor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TintLuminosityOpacity@AcrylicBrushProperties@@QEAA?AU?$IReference@N@Foundation@Windows@winrt@@XZ
    WindissectOpaque TintLuminosityOpacity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TintOpacity@AcrylicBrushProperties@@QEAANXZ
    double TintOpacity();
};
