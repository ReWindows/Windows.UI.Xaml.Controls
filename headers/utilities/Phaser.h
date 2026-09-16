#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 4 member(s).
class Phaser {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PhaseElement@Phaser@@QEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@AEBU?$com_ptr@VVirtualizationInfo@@@6@@Z
    void PhaseElement(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopPhasing@Phaser@@QEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@AEBU?$com_ptr@VVirtualizationInfo@@@6@@Z
    void StopPhasing(WindissectOpaque const &, WindissectOpaque const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoPhasedWorkCallback@Phaser@@AEAAXXZ
    void DoPhasedWorkCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForCallback@Phaser@@AEAAXXZ
    void RegisterForCallback();
};
