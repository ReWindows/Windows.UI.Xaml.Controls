#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 23 member(s).
class AcrylicBrush {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AcrylicBrush@@QEAA@XZ
    AcrylicBrush();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAcrylicBrushWorker@AcrylicBrush@@SA?AUCompositionEffectBrush@Composition@UI@Windows@winrt@@AEBUCompositor@3456@_N1UColor@456@2211@Z
    static WindissectOpaque CreateAcrylicBrushWorker(WindissectOpaque const &, bool, bool, WindissectOpaque, WindissectOpaque, WindissectOpaque, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnected@AcrylicBrush@@QEAAXXZ
    void OnConnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@AcrylicBrush@@QEAAXXZ
    void OnDisconnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementConnected@AcrylicBrush@@QEAAXUDependencyObject@Xaml@UI@Windows@winrt@@@Z
    void OnElementConnected(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIslandTransformChanged@AcrylicBrush@@QEAAXAEBUCompositionIsland@Composition@UI@Windows@winrt@@AEBUIInspectable@Foundation@56@@Z
    void OnIslandTransformChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@AcrylicBrush@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AcrylicBrush@@UEAA@XZ
    virtual ~AcrylicBrush();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAcrylicBrush@AcrylicBrush@@IEAAX_N0@Z
    void CreateAcrylicBrush(bool, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelFallbackAnimationCompleteWait@AcrylicBrush@@AEAAXXZ
    void CancelFallbackAnimationCompleteWait();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CombineNoiseWithTintEffect_Legacy@AcrylicBrush@@CA?AUIGraphicsEffect@Effects@Graphics@Windows@winrt@@AEBUIGraphicsEffectSource@3456@AEBUColorSourceEffect@3Composition@UI@Microsoft@6@@Z
    static WindissectOpaque CombineNoiseWithTintEffect_Legacy(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAcrylicBrushCompositionEffectFactory@AcrylicBrush@@CA?AUCompositionEffectFactory@Composition@UI@Windows@winrt@@AEBUCompositor@3456@_N11UColor@456@22@Z
    static WindissectOpaque CreateAcrylicBrushCompositionEffectFactory(WindissectOpaque const &, bool, bool, bool, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureNoiseBrush@AcrylicBrush@@AEAAXXZ
    void EnsureNoiseBrush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveLuminosityColor@AcrylicBrush@@AEAA?AUColor@UI@Windows@winrt@@XZ
    WindissectOpaque GetEffectiveLuminosityColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveTintColor@AcrylicBrush@@AEAA?AUColor@UI@Windows@winrt@@XZ
    WindissectOpaque GetEffectiveTintColor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFallbackColorChanged@AcrylicBrush@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnFallbackColorChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlayCrossFadeAnimation@AcrylicBrush@@CAXAEBUCompositionBrush@Composition@UI@Windows@winrt@@MM@Z
    static void PlayCrossFadeAnimation(WindissectOpaque const &, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PolicyStatusChangedHelper@AcrylicBrush@@AEAAX_N0@Z
    void PolicyStatusChangedHelper(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAcrylicBrush@AcrylicBrush@@AEAAXXZ
    void UpdateAcrylicBrush();
};
