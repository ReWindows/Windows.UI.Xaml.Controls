#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 16 member(s).
class CommandBarFlyoutCommandBar {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearShadow@CommandBarFlyoutCommandBar@@QEAAXXZ
    void ClearShadow();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CommandBarFlyoutCommandBar@@QEAA@XZ
    CommandBarFlyoutCommandBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@CommandBarFlyoutCommandBar@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOwningFlyout@CommandBarFlyoutCommandBar@@QEAAXAEBUCommandBarFlyout@Controls@Xaml@UI@Windows@winrt@@@Z
    void SetOwningFlyout(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CommandBarFlyoutCommandBar@@UEAA@XZ
    virtual ~CommandBarFlyoutCommandBar();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddShadow@CommandBarFlyoutCommandBar@@AEAAXXZ
    void AddShadow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachEventHandlers@CommandBarFlyoutCommandBar@@AEAAXXZ
    void AttachEventHandlers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachEventHandlers@CommandBarFlyoutCommandBar@@AEAAX_N@Z
    void DetachEventHandlers(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFlowsFromAndFlowsTo@CommandBarFlyoutCommandBar@@AEAAXXZ
    void UpdateFlowsFromAndFlowsTo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTemplateSettings@CommandBarFlyoutCommandBar@@AEAAXXZ
    void UpdateTemplateSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateUI@CommandBarFlyoutCommandBar@@AEAAX_N@Z
    void UpdateUI(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualState@CommandBarFlyoutCommandBar@@AEAAX_N@Z
    void UpdateVisualState(bool);
};
