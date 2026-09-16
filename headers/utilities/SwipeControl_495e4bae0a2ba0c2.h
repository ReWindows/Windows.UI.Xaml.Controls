#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 64 member(s).
class SwipeControl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@SwipeControl@@QEAAXXZ
    void Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CustomAnimationStateEntered@SwipeControl@@QEAAXAEBUInteractionTracker@Interactions@Composition@UI@Windows@winrt@@AEBUInteractionTrackerCustomAnimationStateEnteredArgs@34567@@Z
    void CustomAnimationStateEntered(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastInteractedWithSwipeControl@SwipeControl@@SA?AU1Controls@Xaml@UI@Windows@winrt@@XZ
    static WindissectOpaque GetLastInteractedWithSwipeControl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IdleStateEntered@SwipeControl@@QEAAXAEBUInteractionTracker@Interactions@Composition@UI@Windows@winrt@@AEBUInteractionTrackerIdleStateEnteredArgs@34567@@Z
    void IdleStateEntered(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InertiaStateEntered@SwipeControl@@QEAAXAEBUInteractionTracker@Interactions@Composition@UI@Windows@winrt@@AEBUInteractionTrackerInertiaStateEnteredArgs@34567@@Z
    void InertiaStateEntered(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InteractingStateEntered@SwipeControl@@QEAAXAEBUInteractionTracker@Interactions@Composition@UI@Windows@winrt@@AEBUInteractionTrackerInteractingStateEnteredArgs@34567@@Z
    void InteractingStateEntered(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@SwipeControl@@QEAA?AUSize@Foundation@Windows@winrt@@AEBU2345@@Z
    WindissectOpaque MeasureOverride(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@SwipeControl@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestIgnored@SwipeControl@@QEAAXAEBUInteractionTracker@Interactions@Composition@UI@Windows@winrt@@AEBUInteractionTrackerRequestIgnoredArgs@34567@@Z
    void RequestIgnored(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SwipeControl@@QEAA@XZ
    SwipeControl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValuesChanged@SwipeControl@@QEAAXAEBUInteractionTracker@Interactions@Composition@UI@Windows@winrt@@AEBUInteractionTrackerValuesChangedArgs@34567@@Z
    void ValuesChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SwipeControl@@UEAA@XZ
    virtual ~SwipeControl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AlignStackPanel@SwipeControl@@AEAAXXZ
    void AlignStackPanel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachDismissingHandlers@SwipeControl@@AEAAXXZ
    void AttachDismissingHandlers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachEventHandlers@SwipeControl@@AEAAXXZ
    void AttachEventHandlers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseIfNotRemainOpenExecuteItem@SwipeControl@@AEAAXXZ
    void CloseIfNotRemainOpenExecuteItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseWithoutAnimation@SwipeControl@@AEAAXXZ
    void CloseWithoutAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigurePositionInertiaRestingValues@SwipeControl@@AEAAXXZ
    void ConfigurePositionInertiaRestingValues();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBottomContent@SwipeControl@@AEAAXXZ
    void CreateBottomContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateContent@SwipeControl@@AEAAXAEBUSwipeItems@Controls@Xaml@UI@Windows@winrt@@@Z
    void CreateContent(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLeftContent@SwipeControl@@AEAAXXZ
    void CreateLeftContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRightContent@SwipeControl@@AEAAXXZ
    void CreateRightContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTopContent@SwipeControl@@AEAAXXZ
    void CreateTopContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CurrentXamlRootChanged@SwipeControl@@AEAAXAEBUXamlRoot@Xaml@UI@Windows@winrt@@AEBUXamlRootChangedEventArgs@3456@@Z
    void CurrentXamlRootChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachDismissingHandlers@SwipeControl@@AEAAXXZ
    void DetachDismissingHandlers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachEventHandlers@SwipeControl@@AEAAXXZ
    void DetachEventHandlers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissSwipeOnAcceleratorKeyActivator@SwipeControl@@AEAAXAEBUCoreDispatcher@Core@UI@Windows@winrt@@AEBUAcceleratorKeyEventArgs@3456@@Z
    void DismissSwipeOnAcceleratorKeyActivator(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissSwipeOnAnExternalTap@SwipeControl@@AEAAXAEBUPoint@Foundation@Windows@winrt@@@Z
    void DismissSwipeOnAnExternalTap(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissSwipeOnAnExternalXamlRootTap@SwipeControl@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUPointerRoutedEventArgs@Input@Xaml@UI@45@@Z
    void DismissSwipeOnAnExternalXamlRootTap(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissSwipeOnXamlRootKeyDown@SwipeControl@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUKeyRoutedEventArgs@Input@Xaml@UI@45@@Z
    void DismissSwipeOnXamlRootKeyDown(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureClip@SwipeControl@@AEAAXXZ
    void EnsureClip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindVisualInteractionSourceVisual@SwipeControl@@AEAA?AUVisual@Composition@UI@Windows@winrt@@XZ
    WindissectOpaque FindVisualInteractionSourceVisual();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSwipeItemButton@SwipeControl@@AEAA?AUAppBarButton@Controls@Xaml@UI@Windows@winrt@@AEBUSwipeItem@34567@@Z
    WindissectOpaque GetSwipeItemButton(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTemplateParts@SwipeControl@@AEAAXXZ
    void GetTemplateParts();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeInteractionTracker@SwipeControl@@AEAAXXZ
    void InitializeInteractionTracker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputEaterGridTapped@SwipeControl@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUTappedRoutedEventArgs@Input@Xaml@UI@45@@Z
    void InputEaterGridTapped(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBottomItemsChanged@SwipeControl@@AEAAXAEBU?$IObservableVector@USwipeItem@Controls@Xaml@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UIVectorChangedEventArgs@3456@@Z
    void OnBottomItemsChanged(WindissectOpaque const &, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBottomItemsCollectionChanged@SwipeControl@@AEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnBottomItemsCollectionChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLeftItemsChanged@SwipeControl@@AEAAXAEBU?$IObservableVector@USwipeItem@Controls@Xaml@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UIVectorChangedEventArgs@3456@@Z
    void OnLeftItemsChanged(WindissectOpaque const &, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLeftItemsCollectionChanged@SwipeControl@@AEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnLeftItemsCollectionChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoaded@SwipeControl@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressedEvent@SwipeControl@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUPointerRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnPointerPressedEvent(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRightItemsChanged@SwipeControl@@AEAAXAEBU?$IObservableVector@USwipeItem@Controls@Xaml@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UIVectorChangedEventArgs@3456@@Z
    void OnRightItemsChanged(WindissectOpaque const &, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRightItemsCollectionChanged@SwipeControl@@AEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnRightItemsCollectionChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSizeChanged@SwipeControl@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUSizeChangedEventArgs@Xaml@UI@45@@Z
    void OnSizeChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSwipeContentStackPanelSizeChanged@SwipeControl@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUSizeChangedEventArgs@Xaml@UI@45@@Z
    void OnSwipeContentStackPanelSizeChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTopItemsChanged@SwipeControl@@AEAAXAEBU?$IObservableVector@USwipeItem@Controls@Xaml@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UIVectorChangedEventArgs@3456@@Z
    void OnTopItemsChanged(WindissectOpaque const &, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTopItemsCollectionChanged@SwipeControl@@AEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnTopItemsCollectionChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateContentItems@SwipeControl@@AEAAXXZ
    void PopulateContentItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupClipAnimation@SwipeControl@@AEAAXXZ
    void SetupClipAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupExecuteExpressionAnimation@SwipeControl@@AEAAXXZ
    void SetupExecuteExpressionAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThrowIfHasVerticalAndHorizontalContent@SwipeControl@@AEAAX_N@Z
    void ThrowIfHasVerticalAndHorizontalContent(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetSwipeVisuals@SwipeControl@@AEAAXXZ
    void TryGetSwipeVisuals();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateColors@SwipeControl@@AEAAXXZ
    void UpdateColors();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateColorsIfExecuteItem@SwipeControl@@AEAAXXZ
    void UpdateColorsIfExecuteItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateColorsIfRevealItems@SwipeControl@@AEAAXXZ
    void UpdateColorsIfRevealItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateExecuteBackgroundColor@SwipeControl@@AEAAXAEBUSwipeItem@Controls@Xaml@UI@Windows@winrt@@@Z
    void UpdateExecuteBackgroundColor(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateExecuteForegroundColor@SwipeControl@@AEAAXAEBUSwipeItem@Controls@Xaml@UI@Windows@winrt@@@Z
    void UpdateExecuteForegroundColor(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsOpen@SwipeControl@@AEAAX_N@Z
    void UpdateIsOpen(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateThresholdReached@SwipeControl@@AEAAXM@Z
    void UpdateThresholdReached(float);
};
