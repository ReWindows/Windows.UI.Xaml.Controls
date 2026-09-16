#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 50 member(s).
class RatingControl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@RatingControl@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@RatingControl@@QEAA?AUAutomationPeer@Peers@Automation@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque OnCreateAutomationPeer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@RatingControl@@QEAAXAEBUKeyRoutedEventArgs@Input@Xaml@UI@Windows@winrt@@@Z
    void OnKeyDown(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPreviewKeyDown@RatingControl@@QEAAXAEBUKeyRoutedEventArgs@Input@Xaml@UI@Windows@winrt@@@Z
    void OnPreviewKeyDown(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@RatingControl@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RatingControl@@QEAA@XZ
    RatingControl();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RatingControl@@UEAA@XZ
    virtual ~RatingControl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyScaleExpressionAnimation@RatingControl@@AEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@H@Z
    void ApplyScaleExpressionAnimation(WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateActualRatingWidth@RatingControl@@AEAANXZ
    double CalculateActualRatingWidth();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateStarCenter@RatingControl@@AEAANH@Z
    double CalculateStarCenter(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateTotalRatingControlWidth@RatingControl@@AEAANXZ
    double CalculateTotalRatingControlWidth();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeRatingBy@RatingControl@@AEAAXN_N@Z
    void ChangeRatingBy(double, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoerceValueBetweenMinAndMax@RatingControl@@AEAANN@Z
    double CoerceValueBetweenMinAndMax(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CustomizeRatingItem@RatingControl@@AEAAXUUIElement@Xaml@UI@Windows@winrt@@W4RatingControlStates@@@Z
    void CustomizeRatingItem(WindissectOpaque, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CustomizeStackPanel@RatingControl@@AEAAXUStackPanel@Controls@Xaml@UI@Windows@winrt@@W4RatingControlStates@@@Z
    void CustomizeStackPanel(WindissectOpaque, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterGamepadEngagementMode@RatingControl@@AEAAXXZ
    void EnterGamepadEngagementMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExitGamepadEngagementMode@RatingControl@@AEAAXXZ
    void ExitGamepadEngagementMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppropriateGlyph@RatingControl@@AEAA?AUhstring@winrt@@W4RatingControlStates@@@Z
    WindissectOpaque GetAppropriateGlyph(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppropriateImageSource@RatingControl@@AEAA?AUImageSource@Media@Xaml@UI@Windows@winrt@@W4RatingControlStates@@@Z
    WindissectOpaque GetAppropriateImageSource(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextGlyphIfNull@RatingControl@@AEAA?AUhstring@winrt@@U23@W4RatingControlStates@@@Z
    WindissectOpaque GetNextGlyphIfNull(WindissectOpaque, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextImageIfNull@RatingControl@@AEAA?AUImageSource@Media@Xaml@UI@Windows@winrt@@U234567@W4RatingControlStates@@@Z
    WindissectOpaque GetNextImageIfNull(WindissectOpaque, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUISettings@RatingControl@@CA?AUUISettings@ViewManagement@UI@Windows@winrt@@XZ
    static WindissectOpaque GetUISettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemSpacing@RatingControl@@AEAANXZ
    double ItemSpacing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCaptionSizeChanged@RatingControl@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUSizeChangedEventArgs@Xaml@UI@45@@Z
    void OnCaptionSizeChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusDisengaged@RatingControl@@AEAAXAEBUControl@Controls@Xaml@UI@Windows@winrt@@AEBUFocusDisengagedEventArgs@34567@@Z
    void OnFocusDisengaged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusEngaged@RatingControl@@AEAAXAEBUControl@Controls@Xaml@UI@Windows@winrt@@AEBUFocusEngagedEventArgs@34567@@Z
    void OnFocusEngaged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFontFamilyChanged@RatingControl@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnFontFamilyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsEnabledChanged@RatingControl@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@Xaml@UI@45@@Z
    void OnIsEnabledChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemInfoChanged@RatingControl@@AEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnItemInfoChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCancelledBackgroundStackPanel@RatingControl@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUPointerRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnPointerCancelledBackgroundStackPanel(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCaptureLostBackgroundStackPanel@RatingControl@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUPointerRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnPointerCaptureLostBackgroundStackPanel(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEnteredBackgroundStackPanel@RatingControl@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUPointerRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnPointerEnteredBackgroundStackPanel(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExitedBackgroundStackPanel@RatingControl@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUPointerRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnPointerExitedBackgroundStackPanel(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerMovedOverBackgroundStackPanel@RatingControl@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUPointerRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnPointerMovedOverBackgroundStackPanel(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressedBackgroundStackPanel@RatingControl@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUPointerRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnPointerPressedBackgroundStackPanel(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerReleasedBackgroundStackPanel@RatingControl@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUPointerRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnPointerReleasedBackgroundStackPanel(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTextScaleFactorChanged@RatingControl@@AEAAXAEBUUISettings@ViewManagement@UI@Windows@winrt@@AEBUIInspectable@Foundation@56@@Z
    void OnTextScaleFactorChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnValueChanged@RatingControl@@AEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnValueChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PointerExitedImpl@RatingControl@@AEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@winrt@@_N@Z
    void PointerExitedImpl(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecycleEvents@RatingControl@@AEAAX_N@Z
    void RecycleEvents(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderingRatingFontSize@RatingControl@@AEAAMXZ
    float RenderingRatingFontSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetControlWidth@RatingControl@@AEAAXXZ
    void ResetControlWidth();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRatingTo@RatingControl@@AEAAXN_N@Z
    void SetRatingTo(double, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StampOutRatingItems@RatingControl@@AEAAXXZ
    void StampOutRatingItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCaptionMargins@RatingControl@@AEAAXXZ
    void UpdateCaptionMargins();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRatingItemsAppearance@RatingControl@@AEAAXXZ
    void UpdateRatingItemsAppearance();
};
