#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 11 member(s).
class NavigationViewItemHeader {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NavigationViewItemHeader@@QEAA@XZ
    NavigationViewItemHeader();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@NavigationViewItemHeader@@UEAAXXZ
    virtual void OnApplyTemplate();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@NavigationViewItemHeader@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NavigationViewItemHeader@@UEAA@XZ
    virtual ~NavigationViewItemHeader();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSplitViewPropertyChanged@NavigationViewItemHeader@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnSplitViewPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsClosedCompact@NavigationViewItemHeader@@AEAAXXZ
    void UpdateIsClosedCompact();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualState@NavigationViewItemHeader@@AEAAX_N@Z
    void UpdateVisualState(bool);
};
