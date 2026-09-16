#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 4 member(s).
class ColorPickerSliderAutomationPeer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternCore@ColorPickerSliderAutomationPeer@@QEAA?AUIInspectable@Foundation@Windows@winrt@@AEBW4PatternInterface@Peers@Automation@Xaml@UI@45@@Z
    WindissectOpaque GetPatternCore(int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaisePropertyChangedEvent@ColorPickerSliderAutomationPeer@@QEAAXUColor@UI@Windows@winrt@@0HH@Z
    void RaisePropertyChangedEvent(WindissectOpaque, WindissectOpaque, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Value@ColorPickerSliderAutomationPeer@@QEAA?AUhstring@winrt@@XZ
    WindissectOpaque Value();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueString@ColorPickerSliderAutomationPeer@@AEAA?AUhstring@winrt@@UColor@UI@Windows@3@H@Z
    WindissectOpaque GetValueString(WindissectOpaque, int);
};
