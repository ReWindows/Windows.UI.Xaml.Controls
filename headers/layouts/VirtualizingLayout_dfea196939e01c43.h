#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 8 member(s).
class VirtualizingLayout {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@VirtualizingLayout@@UEAA?AUSize@Foundation@Windows@winrt@@AEBUVirtualizingLayoutContext@Controls@Xaml@UI@45@AEBU2345@@Z
    virtual WindissectOpaque ArrangeOverride(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForContextCore@VirtualizingLayout@@UEAAXAEBUVirtualizingLayoutContext@Controls@Xaml@UI@Windows@winrt@@@Z
    virtual void InitializeForContextCore(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@VirtualizingLayout@@UEAA?AUSize@Foundation@Windows@winrt@@AEBUVirtualizingLayoutContext@Controls@Xaml@UI@45@AEBU2345@@Z
    virtual WindissectOpaque MeasureOverride(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsChangedCore@VirtualizingLayout@@UEAAXAEBUVirtualizingLayoutContext@Controls@Xaml@UI@Windows@winrt@@AEBUIInspectable@Foundation@67@AEBUNotifyCollectionChangedEventArgs@Interop@4567@@Z
    virtual void OnItemsChangedCore(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninitializeForContextCore@VirtualizingLayout@@UEAAXAEBUVirtualizingLayoutContext@Controls@Xaml@UI@Windows@winrt@@@Z
    virtual void UninitializeForContextCore(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VirtualizingLayout@@QEAA@XZ
    VirtualizingLayout();
};
