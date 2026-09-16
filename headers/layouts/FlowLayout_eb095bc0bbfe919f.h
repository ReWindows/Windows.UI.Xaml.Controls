#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 25 member(s).
class FlowLayout {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Algorithm_GetAnchorForRealizationRect@FlowLayout@@UEAA?AUFlowLayoutAnchorInfo@Controls@Xaml@UI@Windows@winrt@@AEBUSize@Foundation@67@AEBUVirtualizingLayoutContext@34567@@Z
    virtual WindissectOpaque Algorithm_GetAnchorForRealizationRect(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Algorithm_GetAnchorForTargetElement@FlowLayout@@UEAA?AUFlowLayoutAnchorInfo@Controls@Xaml@UI@Windows@winrt@@HAEBUSize@Foundation@67@AEBUVirtualizingLayoutContext@34567@@Z
    virtual WindissectOpaque Algorithm_GetAnchorForTargetElement(int, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Algorithm_GetExtent@FlowLayout@@UEAA?AURect@Foundation@Windows@winrt@@AEBUSize@345@AEBUVirtualizingLayoutContext@Controls@Xaml@UI@45@AEBUUIElement@9UI@45@HAEBU2345@2H3@Z
    virtual WindissectOpaque Algorithm_GetExtent(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, int, WindissectOpaque const &, WindissectOpaque const &, int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Algorithm_GetMeasureSize@FlowLayout@@UEAA?AUSize@Foundation@Windows@winrt@@HAEBU2345@AEBUVirtualizingLayoutContext@Controls@Xaml@UI@45@@Z
    virtual WindissectOpaque Algorithm_GetMeasureSize(int, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Algorithm_GetProvisionalArrangeSize@FlowLayout@@UEAA?AUSize@Foundation@Windows@winrt@@HAEBU2345@0AEBUVirtualizingLayoutContext@Controls@Xaml@UI@45@@Z
    virtual WindissectOpaque Algorithm_GetProvisionalArrangeSize(int, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Algorithm_OnElementMeasured@FlowLayout@@UEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@HAEBUSize@Foundation@56@111AEBUVirtualizingLayoutContext@Controls@3456@@Z
    virtual void Algorithm_OnElementMeasured(WindissectOpaque const &, int, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Algorithm_OnLineArranged@FlowLayout@@UEAAXHHNAEBUVirtualizingLayoutContext@Controls@Xaml@UI@Windows@winrt@@@Z
    virtual void Algorithm_OnLineArranged(int, int, double, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Algorithm_ShouldBreakLine@FlowLayout@@UEAA_NHN@Z
    virtual bool Algorithm_ShouldBreakLine(int, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@FlowLayout@@UEAA?AUSize@Foundation@Windows@winrt@@AEBUVirtualizingLayoutContext@Controls@Xaml@UI@45@AEBU2345@@Z
    virtual WindissectOpaque ArrangeOverride(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@FlowLayout@@SAXXZ
    static void EnsureProperties();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnchorForRealizationRect@FlowLayout@@QEAA?AUFlowLayoutAnchorInfo@Controls@Xaml@UI@Windows@winrt@@AEBUSize@Foundation@67@AEBUVirtualizingLayoutContext@34567@@Z
    WindissectOpaque GetAnchorForRealizationRect(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnchorForTargetElement@FlowLayout@@QEAA?AUFlowLayoutAnchorInfo@Controls@Xaml@UI@Windows@winrt@@HAEBUSize@Foundation@67@AEBUVirtualizingLayoutContext@34567@@Z
    WindissectOpaque GetAnchorForTargetElement(int, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtent@FlowLayout@@QEAA?AURect@Foundation@Windows@winrt@@AEBUSize@345@AEBUVirtualizingLayoutContext@Controls@Xaml@UI@45@AEBUUIElement@9UI@45@HAEBU2345@2H3@Z
    WindissectOpaque GetExtent(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, int, WindissectOpaque const &, WindissectOpaque const &, int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForContextCore@FlowLayout@@UEAAXAEBUVirtualizingLayoutContext@Controls@Xaml@UI@Windows@winrt@@@Z
    virtual void InitializeForContextCore(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@FlowLayout@@UEAA?AUSize@Foundation@Windows@winrt@@AEBUVirtualizingLayoutContext@Controls@Xaml@UI@45@AEBU2345@@Z
    virtual WindissectOpaque MeasureOverride(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MinColumnSpacing@FlowLayout@@QEAAXN@Z
    void MinColumnSpacing(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MinRowSpacing@FlowLayout@@QEAAXN@Z
    void MinRowSpacing(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsChangedCore@FlowLayout@@UEAAXAEBUVirtualizingLayoutContext@Controls@Xaml@UI@Windows@winrt@@AEBUIInspectable@Foundation@67@AEBUNotifyCollectionChangedEventArgs@Interop@4567@@Z
    virtual void OnItemsChangedCore(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLineArranged@FlowLayout@@QEAAXHHNAEBUVirtualizingLayoutContext@Controls@Xaml@UI@Windows@winrt@@@Z
    void OnLineArranged(int, int, double, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@FlowLayout@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninitializeForContextCore@FlowLayout@@UEAAXAEBUVirtualizingLayoutContext@Controls@Xaml@UI@Windows@winrt@@@Z
    virtual void UninitializeForContextCore(WindissectOpaque const &);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAsFlowState@FlowLayout@@AEAA?AU?$com_ptr@VFlowLayoutState@@@winrt@@AEBUIInspectable@Foundation@Windows@3@@Z
    WindissectOpaque GetAsFlowState(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAverageLineInfo@FlowLayout@@AEAANAEBUSize@Foundation@Windows@winrt@@AEBUVirtualizingLayoutContext@Controls@Xaml@UI@45@AEBU?$com_ptr@VFlowLayoutState@@@5@AEAN@Z
    double GetAverageLineInfo(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, double &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlowAlgorithm@FlowLayout@@AEAAAEAVFlowLayoutAlgorithm@@AEBUVirtualizingLayoutContext@Controls@Xaml@UI@Windows@winrt@@@Z
    FlowLayoutAlgorithm & GetFlowAlgorithm(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@FlowLayout@@CAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
};
