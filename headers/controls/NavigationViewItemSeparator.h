#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 8 member(s).
class NavigationViewItemSeparator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@NavigationViewItemSeparator@@UEAAXXZ
    virtual void OnApplyTemplate();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@NavigationViewItemSeparator@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigationViewListPositionChanged@NavigationViewItemSeparator@@EEAAXXZ
    virtual void OnNavigationViewListPositionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualState@NavigationViewItemSeparator@@AEAAX_N@Z
    void UpdateVisualState(bool);
};
