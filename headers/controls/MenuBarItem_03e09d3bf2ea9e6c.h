#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 23 member(s).
class MenuBarItem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseMenuFlyout@MenuBarItem@@QEAAXXZ
    void CloseMenuFlyout();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MenuBarItem@@QEAA@XZ
    MenuBarItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@MenuBarItem@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowMenuFlyout@MenuBarItem@@QEAAXXZ
    void ShowMenuFlyout();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MenuBarItem@@UEAA@XZ
    virtual ~MenuBarItem();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachEventHandlers@MenuBarItem@@AEAAXXZ
    void AttachEventHandlers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachEventHandlers@MenuBarItem@@AEAAX_N@Z
    void DetachEventHandlers(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFlyoutClosed@MenuBarItem@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnFlyoutClosed(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFlyoutOpening@MenuBarItem@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnFlyoutOpening(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsVectorChanged@MenuBarItem@@AEAAXAEBU?$IObservableVector@UMenuFlyoutItemBase@Controls@Xaml@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@AEBUIVectorChangedEventArgs@3456@@Z
    void OnItemsVectorChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMenuBarItemAccessKeyInvoked@MenuBarItem@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUAccessKeyInvokedEventArgs@Input@Xaml@UI@45@@Z
    void OnMenuBarItemAccessKeyInvoked(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMenuBarItemKeyDown@MenuBarItem@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUKeyRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnMenuBarItemKeyDown(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMenuBarItemPointerEntered@MenuBarItem@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUPointerRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnMenuBarItemPointerEntered(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMenuBarItemPointerPressed@MenuBarItem@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUPointerRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnMenuBarItemPointerPressed(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPresenterKeyDown@MenuBarItem@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUKeyRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnPresenterKeyDown(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisualPropertyChanged@MenuBarItem@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnVisualPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenFlyoutFrom@MenuBarItem@@AEAAXW4FlyoutLocation@@@Z
    void OpenFlyoutFrom(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateContent@MenuBarItem@@AEAAXXZ
    void PopulateContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualStates@MenuBarItem@@AEAAXXZ
    void UpdateVisualStates();
};
