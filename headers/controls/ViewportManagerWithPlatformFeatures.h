#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 28 member(s).
class ViewportManagerWithPlatformFeatures {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutRealizationWindow@ViewportManagerWithPlatformFeatures@@UEBA?AURect@Foundation@Windows@winrt@@XZ
    virtual WindissectOpaque GetLayoutRealizationWindow() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutVisibleWindow@ViewportManagerWithPlatformFeatures@@UEBA?AURect@Foundation@Windows@winrt@@XZ
    virtual WindissectOpaque GetLayoutVisibleWindow() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrigin@ViewportManagerWithPlatformFeatures@@UEBA?AUPoint@Foundation@Windows@winrt@@XZ
    virtual WindissectOpaque GetOrigin() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HorizontalCacheLength@ViewportManagerWithPlatformFeatures@@UEAAXN@Z
    virtual void HorizontalCacheLength(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HorizontalCacheLength@ViewportManagerWithPlatformFeatures@@UEBANXZ
    virtual double HorizontalCacheLength() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MadeAnchor@ViewportManagerWithPlatformFeatures@@UEBA?AUUIElement@Xaml@UI@Windows@winrt@@XZ
    virtual WindissectOpaque MadeAnchor() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBringIntoViewRequested@ViewportManagerWithPlatformFeatures@@UEAAXUBringIntoViewRequestedEventArgs@Xaml@UI@Windows@winrt@@@Z
    virtual void OnBringIntoViewRequested(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementCleared@ViewportManagerWithPlatformFeatures@@UEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    virtual void OnElementCleared(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementPrepared@ViewportManagerWithPlatformFeatures@@UEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    virtual void OnElementPrepared(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLayoutChanged@ViewportManagerWithPlatformFeatures@@UEAAXXZ
    virtual void OnLayoutChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMakeAnchor@ViewportManagerWithPlatformFeatures@@UEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@_N@Z
    virtual void OnMakeAnchor(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOwnerArranged@ViewportManagerWithPlatformFeatures@@UEAAXXZ
    virtual void OnOwnerArranged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOwnerMeasuring@ViewportManagerWithPlatformFeatures@@UEAAXXZ
    virtual void OnOwnerMeasuring();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetScrollers@ViewportManagerWithPlatformFeatures@@UEAAXXZ
    virtual void ResetScrollers();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLayoutExtent@ViewportManagerWithPlatformFeatures@@UEAAXURect@Foundation@Windows@winrt@@@Z
    virtual void SetLayoutExtent(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuggestedAnchor@ViewportManagerWithPlatformFeatures@@UEBA?AUUIElement@Xaml@UI@Windows@winrt@@XZ
    virtual WindissectOpaque SuggestedAnchor() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerticalCacheLength@ViewportManagerWithPlatformFeatures@@UEAAXN@Z
    virtual void VerticalCacheLength(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerticalCacheLength@ViewportManagerWithPlatformFeatures@@UEBANXZ
    virtual double VerticalCacheLength() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ViewportManagerWithPlatformFeatures@@QEAA@XZ
    ~ViewportManagerWithPlatformFeatures();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureScroller@ViewportManagerWithPlatformFeatures@@AEAAXXZ
    void EnsureScroller();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutId@ViewportManagerWithPlatformFeatures@@AEBA?AUhstring@winrt@@XZ
    WindissectOpaque GetLayoutId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasScroller@ViewportManagerWithPlatformFeatures@@AEBA_NXZ
    bool HasScroller() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEffectiveViewportChanged@ViewportManagerWithPlatformFeatures@@AEAAXAEBUFrameworkElement@Xaml@UI@Windows@winrt@@AEBUEffectiveViewportChangedEventArgs@3456@@Z
    void OnEffectiveViewportChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLayoutUpdated@ViewportManagerWithPlatformFeatures@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnLayoutUpdated(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterCacheBuildWork@ViewportManagerWithPlatformFeatures@@AEAAXXZ
    void RegisterCacheBuildWork();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryInvalidateMeasure@ViewportManagerWithPlatformFeatures@@AEAAXXZ
    void TryInvalidateMeasure();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateViewport@ViewportManagerWithPlatformFeatures@@AEAAXAEBURect@Foundation@Windows@winrt@@@Z
    void UpdateViewport(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateCacheLength@ViewportManagerWithPlatformFeatures@@AEAAXN@Z
    void ValidateCacheLength(double);
};
