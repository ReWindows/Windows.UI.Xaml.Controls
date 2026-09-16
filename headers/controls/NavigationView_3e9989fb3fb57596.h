#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 120 member(s).
class NavigationView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainerFromMenuItem@NavigationView@@QEAA?AUDependencyObject@Xaml@UI@Windows@winrt@@AEBUIInspectable@Foundation@56@@Z
    WindissectOpaque ContainerFromMenuItem(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndAttachHeaderAnimation@NavigationView@@SAXUVisual@Composition@UI@Windows@winrt@@@Z
    static void CreateAndAttachHeaderAnimation(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindSelectionIndicator@NavigationView@@QEAA?AUUIElement@Xaml@UI@Windows@winrt@@AEBUIInspectable@Foundation@56@@Z
    WindissectOpaque FindSelectionIndicator(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFullScreenOrTabletMode@NavigationView@@QEAA_NXZ
    bool IsFullScreenOrTabletMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@NavigationView@@QEAA?AUSize@Foundation@Windows@winrt@@AEBU2345@@Z
    WindissectOpaque MeasureOverride(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MenuItemFromContainer@NavigationView@@QEAA?AUIInspectable@Foundation@Windows@winrt@@AEBUDependencyObject@Xaml@UI@45@@Z
    WindissectOpaque MenuItemFromContainer(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NavigationView@@QEAA@XZ
    NavigationView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@NavigationView@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@NavigationView@@QEAAXAEBUKeyRoutedEventArgs@Input@Xaml@UI@Windows@winrt@@@Z
    void OnKeyDown(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListViewLoaded@NavigationView@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnListViewLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoaded@NavigationView@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@NavigationView@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSettingsInvoked@NavigationView@@QEAAXXZ
    void OnSettingsInvoked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTopNavDataSourceChanged@NavigationView@@QEAAXAEBUNotifyCollectionChangedEventArgs@Interop@Xaml@UI@Windows@winrt@@@Z
    void OnTopNavDataSourceChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnloaded@NavigationView@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnUnloaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NavigationView@@UEAA@XZ
    virtual ~NavigationView();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimateSelectionChanged@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void AnimateSelectionChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttemptClosePaneLightly@NavigationView@@AEAA_NXZ
    bool AttemptClosePaneLightly();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BumperNavigation@NavigationView@@AEAA_NH@Z
    bool BumperNavigation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeSelectStatusForItem@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@_N@Z
    void ChangeSelectStatusForItem(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeSelection@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void ChangeSelection(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClosePane@NavigationView@@AEAAXXZ
    void ClosePane();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseTopNavigationViewFlyout@NavigationView@@AEAAXXZ
    void CloseTopNavigationViewFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContinueHandleTopNavigationMeasureOverride@NavigationView@@AEAAXW4TopNavigationViewLayoutState@@AEBUSize@Foundation@Windows@winrt@@@Z
    void ContinueHandleTopNavigationMeasureOverride(int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNavigationTransitionInfo@NavigationView@@AEAA?AUNavigationTransitionInfo@Animation@Media@Xaml@UI@Windows@winrt@@W4NavigationRecommendedTransitionDirection@@@Z
    WindissectOpaque CreateNavigationTransitionInfo(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesSelectedItemContainContent@NavigationView@@AEAA_NAEBUIInspectable@Foundation@Windows@winrt@@AEBUNavigationViewItemBase@Controls@Xaml@UI@45@@Z
    bool DoesSelectedItemContainContent(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainerForClickedItem@NavigationView@@AEAA?AUNavigationViewItemBase@Controls@Xaml@UI@Windows@winrt@@AEBUIInspectable@Foundation@67@@Z
    WindissectOpaque GetContainerForClickedItem(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRecommendedTransitionDirection@NavigationView@@AEAA?AW4NavigationRecommendedTransitionDirection@@AEBUDependencyObject@Xaml@UI@Windows@winrt@@0@Z
    int GetRecommendedTransitionDirection(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectedItemIndex@NavigationView@@AEAAHXZ
    int GetSelectedItemIndex();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTemplateSettings@NavigationView@@AEAAPEAVNavigationViewTemplateSettings@@XZ
    NavigationViewTemplateSettings * GetTemplateSettings();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTopNavigationViewActualWidth@NavigationView@@AEAAMXZ
    float GetTopNavigationViewActualWidth();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTopNavigationMeasureOverride@NavigationView@@AEAAXAEBUSize@Foundation@Windows@winrt@@@Z
    void HandleTopNavigationMeasureOverride(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTopNavigationMeasureOverrideOverflow@NavigationView@@AEAAXAEBUSize@Foundation@Windows@winrt@@@Z
    void HandleTopNavigationMeasureOverrideOverflow(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTopNavigationMeasureOverrideStep3@NavigationView@@AEAAXAEBUSize@Foundation@Windows@winrt@@@Z
    void HandleTopNavigationMeasureOverrideStep3(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateTopNavPrimaryLayout@NavigationView@@AEAAXXZ
    void InvalidateTopNavPrimaryLayout();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLightDismissible@NavigationView@@AEAA_NXZ
    bool IsLightDismissible();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNavigationViewListSingleSelectionFollowsFocus@NavigationView@@AEAA_NXZ
    bool IsNavigationViewListSingleSelectionFollowsFocus();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOverlay@NavigationView@@AEAA_NXZ
    bool IsOverlay();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSelectionSuppressed@NavigationView@@AEAA_NAEBUIInspectable@Foundation@Windows@winrt@@@Z
    bool IsSelectionSuppressed(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSettingsItem@NavigationView@@AEAA_NAEBUIInspectable@Foundation@Windows@winrt@@@Z
    bool IsSettingsItem(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTopNavigationView@NavigationView@@AEAA_NXZ
    bool IsTopNavigationView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTopPrimaryListVisible@NavigationView@@AEAA_NXZ
    bool IsTopPrimaryListVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureTopNavigationViewDesiredWidth@NavigationView@@AEAAMAEBUSize@Foundation@Windows@winrt@@@Z
    float MeasureTopNavigationViewDesiredWidth(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigationViewItemBaseOrSettingsContentFromData@NavigationView@@AEAA?AUNavigationViewItemBase@Controls@Xaml@UI@Windows@winrt@@AEBUIInspectable@Foundation@67@@Z
    WindissectOpaque NavigationViewItemBaseOrSettingsContentFromData(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigationViewItemOrSettingsContentFromData@NavigationView@@AEAA?AUNavigationViewItem@Controls@Xaml@UI@Windows@winrt@@AEBUIInspectable@Foundation@67@@Z
    WindissectOpaque NavigationViewItemOrSettingsContentFromData(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedTopPaddingForRS5OrHigher@NavigationView@@AEAA_NAEBUCoreApplicationViewTitleBar@Core@ApplicationModel@Windows@winrt@@@Z
    bool NeedTopPaddingForRS5OrHigher(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAccessKeyInvoked@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUAccessKeyInvokedEventArgs@Input@Xaml@UI@45@@Z
    void OnAccessKeyInvoked(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimationComplete@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUCompositionBatchCompletedEventArgs@Composition@UI@45@@Z
    void OnAnimationComplete(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBackButtonClicked@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnBackButtonClicked(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsPaneOpenChanged@NavigationView@@AEAAXXZ
    void OnIsPaneOpenChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemClick@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUItemClickEventArgs@Controls@Xaml@UI@45@@Z
    void OnItemClick(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLayoutUpdated@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnLayoutUpdated(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOverflowItemSelectionChanged@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUSelectionChangedEventArgs@Controls@Xaml@UI@45@@Z
    void OnOverflowItemSelectionChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPaneSearchButtonClick@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnPaneSearchButtonClick(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPaneToggleButtonClick@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnPaneToggleButtonClick(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectedItemPropertyChanged@NavigationView@@AEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnSelectedItemPropertyChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionChanged@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUSelectionChangedEventArgs@Controls@Xaml@UI@45@@Z
    void OnSelectionChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSettingsKeyDown@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUKeyRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnSettingsKeyDown(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSettingsKeyUp@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUKeyRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnSettingsKeyUp(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSettingsTapped@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUTappedRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnSettingsTapped(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSizeChanged@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUSizeChangedEventArgs@Xaml@UI@45@@Z
    void OnSizeChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSplitViewClosedCompactChanged@NavigationView@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnSplitViewClosedCompactChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSplitViewPaneClosed@NavigationView@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUIInspectable@Foundation@56@@Z
    void OnSplitViewPaneClosed(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSplitViewPaneClosing@NavigationView@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUSplitViewPaneClosingEventArgs@Controls@3456@@Z
    void OnSplitViewPaneClosing(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSplitViewPaneOpened@NavigationView@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUIInspectable@Foundation@56@@Z
    void OnSplitViewPaneOpened(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSplitViewPaneOpening@NavigationView@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUIInspectable@Foundation@56@@Z
    void OnSplitViewPaneOpening(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTitleBarIsVisibleChanged@NavigationView@@AEAAXAEBUCoreApplicationViewTitleBar@Core@ApplicationModel@Windows@winrt@@AEBUIInspectable@Foundation@56@@Z
    void OnTitleBarIsVisibleChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTitleBarMetricsChanged@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnTitleBarMetricsChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenPane@NavigationView@@AEAAXXZ
    void OpenPane();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlayIndicatorAnimations@NavigationView@@AEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@MM_N@Z
    void PlayIndicatorAnimations(WindissectOpaque const &, float, float, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseDisplayModeChanged@NavigationView@@AEAAXAEBW4NavigationViewDisplayMode@Controls@Xaml@UI@Windows@winrt@@@Z
    void RaiseDisplayModeChanged(int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseItemInvoked@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@_NAEBUNavigationViewItemBase@Controls@Xaml@UI@45@W4NavigationRecommendedTransitionDirection@@@Z
    void RaiseItemInvoked(WindissectOpaque const &, bool, WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseSelectionChangedEvent@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@_NW4NavigationRecommendedTransitionDirection@@@Z
    void RaiseSelectionChangedEvent(WindissectOpaque const &, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetElementAnimationProperties@NavigationView@@AEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@M@Z
    void ResetElementAnimationProperties(WindissectOpaque const &, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectOverflowItem@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@@Z
    void SelectOverflowItem(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisplayMode@NavigationView@@AEAAXAEBW4NavigationViewDisplayMode@Controls@Xaml@UI@Windows@winrt@@_N@Z
    void SetDisplayMode(int const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNavigationViewListPosition@NavigationView@@AEAAXAEAUListView@Controls@Xaml@UI@Windows@winrt@@W4NavigationViewListPosition@@@Z
    void SetNavigationViewListPosition(WindissectOpaque &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOverflowButtonVisibility@NavigationView@@AEAAXAEBW4Visibility@Xaml@UI@Windows@winrt@@@Z
    void SetOverflowButtonVisibility(int const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPaneToggleButtonAutomationName@NavigationView@@AEAAXXZ
    void SetPaneToggleButtonAutomationName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelectedItemAndExpectItemInvokeWhenSelectionChangedIfNotInvokedFromAPI@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@@Z
    void SetSelectedItemAndExpectItemInvokeWhenSelectionChangedIfNotInvokedFromAPI(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldIgnoreMeasureOverride@NavigationView@@AEAA_NXZ
    bool ShouldIgnoreMeasureOverride();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShowBackButton@NavigationView@@AEAA_NXZ
    bool ShouldShowBackButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShrinkTopNavigationSize@NavigationView@@AEAAXMAEBUSize@Foundation@Windows@winrt@@@Z
    void ShrinkTopNavigationSize(float, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwapPaneHeaderContent@NavigationView@@AEAAXV?$tracker_ref@UContentControl@Controls@Xaml@UI@Windows@winrt@@$0A@PEAUIUnknown@@U?$IUnknownAccessor@UContentControl@Controls@Xaml@UI@Windows@winrt@@X@@@@0AEBUhstring@winrt@@@Z
    void SwapPaneHeaderContent(WindissectOpaque, WindissectOpaque, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UndoSelectionAndRevertSelectionTo@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void UndoSelectionAndRevertSelectionTo(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhookEventsAndClearFields@NavigationView@@AEAAX_N@Z
    void UnhookEventsAndClearFields(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnselectPrevItem@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void UnselectPrevItem(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAdaptiveLayout@NavigationView@@AEAAXN_N@Z
    void UpdateAdaptiveLayout(double, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBackButtonVisibility@NavigationView@@AEAAXXZ
    void UpdateBackButtonVisibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateContentBindingsForPaneDisplayMode@NavigationView@@AEAAXXZ
    void UpdateContentBindingsForPaneDisplayMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHeaderVisibility@NavigationView@@AEAAXW4NavigationViewDisplayMode@Controls@Xaml@UI@Windows@winrt@@@Z
    void UpdateHeaderVisibility(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHeaderVisibility@NavigationView@@AEAAXXZ
    void UpdateHeaderVisibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsClosedCompact@NavigationView@@AEAAXXZ
    void UpdateIsClosedCompact();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLeftNavListViewItemSource@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@@Z
    void UpdateLeftNavListViewItemSource(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLeftNavigationOnlyVisualState@NavigationView@@AEAAX_N@Z
    void UpdateLeftNavigationOnlyVisualState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateListViewItemSource@NavigationView@@AEAAXXZ
    void UpdateListViewItemSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateListViewItemsSource@NavigationView@@AEAAXAEBUListView@Controls@Xaml@UI@Windows@winrt@@AEBUIInspectable@Foundation@67@@Z
    void UpdateListViewItemsSource(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateNavigationViewUseSystemVisual@NavigationView@@AEAAXXZ
    void UpdateNavigationViewUseSystemVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePaneDisplayMode@NavigationView@@AEAAXW4NavigationViewPaneDisplayMode@Controls@Xaml@UI@Windows@winrt@@0@Z
    void UpdatePaneDisplayMode(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePaneDisplayMode@NavigationView@@AEAAXXZ
    void UpdatePaneDisplayMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePaneTabFocusNavigation@NavigationView@@AEAAXXZ
    void UpdatePaneTabFocusNavigation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePaneTitleMargins@NavigationView@@AEAAXXZ
    void UpdatePaneTitleMargins();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePaneToggleButtonVisibility@NavigationView@@AEAAXXZ
    void UpdatePaneToggleButtonVisibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePaneToggleSize@NavigationView@@AEAAXXZ
    void UpdatePaneToggleSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePaneVisibility@NavigationView@@AEAAXXZ
    void UpdatePaneVisibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSelectedItem@NavigationView@@AEAAXXZ
    void UpdateSelectedItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSettingsItemToolTip@NavigationView@@AEAAXXZ
    void UpdateSettingsItemToolTip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSingleSelectionFollowsFocusTemplateSetting@NavigationView@@AEAAXXZ
    void UpdateSingleSelectionFollowsFocusTemplateSetting();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTitleBarPadding@NavigationView@@AEAAXXZ
    void UpdateTitleBarPadding();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTopNavListViewItemSource@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@@Z
    void UpdateTopNavListViewItemSource(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTopNavigationWidthCache@NavigationView@@AEAAXXZ
    void UpdateTopNavigationWidthCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualState@NavigationView@@AEAAX_N@Z
    void UpdateVisualState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualStateForDisplayModeGroup@NavigationView@@AEAAXAEBW4NavigationViewDisplayMode@Controls@Xaml@UI@Windows@winrt@@@Z
    void UpdateVisualStateForDisplayModeGroup(int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualStateForOverflowButton@NavigationView@@AEAAXXZ
    void UpdateVisualStateForOverflowButton();
};
