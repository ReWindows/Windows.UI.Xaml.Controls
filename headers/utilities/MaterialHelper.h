#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 10 member(s).
class MaterialHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdditionalPolicyChanged@MaterialHelper@@SAXUevent_token@winrt@@@Z
    static void AdditionalPolicyChanged(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNoiseBrush@MaterialHelper@@SA?AUCompositionSurfaceBrush@Composition@UI@Windows@winrt@@H@Z
    static WindissectOpaque GetNoiseBrush(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyAdditionalPolicyChangedListeners@MaterialHelper@@QEAAXXZ
    void NotifyAdditionalPolicyChangedListeners();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRevealBrushConnectedIsland@MaterialHelper@@SAXAEBUXamlIsland@Hosting@Xaml@UI@Windows@winrt@@@Z
    static void OnRevealBrushConnectedIsland(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRevealBrushDisconnectedIsland@MaterialHelper@@SAXAEBUXamlIsland@Hosting@Xaml@UI@Windows@winrt@@@Z
    static void OnRevealBrushDisconnectedIsland(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RevealBorderLightUnavailable@MaterialHelper@@SA_NXZ
    static bool RevealBorderLightUnavailable();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MaterialHelper@@UEAA@XZ
    virtual ~MaterialHelper();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNoiseBrushImpl@MaterialHelper@@AEAA?AUCompositionSurfaceBrush@Composition@UI@Windows@winrt@@H@Z
    WindissectOpaque GetNoiseBrushImpl(int);
};
