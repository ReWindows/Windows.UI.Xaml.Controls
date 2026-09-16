#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 7 member(s).
class StackLayoutState {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForContext@StackLayoutState@@QEAAXAEBUVirtualizingLayoutContext@Controls@Xaml@UI@Windows@winrt@@PEAVIFlowLayoutAlgorithmDelegates@@@Z
    void InitializeForContext(WindissectOpaque const &, IFlowLayoutAlgorithmDelegates *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementMeasured@StackLayoutState@@QEAAXHNN@Z
    void OnElementMeasured(int, double, double);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StackLayoutState@@UEAA@XZ
    virtual ~StackLayoutState();
};
