#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 12 member(s).
class TreeViewItemAutomationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Collapse@TreeViewItemAutomationPeer@@QEAAXXZ
    void Collapse();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Expand@TreeViewItemAutomationPeer@@QEAAXXZ
    void Expand();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNameCore@TreeViewItemAutomationPeer@@QEAA?AUhstring@winrt@@XZ
    WindissectOpaque GetNameCore();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternCore@TreeViewItemAutomationPeer@@QEAA?AUIInspectable@Foundation@Windows@winrt@@AEBW4PatternInterface@Peers@Automation@Xaml@UI@45@@Z
    WindissectOpaque GetPatternCore(int const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionInSetCore@TreeViewItemAutomationPeer@@QEAAHXZ
    int GetPositionInSetCore();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeOfSetCore@TreeViewItemAutomationPeer@@QEAAHXZ
    int GetSizeOfSetCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseExpandCollapseAutomationEvent@TreeViewItemAutomationPeer@@QEAAXW4ExpandCollapseState@Automation@Xaml@UI@Windows@winrt@@@Z
    void RaiseExpandCollapseAutomationEvent(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectionContainer@TreeViewItemAutomationPeer@@QEAA?AUIRawElementProviderSimple@Provider@Automation@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque SelectionContainer();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentListView@TreeViewItemAutomationPeer@@AEAA?AUListView@Controls@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque GetParentListView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentTreeView@TreeViewItemAutomationPeer@@AEAA?AUTreeView@Controls@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque GetParentTreeView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTreeViewNode@TreeViewItemAutomationPeer@@AEAA?AUTreeViewNode@Controls@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque GetTreeViewNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSelection@TreeViewItemAutomationPeer@@AEAAX_N@Z
    void UpdateSelection(bool);
};
