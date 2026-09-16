#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 15 member(s).
class RepeaterLayoutContext {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementAtCore@RepeaterLayoutContext@@UEAA?AUUIElement@Xaml@UI@Windows@winrt@@HAEBW4ElementRealizationOptions@Controls@3456@@Z
    virtual WindissectOpaque GetElementAtCore(int, int const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemAtCore@RepeaterLayoutContext@@UEAA?AUIInspectable@Foundation@Windows@winrt@@H@Z
    virtual WindissectOpaque GetItemAtCore(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@RepeaterLayoutContext@@UEBA?AUhstring@winrt@@XZ
    virtual WindissectOpaque GetRuntimeClassName() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemCountCore@RepeaterLayoutContext@@UEAAHXZ
    virtual int ItemCountCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutOriginCore@RepeaterLayoutContext@@UEAA?AUPoint@Foundation@Windows@winrt@@XZ
    virtual WindissectOpaque LayoutOriginCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutOriginCore@RepeaterLayoutContext@@UEAAXAEBUPoint@Foundation@Windows@winrt@@@Z
    virtual void LayoutOriginCore(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutStateCore@RepeaterLayoutContext@@UEAA?AUIInspectable@Foundation@Windows@winrt@@XZ
    virtual WindissectOpaque LayoutStateCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutStateCore@RepeaterLayoutContext@@UEAAXAEBUIInspectable@Foundation@Windows@winrt@@@Z
    virtual void LayoutStateCore(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RealizationRectCore@RepeaterLayoutContext@@UEAA?AURect@Foundation@Windows@winrt@@XZ
    virtual WindissectOpaque RealizationRectCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecommendedAnchorIndexCore@RepeaterLayoutContext@@UEAAHXZ
    virtual int RecommendedAnchorIndexCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecycleElementCore@RepeaterLayoutContext@@UEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    virtual void RecycleElementCore(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RepeaterLayoutContext@@UEAA@XZ
    virtual ~RepeaterLayoutContext();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwner@RepeaterLayoutContext@@AEAA?AUItemsRepeater@Controls@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque GetOwner();
};
