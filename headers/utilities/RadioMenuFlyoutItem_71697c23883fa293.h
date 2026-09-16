#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 9 member(s).
class RadioMenuFlyoutItem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@RadioMenuFlyoutItem@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RadioMenuFlyoutItem@@QEAA@XZ
    RadioMenuFlyoutItem();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RadioMenuFlyoutItem@@UEAA@XZ
    virtual ~RadioMenuFlyoutItem();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInternalIsCheckedChanged@RadioMenuFlyoutItem@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnInternalIsCheckedChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSiblings@RadioMenuFlyoutItem@@AEAAXXZ
    void UpdateSiblings();
};
