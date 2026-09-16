#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 6 member(s).
class SpectrumBrushProperties {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@SpectrumBrushProperties@@SAXXZ
    static void EnsureProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MaxSurface@SpectrumBrushProperties@@QEAA?AULoadedImageSurface@Media@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque MaxSurface();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MaxSurfaceOpacity@SpectrumBrushProperties@@QEAANXZ
    double MaxSurfaceOpacity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MaxSurfaceOpacity@SpectrumBrushProperties@@QEAAXN@Z
    void MaxSurfaceOpacity(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MinSurface@SpectrumBrushProperties@@QEAA?AULoadedImageSurface@Media@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque MinSurface();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@SpectrumBrushProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
};
