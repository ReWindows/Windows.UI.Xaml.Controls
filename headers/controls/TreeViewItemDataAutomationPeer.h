#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 7 member(s).
class TreeViewItemDataAutomationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Collapse@TreeViewItemDataAutomationPeer@@QEAAXXZ
    void Collapse();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Expand@TreeViewItemDataAutomationPeer@@QEAAXXZ
    void Expand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandCollapseState@TreeViewItemDataAutomationPeer@@QEAA?AW40Automation@Xaml@UI@Windows@winrt@@XZ
    int ExpandCollapseState();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TreeViewItemDataAutomationPeer@@QEAA@AEBUIInspectable@Foundation@Windows@winrt@@AEBUTreeViewListAutomationPeer@Peers@Automation@Xaml@UI@34@@Z
    TreeViewItemDataAutomationPeer(WindissectOpaque const &, WindissectOpaque const &);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTreeViewItemAutomationPeer@TreeViewItemDataAutomationPeer@@AEAA?AUTreeViewItemAutomationPeer@Peers@Automation@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque GetTreeViewItemAutomationPeer();
};
