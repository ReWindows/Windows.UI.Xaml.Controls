#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 52 member(s).
class ColorPicker {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ColorPicker@@QEAA@XZ
    ColorPicker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@ColorPicker@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@ColorPicker@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ColorPicker@@UEAA@XZ
    virtual ~ColorPicker();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddGradientStop@ColorPicker@@CAXULinearGradientBrush@Media@Xaml@UI@Windows@winrt@@NVHsv@@N@Z
    static void AddGradientStop(WindissectOpaque, double, Hsv, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyConstraintsToRgbColor@ColorPicker@@AEAA?AVRgb@@AEBV2@@Z
    Rgb ApplyConstraintsToRgbColor(Rgb const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAlphaSliderCheckeredBackground@ColorPicker@@AEAAXXZ
    void CreateAlphaSliderCheckeredBackground();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateColorPreviewCheckeredBackground@ColorPicker@@AEAAXXZ
    void CreateColorPreviewCheckeredBackground();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCheckerColor@ColorPicker@@AEAA?AUColor@UI@Windows@winrt@@XZ
    WindissectOpaque GetCheckerColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentHexValue@ColorPicker@@AEAA?AUhstring@winrt@@XZ
    WindissectOpaque GetCurrentHexValue();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHsvColorFromTextBoxes@ColorPicker@@AEAA?AVHsv@@XZ
    Hsv GetHsvColorFromTextBoxes();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRgbColorFromTextBoxes@ColorPicker@@AEAA?AVRgb@@XZ
    Rgb GetRgbColorFromTextBoxes();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeColor@ColorPicker@@AEAAXXZ
    void InitializeColor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAlphaSliderBackgroundRectangleSizeChanged@ColorPicker@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUSizeChangedEventArgs@Xaml@UI@45@@Z
    void OnAlphaSliderBackgroundRectangleSizeChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAlphaSliderValueChanged@ColorPicker@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURangeBaseValueChangedEventArgs@Primitives@Controls@Xaml@UI@45@@Z
    void OnAlphaSliderValueChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAlphaTextChanging@ColorPicker@@AEAAXAEBUTextBox@Controls@Xaml@UI@Windows@winrt@@AEBUTextBoxTextChangingEventArgs@34567@@Z
    void OnAlphaTextChanging(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCheckerColorChanged@ColorPicker@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnCheckerColorChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnColorChanged@ColorPicker@@AEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnColorChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnColorPreviewRectangleGridSizeChanged@ColorPicker@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUSizeChangedEventArgs@Xaml@UI@45@@Z
    void OnColorPreviewRectangleGridSizeChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnColorRepresentationComboBoxSelectionChanged@ColorPicker@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUSelectionChangedEventArgs@Controls@Xaml@UI@45@@Z
    void OnColorRepresentationComboBoxSelectionChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnColorSpectrumColorChanged@ColorPicker@@AEAAXAEBUColorSpectrum@Primitives@Controls@Xaml@UI@Windows@winrt@@AEBUColorChangedEventArgs@45678@@Z
    void OnColorSpectrumColorChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnColorSpectrumSizeChanged@ColorPicker@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUSizeChangedEventArgs@Xaml@UI@45@@Z
    void OnColorSpectrumSizeChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHexTextChanging@ColorPicker@@AEAAXAEBUTextBox@Controls@Xaml@UI@Windows@winrt@@AEBUTextBoxTextChangingEventArgs@34567@@Z
    void OnHexTextChanging(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHueTextChanging@ColorPicker@@AEAAXAEBUTextBox@Controls@Xaml@UI@Windows@winrt@@AEBUTextBoxTextChangingEventArgs@34567@@Z
    void OnHueTextChanging(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMinMaxHueChanged@ColorPicker@@AEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnMinMaxHueChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMinMaxSaturationChanged@ColorPicker@@AEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnMinMaxSaturationChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMinMaxValueChanged@ColorPicker@@AEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnMinMaxValueChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMoreButtonChecked@ColorPicker@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnMoreButtonChecked(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMoreButtonClicked@ColorPicker@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnMoreButtonClicked(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMoreButtonUnchecked@ColorPicker@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnMoreButtonUnchecked(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRgbTextChanging@ColorPicker@@AEAAXAEBUTextBox@Controls@Xaml@UI@Windows@winrt@@AEBUTextBoxTextChangingEventArgs@34567@@Z
    void OnRgbTextChanging(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSaturationTextChanging@ColorPicker@@AEAAXAEBUTextBox@Controls@Xaml@UI@Windows@winrt@@AEBUTextBoxTextChangingEventArgs@34567@@Z
    void OnSaturationTextChanging(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTextBoxGotFocus@ColorPicker@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnTextBoxGotFocus(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTextBoxLostFocus@ColorPicker@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnTextBoxLostFocus(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThirdDimensionSliderValueChanged@ColorPicker@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURangeBaseValueChangedEventArgs@Primitives@Controls@Xaml@UI@45@@Z
    void OnThirdDimensionSliderValueChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnloaded@ColorPicker@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnUnloaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnValueTextChanging@ColorPicker@@AEAAXAEBUTextBox@Controls@Xaml@UI@Windows@winrt@@AEBUTextBoxTextChangingEventArgs@34567@@Z
    void OnValueTextChanging(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorAndUpdateControls@ColorPicker@@AEAAXW4ColorUpdateReason@1@@Z
    void SetColorAndUpdateControls(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThirdDimensionSliderChannel@ColorPicker@@AEAAXXZ
    void SetThirdDimensionSliderChannel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAlphaSlider@ColorPicker@@AEAAXXZ
    void UpdateAlphaSlider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateColor@ColorPicker@@AEAAXAEBVHsv@@W4ColorUpdateReason@1@@Z
    void UpdateColor(Hsv const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateColor@ColorPicker@@AEAAXAEBVRgb@@W4ColorUpdateReason@1@@Z
    void UpdateColor(Rgb const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateColor@ColorPicker@@AEAAXNW4ColorUpdateReason@1@@Z
    void UpdateColor(double, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateColorControls@ColorPicker@@AEAAXW4ColorUpdateReason@1@@Z
    void UpdateColorControls(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMoreButton@ColorPicker@@AEAAXXZ
    void UpdateMoreButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePreviousColorRectangle@ColorPicker@@AEAAXXZ
    void UpdatePreviousColorRectangle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateThirdDimensionSlider@ColorPicker@@AEAAXXZ
    void UpdateThirdDimensionSlider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualState@ColorPicker@@AEAAX_N@Z
    void UpdateVisualState(bool);
};
