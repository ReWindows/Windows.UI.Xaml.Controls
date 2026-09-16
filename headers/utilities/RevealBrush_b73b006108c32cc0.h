#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 25 member(s).
class RevealBrush {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachLightsToIsland@RevealBrush@@SAXAEBUXamlIsland@Hosting@Xaml@UI@Windows@winrt@@@Z
    static void AttachLightsToIsland(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearProperties@RevealBrush@@SAXXZ
    static void ClearProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@RevealBrush@@SAXXZ
    static void EnsureProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnected@RevealBrush@@QEAAXXZ
    void OnConnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@RevealBrush@@QEAAXXZ
    void OnDisconnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementConnected@RevealBrush@@QEAAXUDependencyObject@Xaml@UI@Windows@winrt@@@Z
    void OnElementConnected(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIslandTransformChanged@RevealBrush@@QEAAXAEBUCompositionIsland@Composition@UI@Windows@winrt@@AEBUIInspectable@Foundation@56@@Z
    void OnIslandTransformChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStatePropertyChanged@RevealBrush@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnStatePropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RevealBrush@@QEAA@XZ
    RevealBrush();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RevealBrush@@UEAA@XZ
    virtual ~RevealBrush();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRevealBorderEffect@RevealBrush@@KA?AUIGraphicsEffect@Effects@Graphics@Windows@winrt@@_N0@Z
    static WindissectOpaque CreateRevealBorderEffect(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRevealBrush@RevealBrush@@IEAAXXZ
    void CreateRevealBrush();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRevealHoverEffect@RevealBrush@@KA?AUIGraphicsEffect@Effects@Graphics@Windows@winrt@@XZ
    static WindissectOpaque CreateRevealHoverEffect();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInFallbackMode@RevealBrush@@IEAA_NXZ
    bool IsInFallbackMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFallbackColorChanged@RevealBrush@@IEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnFallbackColorChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLightTargets@RevealBrush@@IEAAX_N@Z
    void UpdateLightTargets(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRevealBrush@RevealBrush@@IEAAXXZ
    void UpdateRevealBrush();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachLightsImpl@RevealBrush@@CAXXZ
    static void AttachLightsImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachLightsToElement@RevealBrush@@CAXAEBUUIElement@Xaml@UI@Windows@winrt@@_N@Z
    static void AttachLightsToElement(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureNoiseBrush@RevealBrush@@AEAAXXZ
    void EnsureNoiseBrush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAncestor@RevealBrush@@CA?AUUIElement@Xaml@UI@Windows@winrt@@AEBU23456@@Z
    static WindissectOpaque GetAncestor(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsContainerPropertyChanged@RevealBrush@@CAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnIsContainerPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PolicyStatusChangedHelper@RevealBrush@@AEAAX_N@Z
    void PolicyStatusChangedHelper(bool);
};
