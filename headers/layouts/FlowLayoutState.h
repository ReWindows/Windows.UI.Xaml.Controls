#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 7 member(s).
class FlowLayoutState {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForContext@FlowLayoutState@@QEAAXAEBUVirtualizingLayoutContext@Controls@Xaml@UI@Windows@winrt@@PEAVIFlowLayoutAlgorithmDelegates@@@Z
    void InitializeForContext(WindissectOpaque const &, IFlowLayoutAlgorithmDelegates *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLineArranged@FlowLayoutState@@QEAAXHHNAEBUVirtualizingLayoutContext@Controls@Xaml@UI@Windows@winrt@@@Z
    void OnLineArranged(int, int, double, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FlowLayoutState@@UEAA@XZ
    virtual ~FlowLayoutState();
};
