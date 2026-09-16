#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 10 member(s).
class RatingControlAutomationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?IValueProvider_Value@RatingControlAutomationPeer@@QEAA?AUhstring@winrt@@XZ
    WindissectOpaque IValueProvider_Value();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReadOnly@RatingControlAutomationPeer@@QEAA_NXZ
    bool IsReadOnly();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Maximum@RatingControlAutomationPeer@@QEAANXZ
    double Maximum();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaisePropertyChangedEvent@RatingControlAutomationPeer@@QEAAXN@Z
    void RaisePropertyChangedEvent(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@RatingControlAutomationPeer@@QEAAXAEBUhstring@winrt@@@Z
    void SetValue(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@RatingControlAutomationPeer@@QEAAXN@Z
    void SetValue(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Value@RatingControlAutomationPeer@@QEAANXZ
    double Value();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineFractionDigits@RatingControlAutomationPeer@@AEAAHN@Z
    int DetermineFractionDigits(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateValue_ValueString@RatingControlAutomationPeer@@AEAA?AUhstring@winrt@@U23@N@Z
    WindissectOpaque GenerateValue_ValueString(WindissectOpaque, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRatingControl@RatingControlAutomationPeer@@AEAA?AURatingControl@Controls@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque GetRatingControl();
};
