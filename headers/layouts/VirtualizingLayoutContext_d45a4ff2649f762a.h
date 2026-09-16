#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 11 member(s).
class VirtualizingLayoutContext {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementAtCore@VirtualizingLayoutContext@@UEAA?AUUIElement@Xaml@UI@Windows@winrt@@HAEBW4ElementRealizationOptions@Controls@3456@@Z
    virtual WindissectOpaque GetElementAtCore(int, int const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemAtCore@VirtualizingLayoutContext@@UEAA?AUIInspectable@Foundation@Windows@winrt@@H@Z
    virtual WindissectOpaque GetItemAtCore(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemCountCore@VirtualizingLayoutContext@@UEAAHXZ
    virtual int ItemCountCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutOriginCore@VirtualizingLayoutContext@@UEAA?AUPoint@Foundation@Windows@winrt@@XZ
    virtual WindissectOpaque LayoutOriginCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutOriginCore@VirtualizingLayoutContext@@UEAAXAEBUPoint@Foundation@Windows@winrt@@@Z
    virtual void LayoutOriginCore(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RealizationRectCore@VirtualizingLayoutContext@@UEAA?AURect@Foundation@Windows@winrt@@XZ
    virtual WindissectOpaque RealizationRectCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecommendedAnchorIndexCore@VirtualizingLayoutContext@@UEAAHXZ
    virtual int RecommendedAnchorIndexCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecycleElementCore@VirtualizingLayoutContext@@UEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    virtual void RecycleElementCore(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VirtualizingLayoutContext@@QEAA@XZ
    VirtualizingLayoutContext();
};
