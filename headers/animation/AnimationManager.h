#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 5 member(s).
class AnimationManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearElement@AnimationManager@@QEAA_NAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    bool ClearElement(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatorChanged@AnimationManager@@QEAAXAEBUElementAnimator@Controls@Xaml@UI@Windows@winrt@@@Z
    void OnAnimatorChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementBoundsChanged@AnimationManager@@QEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@URect@Foundation@56@1@Z
    void OnElementBoundsChanged(WindissectOpaque const &, WindissectOpaque, WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AnimationManager@@QEAA@XZ
    ~AnimationManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHideAnimationCompleted@AnimationManager@@AEAAXAEBUElementAnimator@Controls@Xaml@UI@Windows@winrt@@AEBUUIElement@4567@@Z
    void OnHideAnimationCompleted(WindissectOpaque const &, WindissectOpaque const &);
};
