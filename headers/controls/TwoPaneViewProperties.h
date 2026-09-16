#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 14 member(s).
class TwoPaneViewProperties {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearProperties@TwoPaneViewProperties@@SAXXZ
    static void ClearProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@TwoPaneViewProperties@@SAXXZ
    static void EnsureProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MinTallModeHeight@TwoPaneViewProperties@@QEAANXZ
    double MinTallModeHeight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MinTallModeHeight@TwoPaneViewProperties@@QEAAXN@Z
    void MinTallModeHeight(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MinWideModeWidth@TwoPaneViewProperties@@QEAANXZ
    double MinWideModeWidth();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MinWideModeWidth@TwoPaneViewProperties@@QEAAXN@Z
    void MinWideModeWidth(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Mode@TwoPaneViewProperties@@QEAA?AW4TwoPaneViewMode@Controls@Xaml@UI@Windows@winrt@@XZ
    int Mode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@TwoPaneViewProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pane1Length@TwoPaneViewProperties@@QEAA?AUGridLength@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque Pane1Length();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pane2Length@TwoPaneViewProperties@@QEAA?AUGridLength@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque Pane2Length();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PanePriority@TwoPaneViewProperties@@QEAA?AW4TwoPaneViewPriority@Controls@Xaml@UI@Windows@winrt@@XZ
    int PanePriority();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TallModeConfiguration@TwoPaneViewProperties@@QEAA?AW4TwoPaneViewTallModeConfiguration@Controls@Xaml@UI@Windows@winrt@@XZ
    int TallModeConfiguration();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WideModeConfiguration@TwoPaneViewProperties@@QEAA?AW4TwoPaneViewWideModeConfiguration@Controls@Xaml@UI@Windows@winrt@@XZ
    int WideModeConfiguration();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TwoPaneViewProperties@@QEAA@XZ
    ~TwoPaneViewProperties();
};
