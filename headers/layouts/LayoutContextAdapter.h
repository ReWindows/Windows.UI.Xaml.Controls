#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 13 member(s).
class LayoutContextAdapter {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementAtCore@LayoutContextAdapter@@UEAA?AUUIElement@Xaml@UI@Windows@winrt@@HAEBW4ElementRealizationOptions@Controls@3456@@Z
    virtual WindissectOpaque GetElementAtCore(int, int const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemAtCore@LayoutContextAdapter@@UEAA?AUIInspectable@Foundation@Windows@winrt@@H@Z
    virtual WindissectOpaque GetItemAtCore(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemCountCore@LayoutContextAdapter@@UEAAHXZ
    virtual int ItemCountCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutOriginCore@LayoutContextAdapter@@UEAA?AUPoint@Foundation@Windows@winrt@@XZ
    virtual WindissectOpaque LayoutOriginCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutOriginCore@LayoutContextAdapter@@UEAAXAEBUPoint@Foundation@Windows@winrt@@@Z
    virtual void LayoutOriginCore(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutStateCore@LayoutContextAdapter@@UEAA?AUIInspectable@Foundation@Windows@winrt@@XZ
    virtual WindissectOpaque LayoutStateCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutStateCore@LayoutContextAdapter@@UEAAXAEBUIInspectable@Foundation@Windows@winrt@@@Z
    virtual void LayoutStateCore(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RealizationRectCore@LayoutContextAdapter@@UEAA?AURect@Foundation@Windows@winrt@@XZ
    virtual WindissectOpaque RealizationRectCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecommendedAnchorIndexCore@LayoutContextAdapter@@UEAAHXZ
    virtual int RecommendedAnchorIndexCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecycleElementCore@LayoutContextAdapter@@UEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    virtual void RecycleElementCore(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LayoutContextAdapter@@UEAA@XZ
    virtual ~LayoutContextAdapter();
};
