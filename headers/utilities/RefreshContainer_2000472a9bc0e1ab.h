#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 22 member(s).
class RefreshContainer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@RefreshContainer@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@RefreshContainer@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RefreshContainer@@QEAA@XZ
    RefreshContainer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshInfoProviderAdapter@RefreshContainer@@QEAA?AUIRefreshInfoProviderAdapter@Controls@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque RefreshInfoProviderAdapter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshInfoProviderAdapter@RefreshContainer@@QEAAXAEBUIRefreshInfoProviderAdapter@Controls@Xaml@UI@Windows@winrt@@@Z
    void RefreshInfoProviderAdapter(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestRefresh@RefreshContainer@@QEAAXXZ
    void RequestRefresh();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RefreshContainer@@UEAA@XZ
    virtual ~RefreshContainer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPullDirectionChanged@RefreshContainer@@AEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPullDirectionChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPullDirectionChangedImpl@RefreshContainer@@AEAAXXZ
    void OnPullDirectionChangedImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRefreshInfoProviderAdapterChanged@RefreshContainer@@AEAAXXZ
    void OnRefreshInfoProviderAdapterChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRefreshVisualizerChanged@RefreshContainer@@AEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnRefreshVisualizerChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRefreshVisualizerChangedImpl@RefreshContainer@@AEAAXXZ
    void OnRefreshVisualizerChangedImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisualizerRefreshRequested@RefreshContainer@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURefreshRequestedEventArgs@Controls@Xaml@UI@45@@Z
    void OnVisualizerRefreshRequested(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisualizerSizeChanged@RefreshContainer@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUSizeChangedEventArgs@Xaml@UI@45@@Z
    void OnVisualizerSizeChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseRefreshRequested@RefreshContainer@@AEAAXXZ
    void RaiseRefreshRequested();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshCompleted@RefreshContainer@@AEAAXXZ
    void RefreshCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SearchTreeForIRefreshInfoProvider@RefreshContainer@@AEAA?AUIRefreshInfoProvider@Controls@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque SearchTreeForIRefreshInfoProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SearchTreeForIRefreshInfoProviderRecursiveHelper@RefreshContainer@@AEAA?AUIRefreshInfoProvider@Controls@Xaml@UI@Windows@winrt@@UDependencyObject@4567@H@Z
    WindissectOpaque SearchTreeForIRefreshInfoProviderRecursiveHelper(WindissectOpaque, int);
};
