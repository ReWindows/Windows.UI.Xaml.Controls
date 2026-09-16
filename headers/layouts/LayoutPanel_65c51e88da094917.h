#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 17 member(s).
class LayoutPanel {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@LayoutPanel@@QEAA?AUSize@Foundation@Windows@winrt@@AEBU2345@@Z
    WindissectOpaque ArrangeOverride(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BorderThickness@LayoutPanel@@QEAA?AUThickness@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque BorderThickness();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@LayoutPanel@@SAXXZ
    static void EnsureProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Layout@LayoutPanel@@QEAA?AU0Controls@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque Layout();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LayoutPanel@@QEAA@XZ
    LayoutPanel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@LayoutPanel@@QEAA?AUSize@Foundation@Windows@winrt@@AEBU2345@@Z
    WindissectOpaque MeasureOverride(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@LayoutPanel@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@LayoutPanel@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Padding@LayoutPanel@@QEAA?AUThickness@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque Padding();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LayoutPanel@@UEAA@XZ
    virtual ~LayoutPanel();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateArrangeForLayout@LayoutPanel@@AEAAXAEBULayout@Controls@Xaml@UI@Windows@winrt@@AEBUIInspectable@Foundation@67@@Z
    void InvalidateArrangeForLayout(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateMeasureForLayout@LayoutPanel@@AEAAXAEBULayout@Controls@Xaml@UI@Windows@winrt@@AEBUIInspectable@Foundation@67@@Z
    void InvalidateMeasureForLayout(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLayoutChanged@LayoutPanel@@AEAAXAEBULayout@Controls@Xaml@UI@Windows@winrt@@0@Z
    void OnLayoutChanged(WindissectOpaque const &, WindissectOpaque const &);
};
