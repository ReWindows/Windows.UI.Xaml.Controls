#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 20 member(s).
class ElementAnimator {
public:
    class ElementInfo;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ElementAnimator@@QEAA@XZ
    ElementAnimator();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasBoundsChangeAnimation@ElementAnimator@@QEAA_NAEBUUIElement@Xaml@UI@Windows@winrt@@AEBW4AnimationContext@Controls@3456@AEBURect@Foundation@56@2@Z
    bool HasBoundsChangeAnimation(WindissectOpaque const &, int const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasBoundsChangeAnimationCore@ElementAnimator@@QEAA_NAEBUUIElement@Xaml@UI@Windows@winrt@@AEBW4AnimationContext@Controls@3456@AEBURect@Foundation@56@2@Z
    bool HasBoundsChangeAnimationCore(WindissectOpaque const &, int const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasHideAnimation@ElementAnimator@@QEAA_NAEBUUIElement@Xaml@UI@Windows@winrt@@AEBW4AnimationContext@Controls@3456@@Z
    bool HasHideAnimation(WindissectOpaque const &, int const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasHideAnimationCore@ElementAnimator@@QEAA_NAEBUUIElement@Xaml@UI@Windows@winrt@@AEBW4AnimationContext@Controls@3456@@Z
    bool HasHideAnimationCore(WindissectOpaque const &, int const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasShowAnimation@ElementAnimator@@QEAA_NAEBUUIElement@Xaml@UI@Windows@winrt@@AEBW4AnimationContext@Controls@3456@@Z
    bool HasShowAnimation(WindissectOpaque const &, int const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasShowAnimationCore@ElementAnimator@@QEAA_NAEBUUIElement@Xaml@UI@Windows@winrt@@AEBW4AnimationContext@Controls@3456@@Z
    bool HasShowAnimationCore(WindissectOpaque const &, int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementBoundsChanged@ElementAnimator@@QEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@AEBW4AnimationContext@Controls@3456@AEBURect@Foundation@56@2@Z
    void OnElementBoundsChanged(WindissectOpaque const &, int const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementHidden@ElementAnimator@@QEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@AEBW4AnimationContext@Controls@3456@@Z
    void OnElementHidden(WindissectOpaque const &, int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementShown@ElementAnimator@@QEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@AEBW4AnimationContext@Controls@3456@@Z
    void OnElementShown(WindissectOpaque const &, int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartBoundsChangeAnimation@ElementAnimator@@QEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@AEBW4AnimationContext@Controls@3456@AEBURect@Foundation@56@2@Z
    void StartBoundsChangeAnimation(WindissectOpaque const &, int const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartHideAnimation@ElementAnimator@@QEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@AEBW4AnimationContext@Controls@3456@@Z
    void StartHideAnimation(WindissectOpaque const &, int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartShowAnimation@ElementAnimator@@QEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@AEBW4AnimationContext@Controls@3456@@Z
    void StartShowAnimation(WindissectOpaque const &, int const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ElementAnimator@@UEAA@XZ
    virtual ~ElementAnimator();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRendering@ElementAnimator@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnRendering(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueElementForAnimation@ElementAnimator@@AEAAXUElementInfo@1@@Z
    void QueueElementForAnimation(WindissectOpaque);
};
