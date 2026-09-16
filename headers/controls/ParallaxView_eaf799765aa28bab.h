#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 21 member(s).
class ParallaxView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@ParallaxView@@QEAA?AUSize@Foundation@Windows@winrt@@AEBU2345@@Z
    WindissectOpaque ArrangeOverride(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@ParallaxView@@QEAA?AUSize@Foundation@Windows@winrt@@AEBU2345@@Z
    WindissectOpaque MeasureOverride(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@ParallaxView@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ParallaxView@@QEAA@XZ
    ParallaxView();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ParallaxView@@UEAA@XZ
    virtual ~ParallaxView();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAnimatedVariables@ParallaxView@@AEAAXXZ
    void EnsureAnimatedVariables();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookChildPropertyChanged@ParallaxView@@AEAAXAEBUFrameworkElement@Xaml@UI@Windows@winrt@@@Z
    void HookChildPropertyChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookLoaded@ParallaxView@@AEAAXXZ
    void HookLoaded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookSizeChanged@ParallaxView@@AEAAXXZ
    void HookSizeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChildPropertyChanged@ParallaxView@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnChildPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoaded@ParallaxView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSizeChanged@ParallaxView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUSizeChangedEventArgs@Xaml@UI@45@@Z
    void OnSizeChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhookChildPropertyChanged@ParallaxView@@AEAAX_N@Z
    void UnhookChildPropertyChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateChild@ParallaxView@@AEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@0@Z
    void UpdateChild(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEndOffsetExpression@ParallaxView@@AEAAXW4Orientation@Controls@Xaml@UI@Windows@winrt@@@Z
    void UpdateEndOffsetExpression(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateExpressionAnimation@ParallaxView@@AEAAXW4Orientation@Controls@Xaml@UI@Windows@winrt@@@Z
    void UpdateExpressionAnimation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStartOffsetExpression@ParallaxView@@AEAAXW4Orientation@Controls@Xaml@UI@Windows@winrt@@@Z
    void UpdateStartOffsetExpression(int);
};
