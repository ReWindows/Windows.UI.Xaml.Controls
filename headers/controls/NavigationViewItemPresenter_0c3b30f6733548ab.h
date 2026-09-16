#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 8 member(s).
class NavigationViewItemPresenter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GoToElementStateCore@NavigationViewItemPresenter@@QEAA_NAEBUhstring@winrt@@_N@Z
    bool GoToElementStateCore(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@NavigationViewItemPresenter@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NavigationViewItemPresenter@@UEAA@XZ
    virtual ~NavigationViewItemPresenter();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNavigationViewItem@NavigationViewItemPresenter@@AEAAPEAVNavigationViewItem@@XZ
    NavigationViewItem * GetNavigationViewItem();
};
