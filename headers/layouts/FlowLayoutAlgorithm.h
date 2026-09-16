#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 15 member(s).
class FlowLayoutAlgorithm {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FlowLayoutAlgorithm@@QEAA@PEBUITrackerHandleManager@@@Z
    FlowLayoutAlgorithm(ITrackerHandleManager const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementIfRealized@FlowLayoutAlgorithm@@QEAA?AUUIElement@Xaml@UI@Windows@winrt@@H@Z
    WindissectOpaque GetElementIfRealized(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForContext@FlowLayoutAlgorithm@@QEAAXAEBUVirtualizingLayoutContext@Controls@Xaml@UI@Windows@winrt@@PEAVIFlowLayoutAlgorithmDelegates@@@Z
    void InitializeForContext(WindissectOpaque const &, IFlowLayoutAlgorithmDelegates *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureElement@FlowLayoutAlgorithm@@QEAA?AUSize@Foundation@Windows@winrt@@AEBUUIElement@Xaml@UI@45@HAEBU2345@AEBUVirtualizingLayoutContext@Controls@7845@@Z
    WindissectOpaque MeasureElement(WindissectOpaque const &, int, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryAddElement0@FlowLayoutAlgorithm@@QEAA_NAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    bool TryAddElement0(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninitializeForContext@FlowLayoutAlgorithm@@QEAAXAEBUVirtualizingLayoutContext@Controls@Xaml@UI@Windows@winrt@@@Z
    void UninitializeForContext(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FlowLayoutAlgorithm@@QEAA@XZ
    ~FlowLayoutAlgorithm();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EstimateExtent@FlowLayoutAlgorithm@@AEAA?AURect@Foundation@Windows@winrt@@AEBUSize@345@@Z
    WindissectOpaque EstimateExtent(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReflowRequired@FlowLayoutAlgorithm@@AEBA_NXZ
    bool IsReflowRequired() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVirtualizingContext@FlowLayoutAlgorithm@@AEAA_NXZ
    bool IsVirtualizingContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeAnchor@FlowLayoutAlgorithm@@AEAAXAEBUVirtualizingLayoutContext@Controls@Xaml@UI@Windows@winrt@@HAEBUSize@Foundation@67@@Z
    void MakeAnchor(WindissectOpaque const &, int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseLineArranged@FlowLayoutAlgorithm@@AEAAXXZ
    void RaiseLineArranged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RealizationRect@FlowLayoutAlgorithm@@AEAA?AURect@Foundation@Windows@winrt@@XZ
    WindissectOpaque RealizationRect();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLayoutOrigin@FlowLayoutAlgorithm@@AEAAXXZ
    void SetLayoutOrigin();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldContinueFillingUpSpace@FlowLayoutAlgorithm@@AEAA_NHW4GenerateDirection@1@@Z
    bool ShouldContinueFillingUpSpace(int, int);
};
