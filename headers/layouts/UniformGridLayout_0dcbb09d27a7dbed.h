#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 26 member(s).
class UniformGridLayout {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Algorithm_GetAnchorForRealizationRect@UniformGridLayout@@UEAA?AUFlowLayoutAnchorInfo@Controls@Xaml@UI@Windows@winrt@@AEBUSize@Foundation@67@AEBUVirtualizingLayoutContext@34567@@Z
    virtual WindissectOpaque Algorithm_GetAnchorForRealizationRect(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Algorithm_GetAnchorForTargetElement@UniformGridLayout@@UEAA?AUFlowLayoutAnchorInfo@Controls@Xaml@UI@Windows@winrt@@HAEBUSize@Foundation@67@AEBUVirtualizingLayoutContext@34567@@Z
    virtual WindissectOpaque Algorithm_GetAnchorForTargetElement(int, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Algorithm_GetExtent@UniformGridLayout@@UEAA?AURect@Foundation@Windows@winrt@@AEBUSize@345@AEBUVirtualizingLayoutContext@Controls@Xaml@UI@45@AEBUUIElement@9UI@45@HAEBU2345@2H3@Z
    virtual WindissectOpaque Algorithm_GetExtent(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, int, WindissectOpaque const &, WindissectOpaque const &, int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Algorithm_GetMeasureSize@UniformGridLayout@@UEAA?AUSize@Foundation@Windows@winrt@@HAEBU2345@AEBUVirtualizingLayoutContext@Controls@Xaml@UI@45@@Z
    virtual WindissectOpaque Algorithm_GetMeasureSize(int, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Algorithm_GetProvisionalArrangeSize@UniformGridLayout@@UEAA?AUSize@Foundation@Windows@winrt@@HAEBU2345@0AEBUVirtualizingLayoutContext@Controls@Xaml@UI@45@@Z
    virtual WindissectOpaque Algorithm_GetProvisionalArrangeSize(int, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Algorithm_OnElementMeasured@UniformGridLayout@@UEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@HAEBUSize@Foundation@56@111AEBUVirtualizingLayoutContext@Controls@3456@@Z
    virtual void Algorithm_OnElementMeasured(WindissectOpaque const &, int, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Algorithm_OnLineArranged@UniformGridLayout@@UEAAXHHNAEBUVirtualizingLayoutContext@Controls@Xaml@UI@Windows@winrt@@@Z
    virtual void Algorithm_OnLineArranged(int, int, double, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Algorithm_ShouldBreakLine@UniformGridLayout@@UEAA_NHN@Z
    virtual bool Algorithm_ShouldBreakLine(int, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@UniformGridLayout@@UEAA?AUSize@Foundation@Windows@winrt@@AEBUVirtualizingLayoutContext@Controls@Xaml@UI@45@AEBU2345@@Z
    virtual WindissectOpaque ArrangeOverride(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@UniformGridLayout@@SAXXZ
    static void EnsureProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForContextCore@UniformGridLayout@@UEAAXAEBUVirtualizingLayoutContext@Controls@Xaml@UI@Windows@winrt@@@Z
    virtual void InitializeForContextCore(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@UniformGridLayout@@UEAA?AUSize@Foundation@Windows@winrt@@AEBUVirtualizingLayoutContext@Controls@Xaml@UI@45@AEBU2345@@Z
    virtual WindissectOpaque MeasureOverride(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MinColumnSpacing@UniformGridLayout@@QEAAXN@Z
    void MinColumnSpacing(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MinItemHeight@UniformGridLayout@@QEAAXN@Z
    void MinItemHeight(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MinItemWidth@UniformGridLayout@@QEAAXN@Z
    void MinItemWidth(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MinRowSpacing@UniformGridLayout@@QEAAXN@Z
    void MinRowSpacing(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsChangedCore@UniformGridLayout@@UEAAXAEBUVirtualizingLayoutContext@Controls@Xaml@UI@Windows@winrt@@AEBUIInspectable@Foundation@67@AEBUNotifyCollectionChangedEventArgs@Interop@4567@@Z
    virtual void OnItemsChangedCore(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@UniformGridLayout@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Orientation@UniformGridLayout@@QEAA?AW40Controls@Xaml@UI@Windows@winrt@@XZ
    int Orientation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninitializeForContextCore@UniformGridLayout@@UEAAXAEBUVirtualizingLayoutContext@Controls@Xaml@UI@Windows@winrt@@@Z
    virtual void UninitializeForContextCore(WindissectOpaque const &);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAsGridState@UniformGridLayout@@AEAA?AU?$com_ptr@VUniformGridLayoutState@@@winrt@@AEBUIInspectable@Foundation@Windows@3@@Z
    WindissectOpaque GetAsGridState(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlowAlgorithm@UniformGridLayout@@AEAAAEAVFlowLayoutAlgorithm@@AEBUVirtualizingLayoutContext@Controls@Xaml@UI@Windows@winrt@@@Z
    FlowLayoutAlgorithm & GetFlowAlgorithm(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutRectForDataIndex@UniformGridLayout@@AEAA?AURect@Foundation@Windows@winrt@@AEBUSize@345@HAEBU2345@AEBUVirtualizingLayoutContext@Controls@Xaml@UI@45@@Z
    WindissectOpaque GetLayoutRectForDataIndex(WindissectOpaque const &, int, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMajorSizeWithSpacing@UniformGridLayout@@AEAAMAEBUVirtualizingLayoutContext@Controls@Xaml@UI@Windows@winrt@@@Z
    float GetMajorSizeWithSpacing(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMinorSizeWithSpacing@UniformGridLayout@@AEAAMAEBUVirtualizingLayoutContext@Controls@Xaml@UI@Windows@winrt@@@Z
    float GetMinorSizeWithSpacing(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@UniformGridLayout@@CAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
};
