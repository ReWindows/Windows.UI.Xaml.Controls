#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 17 member(s).
class RevealHoverLight {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLightIdStatic@RevealHoverLight@@SAAEAUhstring@winrt@@XZ
    static WindissectOpaque & GetLightIdStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnected@RevealHoverLight@@QEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    void OnConnected(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RevealHoverLight@@QEAA@XZ
    RevealHoverLight();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RevealHoverLight@@UEAA@XZ
    virtual ~RevealHoverLight();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelCurrentPressStateContinuation@RevealHoverLight@@AEAAXXZ
    void CancelCurrentPressStateContinuation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableHoverAnimation@RevealHoverLight@@AEAAXXZ
    void DisableHoverAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableHoverAnimation@RevealHoverLight@@AEAAXXZ
    void EnableHoverAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCompositionResources@RevealHoverLight@@AEAAXXZ
    void EnsureCompositionResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GotoLightState@RevealHoverLight@@AEAAXW4LightEvents@1@@Z
    void GotoLightState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GotoLightStateHelper@RevealHoverLight@@AEAAXW4LightStates@1@_N@Z
    void GotoLightStateHelper(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@RevealHoverLight@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUPointerRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnPointerPressed(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseCompositionResources@RevealHoverLight@@AEAAXXZ
    void ReleaseCompositionResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwitchLight@RevealHoverLight@@AEAAX_N@Z
    void SwitchLight(bool);
};
