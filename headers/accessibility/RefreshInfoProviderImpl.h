#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 29 member(s).
class RefreshInfoProviderImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CustomAnimationStateEntered@RefreshInfoProviderImpl@@QEAAXAEBUInteractionTracker@Interactions@Composition@UI@Windows@winrt@@AEBUInteractionTrackerCustomAnimationStateEnteredArgs@34567@@Z
    void CustomAnimationStateEntered(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IdleStateEntered@RefreshInfoProviderImpl@@QEAAXAEBUInteractionTracker@Interactions@Composition@UI@Windows@winrt@@AEBUInteractionTrackerIdleStateEnteredArgs@34567@@Z
    void IdleStateEntered(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InertiaStateEntered@RefreshInfoProviderImpl@@QEAAXAEBUInteractionTracker@Interactions@Composition@UI@Windows@winrt@@AEBUInteractionTrackerInertiaStateEnteredArgs@34567@@Z
    void InertiaStateEntered(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InteractingStateEntered@RefreshInfoProviderImpl@@QEAAXAEBUInteractionTracker@Interactions@Composition@UI@Windows@winrt@@AEBUInteractionTrackerInteractingStateEnteredArgs@34567@@Z
    void InteractingStateEntered(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InteractionRatioChanged@RefreshInfoProviderImpl@@QEAA?AUevent_token@winrt@@AEBU?$TypedEventHandler@UIRefreshInfoProvider@Controls@Xaml@UI@Windows@winrt@@URefreshInteractionRatioChangedEventArgs@23456@@Foundation@Windows@3@@Z
    WindissectOpaque InteractionRatioChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InteractionRatioCompositionProperty@RefreshInfoProviderImpl@@QEAA?AUhstring@winrt@@XZ
    WindissectOpaque InteractionRatioCompositionProperty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInteractingForRefreshChanged@RefreshInfoProviderImpl@@QEAA?AUevent_token@winrt@@AEBU?$TypedEventHandler@UIRefreshInfoProvider@Controls@Xaml@UI@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@3@@Z
    WindissectOpaque IsInteractingForRefreshChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRefreshCompleted@RefreshInfoProviderImpl@@QEAAXXZ
    void OnRefreshCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRefreshStarted@RefreshInfoProviderImpl@@QEAAXXZ
    void OnRefreshStarted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseInteractionRatioChanged@RefreshInfoProviderImpl@@QEAAXN@Z
    void RaiseInteractionRatioChanged(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseIsInteractingForRefreshChanged@RefreshInfoProviderImpl@@QEAAXXZ
    void RaiseIsInteractingForRefreshChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseRefreshCompleted@RefreshInfoProviderImpl@@QEAAXXZ
    void RaiseRefreshCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseRefreshStarted@RefreshInfoProviderImpl@@QEAAXXZ
    void RaiseRefreshStarted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshCompleted@RefreshInfoProviderImpl@@QEAA?AUevent_token@winrt@@AEBU?$TypedEventHandler@UIRefreshInfoProvider@Controls@Xaml@UI@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@3@@Z
    WindissectOpaque RefreshCompleted(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RefreshInfoProviderImpl@@QEAA@AEBW4RefreshPullDirection@Controls@Xaml@UI@Windows@winrt@@AEBUSize@Foundation@56@AEBUCompositor@Composition@456@@Z
    RefreshInfoProviderImpl(int const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshStarted@RefreshInfoProviderImpl@@QEAA?AUevent_token@winrt@@AEBU?$TypedEventHandler@UIRefreshInfoProvider@Controls@Xaml@UI@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@3@@Z
    WindissectOpaque RefreshStarted(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestIgnored@RefreshInfoProviderImpl@@QEAAXAEBUInteractionTracker@Interactions@Composition@UI@Windows@winrt@@AEBUInteractionTrackerRequestIgnoredArgs@34567@@Z
    void RequestIgnored(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPeekingMode@RefreshInfoProviderImpl@@QEAAX_N@Z
    void SetPeekingMode(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsInteractingForRefresh@RefreshInfoProviderImpl@@QEAAX_N@Z
    void UpdateIsInteractingForRefresh(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValuesChanged@RefreshInfoProviderImpl@@QEAAXAEBUInteractionTracker@Interactions@Composition@UI@Windows@winrt@@AEBUInteractionTrackerValuesChangedArgs@34567@@Z
    void ValuesChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RefreshInfoProviderImpl@@UEAA@XZ
    virtual ~RefreshInfoProviderImpl();
};
