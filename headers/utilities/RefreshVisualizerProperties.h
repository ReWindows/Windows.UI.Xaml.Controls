#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 8 member(s).
class RefreshVisualizerProperties {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Content@RefreshVisualizerProperties@@QEAA?AUUIElement@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque Content();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Content@RefreshVisualizerProperties@@QEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    void Content(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@RefreshVisualizerProperties@@SAXXZ
    static void EnsureProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@RefreshVisualizerProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Orientation@RefreshVisualizerProperties@@QEAA?AW4RefreshVisualizerOrientation@Controls@Xaml@UI@Windows@winrt@@XZ
    int Orientation();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RefreshVisualizerProperties@@QEAA@XZ
    RefreshVisualizerProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?State@RefreshVisualizerProperties@@QEAA?AW4RefreshVisualizerState@Controls@Xaml@UI@Windows@winrt@@XZ
    int State();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RefreshVisualizerProperties@@QEAA@XZ
    ~RefreshVisualizerProperties();
};
