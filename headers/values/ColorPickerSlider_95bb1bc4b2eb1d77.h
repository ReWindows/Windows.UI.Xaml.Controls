#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 12 member(s).
class ColorPickerSlider {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ColorPickerSlider@@QEAA@XZ
    ColorPickerSlider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@ColorPickerSlider@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocus@ColorPickerSlider@@QEAAXAEBURoutedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnGotFocus(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@ColorPickerSlider@@QEAAXAEBUKeyRoutedEventArgs@Input@Xaml@UI@Windows@winrt@@@Z
    void OnKeyDown(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ColorPickerSlider@@UEAA@XZ
    virtual ~ColorPickerSlider();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentColorPicker@ColorPickerSlider@@AEAA?AUColorPicker@Controls@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque GetParentColorPicker();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetToolTipString@ColorPickerSlider@@AEAA?AUhstring@winrt@@XZ
    WindissectOpaque GetToolTipString();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnValueChangedEvent@ColorPickerSlider@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURangeBaseValueChangedEventArgs@Primitives@Controls@Xaml@UI@45@@Z
    void OnValueChangedEvent(WindissectOpaque const &, WindissectOpaque const &);
};
