#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 12 member(s).
class ScrollViewerIRefreshInfoProviderDefaultAnimationHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InteractionTrackerAnimation@ScrollViewerIRefreshInfoProviderDefaultAnimationHandler@@QEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@0AEBUInteractionTracker@Interactions@Composition@456@@Z
    void InteractionTrackerAnimation(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshCompletedAnimation@ScrollViewerIRefreshInfoProviderDefaultAnimationHandler@@QEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@0@Z
    void RefreshCompletedAnimation(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshRequestedAnimation@ScrollViewerIRefreshInfoProviderDefaultAnimationHandler@@QEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@0N@Z
    void RefreshRequestedAnimation(WindissectOpaque const &, WindissectOpaque const &, double);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ScrollViewerIRefreshInfoProviderDefaultAnimationHandler@@QEAA@AEBUUIElement@Xaml@UI@Windows@winrt@@AEBW4RefreshPullDirection@Controls@2345@@Z
    ScrollViewerIRefreshInfoProviderDefaultAnimationHandler(WindissectOpaque const &, int const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ScrollViewerIRefreshInfoProviderDefaultAnimationHandler@@UEAA@XZ
    virtual ~ScrollViewerIRefreshInfoProviderDefaultAnimationHandler();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshCompletedBatchCompleted@ScrollViewerIRefreshInfoProviderDefaultAnimationHandler@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUCompositionBatchCompletedEventArgs@Composition@UI@45@@Z
    void RefreshCompletedBatchCompleted(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateAndStoreParameters@ScrollViewerIRefreshInfoProviderDefaultAnimationHandler@@AEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@0AEBUInteractionTracker@Interactions@Composition@456@@Z
    void ValidateAndStoreParameters(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?getAnimatedPropertyName@ScrollViewerIRefreshInfoProviderDefaultAnimationHandler@@AEAA?AUhstring@winrt@@XZ
    WindissectOpaque getAnimatedPropertyName();
};
