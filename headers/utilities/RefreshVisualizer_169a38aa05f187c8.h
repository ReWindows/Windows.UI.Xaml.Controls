#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 29 member(s).
class RefreshVisualizer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InfoProvider@RefreshVisualizer@@QEAA?AUIRefreshInfoProvider@Controls@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque InfoProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InfoProvider@RefreshVisualizer@@QEAAXAEBUIRefreshInfoProvider@Controls@Xaml@UI@Windows@winrt@@@Z
    void InfoProvider(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@RefreshVisualizer@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@RefreshVisualizer@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RefreshVisualizer@@QEAA@XZ
    RefreshVisualizer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestRefresh@RefreshVisualizer@@QEAAXXZ
    void RequestRefresh();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInternalPullDirection@RefreshVisualizer@@QEAAXAEBW4RefreshPullDirection@Controls@Xaml@UI@Windows@winrt@@@Z
    void SetInternalPullDirection(int const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RefreshVisualizer@@UEAA@XZ
    virtual ~RefreshVisualizer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteExecutingRotationAnimation@RefreshVisualizer@@AEAAXXZ
    void ExecuteExecutingRotationAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteInteractingAnimations@RefreshVisualizer@@AEAAXXZ
    void ExecuteInteractingAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteScaleUpAnimation@RefreshVisualizer@@AEAAXXZ
    void ExecuteScaleUpAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentChanged@RefreshVisualizer@@AEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnContentChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentChangedImpl@RefreshVisualizer@@AEAAXXZ
    void OnContentChangedImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOrientationChanged@RefreshVisualizer@@AEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnOrientationChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOrientationChangedImpl@RefreshVisualizer@@AEAAXXZ
    void OnOrientationChangedImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRefreshInfoProviderChanged@RefreshVisualizer@@AEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnRefreshInfoProviderChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStateChanged@RefreshVisualizer@@AEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnStateChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseRefreshRequested@RefreshVisualizer@@AEAAXXZ
    void RaiseRefreshRequested();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseRefreshStateChanged@RefreshVisualizer@@AEAAXAEBW4RefreshVisualizerState@Controls@Xaml@UI@Windows@winrt@@0@Z
    void RaiseRefreshStateChanged(int const &, int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshCompleted@RefreshVisualizer@@AEAAXXZ
    void RefreshCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshInfoProvider_InteractingForRefreshChanged@RefreshVisualizer@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void RefreshInfoProvider_InteractingForRefreshChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshInfoProvider_InteractionRatioChanged@RefreshVisualizer@@AEAAXAEBUIRefreshInfoProvider@Controls@Xaml@UI@Windows@winrt@@AEBURefreshInteractionRatioChangedEventArgs@34567@@Z
    void RefreshInfoProvider_InteractionRatioChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateContent@RefreshVisualizer@@AEAAXXZ
    void UpdateContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRefreshState@RefreshVisualizer@@AEAAXAEBW4RefreshVisualizerState@Controls@Xaml@UI@Windows@winrt@@@Z
    void UpdateRefreshState(int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_State@RefreshVisualizer@@AEAAXAEBW4RefreshVisualizerState@Controls@Xaml@UI@Windows@winrt@@@Z
    void put_State(int const &);
};
