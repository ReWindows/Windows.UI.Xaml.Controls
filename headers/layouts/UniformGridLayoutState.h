#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 10 member(s).
class UniformGridLayoutState {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearElementOnDataSourceChange@UniformGridLayoutState@@QEAAXAEBUVirtualizingLayoutContext@Controls@Xaml@UI@Windows@winrt@@AEBUNotifyCollectionChangedEventArgs@Interop@4567@@Z
    void ClearElementOnDataSourceChange(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureElementSize@UniformGridLayoutState@@QEAAXUSize@Foundation@Windows@winrt@@AEBUVirtualizingLayoutContext@Controls@Xaml@UI@45@NNAEBW4UniformGridLayoutItemsStretch@78945@AEBW4Orientation@78945@NN@Z
    void EnsureElementSize(WindissectOpaque, WindissectOpaque const &, double, double, int const &, int const &, double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureFirstElementOwnership@UniformGridLayoutState@@QEAAXXZ
    void EnsureFirstElementOwnership();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForContext@UniformGridLayoutState@@QEAAXAEBUVirtualizingLayoutContext@Controls@Xaml@UI@Windows@winrt@@PEAVIFlowLayoutAlgorithmDelegates@@@Z
    void InitializeForContext(WindissectOpaque const &, IFlowLayoutAlgorithmDelegates *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UniformGridLayoutState@@UEAA@XZ
    virtual ~UniformGridLayoutState();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@UniformGridLayoutState@@AEAAXUUIElement@Xaml@UI@Windows@winrt@@NNUSize@Foundation@56@AEBW4UniformGridLayoutItemsStretch@Controls@3456@AEBW4Orientation@Controls@3456@NN@Z
    void SetSize(WindissectOpaque, double, double, WindissectOpaque, int const &, int const &, double, double);
};
