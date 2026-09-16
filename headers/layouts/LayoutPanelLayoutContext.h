#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 7 member(s).
class LayoutPanelLayoutContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChildrenCore@LayoutPanelLayoutContext@@UEAA?AU?$IVectorView@UUIElement@Xaml@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@XZ
    virtual WindissectOpaque ChildrenCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutStateCore@LayoutPanelLayoutContext@@UEAA?AUIInspectable@Foundation@Windows@winrt@@XZ
    virtual WindissectOpaque LayoutStateCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutStateCore@LayoutPanelLayoutContext@@UEAAXAEBUIInspectable@Foundation@Windows@winrt@@@Z
    virtual void LayoutStateCore(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LayoutPanelLayoutContext@@UEAA@XZ
    virtual ~LayoutPanelLayoutContext();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwner@LayoutPanelLayoutContext@@AEAA?AULayoutPanel@Controls@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque GetOwner();
};
