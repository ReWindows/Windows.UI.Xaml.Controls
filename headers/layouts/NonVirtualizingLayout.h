#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 4 member(s).
class NonVirtualizingLayout {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@NonVirtualizingLayout@@UEAA?AUSize@Foundation@Windows@winrt@@AEBULayoutContext@Controls@Xaml@UI@45@AEBU2345@@Z
    virtual WindissectOpaque ArrangeOverride(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForContextCore@NonVirtualizingLayout@@UEAAXAEBULayoutContext@Controls@Xaml@UI@Windows@winrt@@@Z
    virtual void InitializeForContextCore(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@NonVirtualizingLayout@@UEAA?AUSize@Foundation@Windows@winrt@@AEBULayoutContext@Controls@Xaml@UI@45@AEBU2345@@Z
    virtual WindissectOpaque MeasureOverride(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninitializeForContextCore@NonVirtualizingLayout@@UEAAXAEBULayoutContext@Controls@Xaml@UI@Windows@winrt@@@Z
    virtual void UninitializeForContextCore(WindissectOpaque const &);
};
