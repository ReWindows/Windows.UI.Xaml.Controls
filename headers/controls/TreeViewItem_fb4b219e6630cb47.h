#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 36 member(s).
class TreeViewItem {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSelectedInternal@TreeViewItem@@QEAA_NXZ
    bool IsSelectedInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@TreeViewItem@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDragEnter@TreeViewItem@@QEAAXAEBUDragEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnDragEnter(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDragLeave@TreeViewItem@@QEAAXAEBUDragEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnDragLeave(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDragOver@TreeViewItem@@QEAAXAEBUDragEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnDragOver(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDrop@TreeViewItem@@QEAAXAEBUDragEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnDrop(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@TreeViewItem@@QEAAXAEBUKeyRoutedEventArgs@Input@Xaml@UI@Windows@winrt@@@Z
    void OnKeyDown(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@TreeViewItem@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TreeViewItem@@QEAA@XZ
    TreeViewItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIndentation@TreeViewItem@@QEAAXH@Z
    void UpdateIndentation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMultipleSelection@TreeViewItem@@QEAAXAEBW4TreeNodeSelectionState@TreeViewNode@@@Z
    void UpdateMultipleSelection(int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSelection@TreeViewItem@@QEAAXAEBW4TreeNodeSelectionState@TreeViewNode@@@Z
    void UpdateSelection(int const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TreeViewItem@@UEAA@XZ
    virtual ~TreeViewItem();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AncestorTreeView@TreeViewItem@@AEAA?AU?$com_ptr@VTreeView@@@winrt@@XZ
    WindissectOpaque AncestorTreeView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckBoxSelectionState@TreeViewItem@@AEAA?AW4TreeNodeSelectionState@TreeViewNode@@AEBUCheckBox@Controls@Xaml@UI@Windows@winrt@@@Z
    int CheckBoxSelectionState(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleExpandCollapse@TreeViewItem@@AEAA_NW4VirtualKey@System@Windows@winrt@@@Z
    bool HandleExpandCollapse(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleReorder@TreeViewItem@@AEAAXW4VirtualKey@System@Windows@winrt@@@Z
    void HandleReorder(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExpandCollapse@TreeViewItem@@AEAA_NW4VirtualKey@System@Windows@winrt@@@Z
    bool IsExpandCollapse(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInReorderMode@TreeViewItem@@AEAA_NW4VirtualKey@System@Windows@winrt@@@Z
    bool IsInReorderMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCheckToggle@TreeViewItem@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnCheckToggle(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExpandCollapseChevronPointerPressed@TreeViewItem@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUPointerRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnExpandCollapseChevronPointerPressed(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExpandContentTimerTick@TreeViewItem@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnExpandContentTimerTick(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsSelectedChanged@TreeViewItem@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnIsSelectedChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseExpandCollapseAutomationEvent@TreeViewItem@@AEAAX_N@Z
    void RaiseExpandCollapseAutomationEvent(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseSelectionChangeEvents@TreeViewItem@@AEAAX_N@Z
    void RaiseSelectionChangeEvents(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecycleEvents@TreeViewItem@@AEAAX_N@Z
    void RecycleEvents(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReorderItems@TreeViewItem@@AEAAXAEBUListView@Controls@Xaml@UI@Windows@winrt@@AEBUTreeViewNode@34567@HH_N@Z
    void ReorderItems(WindissectOpaque const &, WindissectOpaque const &, int, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToggleSelection@TreeViewItem@@AEAA_NXZ
    bool ToggleSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TreeNode@TreeViewItem@@AEAA?AUTreeViewNode@Controls@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque TreeNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateNodeIsExpandedAsync@TreeViewItem@@AEAAXAEBUTreeViewNode@Controls@Xaml@UI@Windows@winrt@@_N@Z
    void UpdateNodeIsExpandedAsync(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTreeViewItemVisualState@TreeViewItem@@AEAAXAEBW4TreeNodeSelectionState@TreeViewNode@@@Z
    void UpdateTreeViewItemVisualState(int const &);
};
