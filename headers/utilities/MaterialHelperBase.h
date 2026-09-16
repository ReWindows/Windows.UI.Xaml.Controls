#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 9 member(s).
class MaterialHelperBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateScaledBrush@MaterialHelperBase@@QEAA?AUCompositionSurfaceBrush@Composition@UI@Windows@winrt@@H@Z
    WindissectOpaque CreateScaledBrush(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IgnoreAreEffectsFast@MaterialHelperBase@@SA_NXZ
    static bool IgnoreAreEffectsFast();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MaterialHelperBase@@QEAA@XZ
    MaterialHelperBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRevealBrushConnected@MaterialHelperBase@@SAXXZ
    static void OnRevealBrushConnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRevealBrushDisconnected@MaterialHelperBase@@SAXXZ
    static void OnRevealBrushDisconnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SimulateDisabledByPolicy@MaterialHelperBase@@SA_NXZ
    static bool SimulateDisabledByPolicy();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MaterialHelperBase@@UEAA@XZ
    virtual ~MaterialHelperBase();
};
