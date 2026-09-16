#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 31 member(s).
class ViewportManagerDownLevel {
public:
    class ScrollerInfo;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutRealizationWindow@ViewportManagerDownLevel@@UEBA?AURect@Foundation@Windows@winrt@@XZ
    virtual WindissectOpaque GetLayoutRealizationWindow() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutVisibleWindow@ViewportManagerDownLevel@@UEBA?AURect@Foundation@Windows@winrt@@XZ
    virtual WindissectOpaque GetLayoutVisibleWindow() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrigin@ViewportManagerDownLevel@@UEBA?AUPoint@Foundation@Windows@winrt@@XZ
    virtual WindissectOpaque GetOrigin() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HorizontalCacheLength@ViewportManagerDownLevel@@UEAAXN@Z
    virtual void HorizontalCacheLength(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HorizontalCacheLength@ViewportManagerDownLevel@@UEBANXZ
    virtual double HorizontalCacheLength() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MadeAnchor@ViewportManagerDownLevel@@UEBA?AUUIElement@Xaml@UI@Windows@winrt@@XZ
    virtual WindissectOpaque MadeAnchor() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBringIntoViewRequested@ViewportManagerDownLevel@@UEAAXUBringIntoViewRequestedEventArgs@Xaml@UI@Windows@winrt@@@Z
    virtual void OnBringIntoViewRequested(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementCleared@ViewportManagerDownLevel@@UEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    virtual void OnElementCleared(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementPrepared@ViewportManagerDownLevel@@UEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    virtual void OnElementPrepared(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLayoutChanged@ViewportManagerDownLevel@@UEAAXXZ
    virtual void OnLayoutChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMakeAnchor@ViewportManagerDownLevel@@UEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@_N@Z
    virtual void OnMakeAnchor(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOwnerArranged@ViewportManagerDownLevel@@UEAAXXZ
    virtual void OnOwnerArranged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOwnerMeasuring@ViewportManagerDownLevel@@UEAAXXZ
    virtual void OnOwnerMeasuring();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetScrollers@ViewportManagerDownLevel@@UEAAXXZ
    virtual void ResetScrollers();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLayoutExtent@ViewportManagerDownLevel@@UEAAXURect@Foundation@Windows@winrt@@@Z
    virtual void SetLayoutExtent(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuggestedAnchor@ViewportManagerDownLevel@@UEBA?AUUIElement@Xaml@UI@Windows@winrt@@XZ
    virtual WindissectOpaque SuggestedAnchor() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerticalCacheLength@ViewportManagerDownLevel@@UEAAXN@Z
    virtual void VerticalCacheLength(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerticalCacheLength@ViewportManagerDownLevel@@UEBANXZ
    virtual double VerticalCacheLength() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ViewportManagerDownLevel@@QEAA@PEAVItemsRepeater@@@Z
    ViewportManagerDownLevel(ItemsRepeater *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ViewportManagerDownLevel@@QEAA@XZ
    ~ViewportManagerDownLevel();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddScroller@ViewportManagerDownLevel@@AEAA_NAEBUIRepeaterScrollingSurface@Controls@Xaml@UI@Windows@winrt@@@Z
    bool AddScroller(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureScrollers@ViewportManagerDownLevel@@AEAAXXZ
    void EnsureScrollers();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutId@ViewportManagerDownLevel@@AEAA?AUhstring@winrt@@XZ
    WindissectOpaque GetLayoutId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOuterScroller@ViewportManagerDownLevel@@AEBA?AUIRepeaterScrollingSurface@Controls@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque GetOuterScroller() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConfigurationChanged@ViewportManagerDownLevel@@AEAAXAEBUIRepeaterScrollingSurface@Controls@Xaml@UI@Windows@winrt@@@Z
    void OnConfigurationChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPostArrange@ViewportManagerDownLevel@@AEAAXAEBUIRepeaterScrollingSurface@Controls@Xaml@UI@Windows@winrt@@@Z
    void OnPostArrange(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewportChanged@ViewportManagerDownLevel@@AEAAXAEBUIRepeaterScrollingSurface@Controls@Xaml@UI@Windows@winrt@@_N@Z
    void OnViewportChanged(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterCacheBuildWork@ViewportManagerDownLevel@@AEAAXXZ
    void RegisterCacheBuildWork();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryInvalidateMeasure@ViewportManagerDownLevel@@AEAAXXZ
    void TryInvalidateMeasure();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateViewport@ViewportManagerDownLevel@@AEAAXXZ
    void UpdateViewport();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateCacheLength@ViewportManagerDownLevel@@AEAAXN@Z
    void ValidateCacheLength(double);
};
