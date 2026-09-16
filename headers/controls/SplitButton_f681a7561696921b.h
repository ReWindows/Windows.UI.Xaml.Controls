#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 24 member(s).
class SplitButton {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseFlyout@SplitButton@@QEAAXXZ
    void CloseFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalIsChecked@SplitButton@@UEAA_NXZ
    virtual bool InternalIsChecked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@SplitButton@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClickPrimary@SplitButton@@UEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    virtual void OnClickPrimary(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@SplitButton@@UEAA?AUAutomationPeer@Peers@Automation@Xaml@UI@Windows@winrt@@XZ
    virtual WindissectOpaque OnCreateAutomationPeer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@SplitButton@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenFlyout@SplitButton@@QEAAXXZ
    void OpenFlyout();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SplitButton@@QEAA@XZ
    SplitButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualStates@SplitButton@@QEAAX_N@Z
    void UpdateVisualStates(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SplitButton@@UEAA@XZ
    virtual ~SplitButton();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClickSecondary@SplitButton@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnClickSecondary(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFlyoutClosed@SplitButton@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnFlyoutClosed(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFlyoutOpened@SplitButton@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnFlyoutOpened(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFlyoutPlacementChanged@SplitButton@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnFlyoutPlacementChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEvent@SplitButton@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUPointerRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnPointerEvent(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSplitButtonKeyDown@SplitButton@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUKeyRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnSplitButtonKeyDown(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSplitButtonKeyUp@SplitButton@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUKeyRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnSplitButtonKeyUp(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisualPropertyChanged@SplitButton@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnVisualPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterFlyoutEvents@SplitButton@@AEAAXXZ
    void RegisterFlyoutEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterEvents@SplitButton@@AEAAXXZ
    void UnregisterEvents();
};
