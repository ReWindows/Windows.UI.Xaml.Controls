#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 16 member(s).
class RevealBorderLight {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDarkThemeIdStatic@RevealBorderLight@@SAAEAUhstring@winrt@@XZ
    static WindissectOpaque & GetDarkThemeIdStatic();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLightThemeIdStatic@RevealBorderLight@@SAAEAUhstring@winrt@@XZ
    static WindissectOpaque & GetLightThemeIdStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnected@RevealBorderLight@@QEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    void OnConnected(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RevealBorderLight@@QEAA@XZ
    RevealBorderLight();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RevealBorderLight@@UEAA@XZ
    virtual ~RevealBorderLight();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCompositionResources@RevealBorderLight@@AEAAXXZ
    void EnsureCompositionResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureLocalLight@RevealBorderLight@@AEAAXXZ
    void EnsureLocalLight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookupWindowPointerHandlers@RevealBorderLight@@AEAAXXZ
    void HookupWindowPointerHandlers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseCompositionResources@RevealBorderLight@@AEAAXXZ
    void ReleaseCompositionResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseLocalLight@RevealBorderLight@@AEAAXXZ
    void ReleaseLocalLight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwitchLight@RevealBorderLight@@AEAAX_N@Z
    void SwitchLight(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhookWindowPointerHandlers@RevealBorderLight@@AEAAXXZ
    void UnhookWindowPointerHandlers();
};
