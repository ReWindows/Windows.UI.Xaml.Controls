#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 31 member(s).
class ColorSpectrum {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ColorSpectrum@@QEAA@XZ
    ColorSpectrum();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundingRectangle@ColorSpectrum@@QEAA?AURect@Foundation@Windows@winrt@@XZ
    WindissectOpaque GetBoundingRectangle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@ColorSpectrum@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@ColorSpectrum@@QEAAXAEBUKeyRoutedEventArgs@Input@Xaml@UI@Windows@winrt@@@Z
    void OnKeyDown(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@ColorSpectrum@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseColorChanged@ColorSpectrum@@QEAAXXZ
    void RaiseColorChanged();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ColorSpectrum@@UEAA@XZ
    virtual ~ColorSpectrum();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBitmapsAndColorMap@ColorSpectrum@@AEAAXXZ
    void CreateBitmapsAndColorMap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnColorChanged@ColorSpectrum@@AEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnColorChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputTargetPointerEntered@ColorSpectrum@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUPointerRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnInputTargetPointerEntered(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputTargetPointerExited@ColorSpectrum@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUPointerRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnInputTargetPointerExited(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputTargetPointerMoved@ColorSpectrum@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUPointerRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnInputTargetPointerMoved(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputTargetPointerPressed@ColorSpectrum@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUPointerRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnInputTargetPointerPressed(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputTargetPointerReleased@ColorSpectrum@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUPointerRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnInputTargetPointerReleased(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLayoutRootSizeChanged@ColorSpectrum@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUSizeChangedEventArgs@Xaml@UI@45@@Z
    void OnLayoutRootSizeChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMinMaxHueChanged@ColorSpectrum@@AEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnMinMaxHueChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMinMaxSaturationChanged@ColorSpectrum@@AEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnMinMaxSaturationChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMinMaxValueChanged@ColorSpectrum@@AEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnMinMaxValueChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionEllipseFlowDirectionChanged@ColorSpectrum@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnSelectionEllipseFlowDirectionChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnloaded@ColorSpectrum@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnUnloaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectionEllipseShouldBeLight@ColorSpectrum@@AEAA_NXZ
    bool SelectionEllipseShouldBeLight();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColor@ColorSpectrum@@AEAAXXZ
    void SetColor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBitmapSources@ColorSpectrum@@AEAAXXZ
    void UpdateBitmapSources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateColor@ColorSpectrum@@AEAAXVHsv@@@Z
    void UpdateColor(Hsv);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateColorFromPoint@ColorSpectrum@@AEAAXUPointerPoint@Input@UI@Windows@winrt@@@Z
    void UpdateColorFromPoint(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEllipse@ColorSpectrum@@AEAAXXZ
    void UpdateEllipse();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualState@ColorSpectrum@@AEAAX_N@Z
    void UpdateVisualState(bool);
};
