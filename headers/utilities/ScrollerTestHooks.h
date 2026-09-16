#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 18 member(s).
class ScrollerTestHooks {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreAnchorNotificationsRaised@ScrollerTestHooks@@SA_NXZ
    static bool AreAnchorNotificationsRaised();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreInteractionSourcesNotificationsRaised@ScrollerTestHooks@@SA_NXZ
    static bool AreInteractionSourcesNotificationsRaised();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureGlobalTestHooks@ScrollerTestHooks@@SA?AU?$com_ptr@VScrollerTestHooks@@@winrt@@XZ
    static WindissectOpaque EnsureGlobalTestHooks();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlobalTestHooks@ScrollerTestHooks@@SA?AU?$com_ptr@VScrollerTestHooks@@@winrt@@XZ
    static WindissectOpaque GetGlobalTestHooks();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOffsetsChangeVelocityParameters@ScrollerTestHooks@@SAXAEAH00@Z
    static void GetOffsetsChangeVelocityParameters(int &, int &, int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetZoomFactorChangeVelocityParameters@ScrollerTestHooks@@SAXAEAH00@Z
    static void GetZoomFactorChangeVelocityParameters(int &, int &, int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInteractionTrackerMouseWheelZoomingEnabled@ScrollerTestHooks@@SA_NXZ
    static bool IsInteractionTrackerMouseWheelZoomingEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseWheelDeltaForVelocityUnit@ScrollerTestHooks@@SAHXZ
    static int MouseWheelDeltaForVelocityUnit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseWheelInertiaDecayRate@ScrollerTestHooks@@SAMXZ
    static float MouseWheelInertiaDecayRate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseWheelInertiaDecayRate@ScrollerTestHooks@@SAXM@Z
    static void MouseWheelInertiaDecayRate(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyAnchorEvaluated@ScrollerTestHooks@@SAXAEBUScroller@Primitives@Controls@Xaml@UI@Windows@winrt@@AEBUUIElement@5678@NN@Z
    static void NotifyAnchorEvaluated(WindissectOpaque const &, WindissectOpaque const &, double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyChildLayoutOffsetXChanged@ScrollerTestHooks@@SAXAEBUScroller@Primitives@Controls@Xaml@UI@Windows@winrt@@@Z
    static void NotifyChildLayoutOffsetXChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyChildLayoutOffsetYChanged@ScrollerTestHooks@@SAXAEBUScroller@Primitives@Controls@Xaml@UI@Windows@winrt@@@Z
    static void NotifyChildLayoutOffsetYChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInteractionSourcesChanged@ScrollerTestHooks@@SAXAEBUScroller@Primitives@Controls@Xaml@UI@Windows@winrt@@AEBUCompositionInteractionSourceCollection@Interactions@Composition@678@@Z
    static void NotifyInteractionSourcesChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ScrollerTestHooks@@QEAA@XZ
    ScrollerTestHooks();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ScrollerTestHooks@@UEAA@XZ
    virtual ~ScrollerTestHooks();
};
