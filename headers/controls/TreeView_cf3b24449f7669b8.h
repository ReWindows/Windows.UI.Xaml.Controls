#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 23 member(s).
class TreeView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainerFromNode@TreeView@@QEAA?AUDependencyObject@Xaml@UI@Windows@winrt@@AEBUTreeViewNode@Controls@3456@@Z
    WindissectOpaque ContainerFromNode(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ListControl@TreeView@@QEAAPEAVTreeViewList@@XZ
    TreeViewList * ListControl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NodeFromContainer@TreeView@@QEAA?AUTreeViewNode@Controls@Xaml@UI@Windows@winrt@@AEBUDependencyObject@4567@@Z
    WindissectOpaque NodeFromContainer(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@TreeView@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContainerContentChanging@TreeView@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUContainerContentChangingEventArgs@Controls@Xaml@UI@45@@Z
    void OnContainerContentChanging(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemClick@TreeView@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUItemClickEventArgs@Controls@Xaml@UI@45@@Z
    void OnItemClick(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListControlDragItemsCompleted@TreeView@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUDragItemsCompletedEventArgs@Controls@Xaml@UI@45@@Z
    void OnListControlDragItemsCompleted(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListControlDragItemsStarting@TreeView@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUDragItemsStartingEventArgs@Controls@Xaml@UI@45@@Z
    void OnListControlDragItemsStarting(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNodeCollapsed@TreeView@@QEAAXAEBUTreeViewNode@Controls@Xaml@UI@Windows@winrt@@AEBUIInspectable@Foundation@67@@Z
    void OnNodeCollapsed(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNodeExpanding@TreeView@@QEAAXAEBUTreeViewNode@Controls@Xaml@UI@Windows@winrt@@AEBUIInspectable@Foundation@67@@Z
    void OnNodeExpanding(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@TreeView@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RootNodes@TreeView@@QEAA?AU?$IVector@UTreeViewNode@Controls@Xaml@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@XZ
    WindissectOpaque RootNodes();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TreeView@@QEAA@XZ
    TreeView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateItemsSelectionMode@TreeView@@QEAAX_N@Z
    void UpdateItemsSelectionMode(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TreeView@@UEAA@XZ
    virtual ~TreeView();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsAdded@TreeView@@AEAAXHH@Z
    void OnItemsAdded(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsRemoved@TreeView@@AEAAXHH@Z
    void OnItemsRemoved(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsSourceChanged@TreeView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUNotifyCollectionChangedEventArgs@Interop@Xaml@UI@45@@Z
    void OnItemsSourceChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncRootNodesWithItemsSource@TreeView@@AEAAXXZ
    void SyncRootNodesWithItemsSource();
};
