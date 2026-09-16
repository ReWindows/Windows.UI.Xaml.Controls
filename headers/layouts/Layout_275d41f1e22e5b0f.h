#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 9 member(s).
class Layout {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Arrange@Layout@@QEAA?AUSize@Foundation@Windows@winrt@@AEBULayoutContext@Controls@Xaml@UI@45@AEBU2345@@Z
    WindissectOpaque Arrange(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForContext@Layout@@QEAAXAEBULayoutContext@Controls@Xaml@UI@Windows@winrt@@@Z
    void InitializeForContext(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Layout@@QEAA@XZ
    Layout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutId@Layout@@QEAA?AUhstring@winrt@@XZ
    WindissectOpaque LayoutId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Measure@Layout@@QEAA?AUSize@Foundation@Windows@winrt@@AEBULayoutContext@Controls@Xaml@UI@45@AEBU2345@@Z
    WindissectOpaque Measure(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninitializeForContext@Layout@@QEAAXAEBULayoutContext@Controls@Xaml@UI@Windows@winrt@@@Z
    void UninitializeForContext(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Layout@@UEAA@XZ
    virtual ~Layout();
};
