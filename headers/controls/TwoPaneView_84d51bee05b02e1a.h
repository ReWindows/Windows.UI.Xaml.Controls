#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 14 member(s).
class TwoPaneView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@TwoPaneView@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@TwoPaneView@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TwoPaneView@@QEAA@XZ
    TwoPaneView();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TwoPaneView@@UEAA@XZ
    virtual ~TwoPaneView();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetControlRect@TwoPaneView@@AEAA?AURect@Foundation@Windows@winrt@@XZ
    WindissectOpaque GetControlRect();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInMultipleRegions@TwoPaneView@@AEAA_NUDisplayRegionHelperInfo@@URect@Foundation@Windows@winrt@@@Z
    bool IsInMultipleRegions(DisplayRegionHelperInfo, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollViewerLoaded@TwoPaneView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnScrollViewerLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSizeChanged@TwoPaneView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUSizeChangedEventArgs@Xaml@UI@45@@Z
    void OnSizeChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMode@TwoPaneView@@AEAAXXZ
    void UpdateMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRowsColumns@TwoPaneView@@AEAAXW4ViewMode@@UDisplayRegionHelperInfo@@URect@Foundation@Windows@winrt@@@Z
    void UpdateRowsColumns(int, DisplayRegionHelperInfo, WindissectOpaque);
};
