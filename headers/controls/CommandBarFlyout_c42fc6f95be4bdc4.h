#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 10 member(s).
class CommandBarFlyout {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CommandBarFlyout@@QEAA@XZ
    CommandBarFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePresenter@CommandBarFlyout@@QEAA?AUControl@Controls@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque CreatePresenter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrimaryCommands@CommandBarFlyout@@QEAA?AU?$IObservableVector@UICommandBarElement@Controls@Xaml@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@XZ
    WindissectOpaque PrimaryCommands();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SecondaryCommands@CommandBarFlyout@@QEAA?AU?$IObservableVector@UICommandBarElement@Controls@Xaml@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@XZ
    WindissectOpaque SecondaryCommands();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CommandBarFlyout@@UEAA@XZ
    virtual ~CommandBarFlyout();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSecondaryCommandsToCloseWhenExecuted@CommandBarFlyout@@AEAAXXZ
    void SetSecondaryCommandsToCloseWhenExecuted();
};
