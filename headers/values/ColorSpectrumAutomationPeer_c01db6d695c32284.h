#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 6 member(s).
class ColorSpectrumAutomationPeer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundingRectangleCore@ColorSpectrumAutomationPeer@@QEAA?AURect@Foundation@Windows@winrt@@XZ
    WindissectOpaque GetBoundingRectangleCore();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNameCore@ColorSpectrumAutomationPeer@@QEAA?AUhstring@winrt@@XZ
    WindissectOpaque GetNameCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaisePropertyChangedEvent@ColorSpectrumAutomationPeer@@QEAAXUColor@UI@Windows@winrt@@0Ufloat4@Numerics@Foundation@45@1@Z
    void RaisePropertyChangedEvent(WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@ColorSpectrumAutomationPeer@@QEAAXAEBUhstring@winrt@@@Z
    void SetValue(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Value@ColorSpectrumAutomationPeer@@QEAA?AUhstring@winrt@@XZ
    WindissectOpaque Value();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueString@ColorSpectrumAutomationPeer@@CA?AUhstring@winrt@@UColor@UI@Windows@3@Ufloat4@Numerics@Foundation@63@@Z
    static WindissectOpaque GetValueString(WindissectOpaque, WindissectOpaque);
};
