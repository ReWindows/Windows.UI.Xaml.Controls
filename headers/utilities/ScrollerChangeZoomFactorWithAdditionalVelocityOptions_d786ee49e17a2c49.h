#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 7 member(s).
class ScrollerChangeZoomFactorWithAdditionalVelocityOptions {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdditionalVelocity@ScrollerChangeZoomFactorWithAdditionalVelocityOptions@@QEAAXM@Z
    void AdditionalVelocity(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CenterPoint@ScrollerChangeZoomFactorWithAdditionalVelocityOptions@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@winrt@@@Z
    void CenterPoint(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InertiaDecayRate@ScrollerChangeZoomFactorWithAdditionalVelocityOptions@@QEAAXAEBU?$IReference@M@Foundation@Windows@winrt@@@Z
    void InertiaDecayRate(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ScrollerChangeZoomFactorWithAdditionalVelocityOptions@@QEAA@MU?$IReference@M@Foundation@Windows@winrt@@Ufloat2@Numerics@234@@Z
    ScrollerChangeZoomFactorWithAdditionalVelocityOptions(float, WindissectOpaque, WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ScrollerChangeZoomFactorWithAdditionalVelocityOptions@@UEAA@XZ
    virtual ~ScrollerChangeZoomFactorWithAdditionalVelocityOptions();
};
