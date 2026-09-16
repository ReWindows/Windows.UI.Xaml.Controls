#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 12 member(s).
class DropDownButton {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DropDownButton@@QEAA@XZ
    DropDownButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@DropDownButton@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenFlyout@DropDownButton@@QEAAXXZ
    void OpenFlyout();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DropDownButton@@UEAA@XZ
    virtual ~DropDownButton();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFlyoutClosed@DropDownButton@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnFlyoutClosed(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFlyoutOpened@DropDownButton@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnFlyoutOpened(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFlyoutPropertyChanged@DropDownButton@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnFlyoutPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterFlyoutEvents@DropDownButton@@AEAAXXZ
    void RegisterFlyoutEvents();
};
