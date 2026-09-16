#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 6 member(s).
class RefreshContainerProperties {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@RefreshContainerProperties@@SAXXZ
    static void EnsureProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@RefreshContainerProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PullDirection@RefreshContainerProperties@@QEAA?AW4RefreshPullDirection@Controls@Xaml@UI@Windows@winrt@@XZ
    int PullDirection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Visualizer@RefreshContainerProperties@@QEAA?AURefreshVisualizer@Controls@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque Visualizer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Visualizer@RefreshContainerProperties@@QEAAXAEBURefreshVisualizer@Controls@Xaml@UI@Windows@winrt@@@Z
    void Visualizer(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RefreshContainerProperties@@QEAA@XZ
    ~RefreshContainerProperties();
};
