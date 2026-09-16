#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 40 member(s).
class ItemsRepeater {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@ItemsRepeater@@QEAA?AUSize@Foundation@Windows@winrt@@AEBU2345@@Z
    WindissectOpaque ArrangeOverride(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BackgroundProperty@ItemsRepeater@@SA?AUDependencyProperty@Xaml@UI@Windows@winrt@@XZ
    static WindissectOpaque BackgroundProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearElementImpl@ItemsRepeater@@QEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    void ClearElementImpl(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearProperties@ItemsRepeater@@SAXXZ
    static void ClearProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndInitializeVirtualizationInfo@ItemsRepeater@@SA?AU?$com_ptr@VVirtualizationInfo@@@winrt@@AEBUUIElement@Xaml@UI@Windows@3@@Z
    static WindissectOpaque CreateAndInitializeVirtualizationInfo(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@ItemsRepeater@@SAXXZ
    static void EnsureProperties();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementFromIndexImpl@ItemsRepeater@@QEAA?AUUIElement@Xaml@UI@Windows@winrt@@H@Z
    WindissectOpaque GetElementFromIndexImpl(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrCreateElementImpl@ItemsRepeater@@QEAA?AUUIElement@Xaml@UI@Windows@winrt@@H@Z
    WindissectOpaque GetOrCreateElementImpl(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVirtualizationInfo@ItemsRepeater@@SA?AU?$com_ptr@VVirtualizationInfo@@@winrt@@AEBUUIElement@Xaml@UI@Windows@3@@Z
    static WindissectOpaque GetVirtualizationInfo(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVirtualizationInfoProperty@ItemsRepeater@@SA?AUDependencyProperty@Xaml@UI@Windows@winrt@@XZ
    static WindissectOpaque GetVirtualizationInfoProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HorizontalCacheLength@ItemsRepeater@@QEAAXN@Z
    void HorizontalCacheLength(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemTemplate@ItemsRepeater@@QEAAXAEBUIElementFactory@Xaml@UI@Windows@winrt@@@Z
    void ItemTemplate(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemTemplateShim@ItemsRepeater@@QEAA?AUIElementFactory@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque ItemTemplateShim();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ItemsRepeater@@QEAA@XZ
    ItemsRepeater();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemsSourceView@ItemsRepeater@@QEAA?AU0Controls@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque ItemsSourceView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Layout@ItemsRepeater@@QEAA?AUVirtualizingLayout@Controls@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque Layout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@ItemsRepeater@@QEAA?AUSize@Foundation@Windows@winrt@@AEBU2345@@Z
    WindissectOpaque MeasureOverride(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementClearing@ItemsRepeater@@QEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    void OnElementClearing(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementIndexChanged@ItemsRepeater@@QEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@HH@Z
    void OnElementIndexChanged(WindissectOpaque const &, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementPrepared@ItemsRepeater@@QEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@H@Z
    void OnElementPrepared(WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@ItemsRepeater@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetVirtualizationInfo@ItemsRepeater@@SA?AU?$com_ptr@VVirtualizationInfo@@@winrt@@AEBUUIElement@Xaml@UI@Windows@3@@Z
    static WindissectOpaque TryGetVirtualizationInfo(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerticalCacheLength@ItemsRepeater@@QEAAXN@Z
    void VerticalCacheLength(double);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ItemsRepeater@@UEAA@XZ
    virtual ~ItemsRepeater();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutContext@ItemsRepeater@@AEAA?AUVirtualizingLayoutContext@Controls@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque GetLayoutContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateArrangeForLayout@ItemsRepeater@@AEAAXAEBULayout@Controls@Xaml@UI@Windows@winrt@@AEBUIInspectable@Foundation@67@@Z
    void InvalidateArrangeForLayout(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateMeasureForLayout@ItemsRepeater@@AEAAXAEBULayout@Controls@Xaml@UI@Windows@winrt@@AEBUIInspectable@Foundation@67@@Z
    void InvalidateMeasureForLayout(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProcessingCollectionChange@ItemsRepeater@@AEBA_NXZ
    bool IsProcessingCollectionChange() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatorChanged@ItemsRepeater@@AEAAXAEBUElementAnimator@Controls@Xaml@UI@Windows@winrt@@0@Z
    void OnAnimatorChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDataSourceChanged@ItemsRepeater@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUNotifyCollectionChangedEventArgs@Interop@Xaml@UI@45@@Z
    void OnDataSourceChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDataSourcePropertyChanged@ItemsRepeater@@AEAAXAEBUItemsSourceView@Controls@Xaml@UI@Windows@winrt@@0@Z
    void OnDataSourcePropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemTemplateChanged@ItemsRepeater@@AEAAXAEBUIElementFactory@Xaml@UI@Windows@winrt@@0@Z
    void OnItemTemplateChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLayoutChanged@ItemsRepeater@@AEAAXAEBUVirtualizingLayout@Controls@Xaml@UI@Windows@winrt@@0@Z
    void OnLayoutChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoaded@ItemsRepeater@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@ItemsRepeater@@CAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnloaded@ItemsRepeater@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnUnloaded(WindissectOpaque const &, WindissectOpaque const &);
};
