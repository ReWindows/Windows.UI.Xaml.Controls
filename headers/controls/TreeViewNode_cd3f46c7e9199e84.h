#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 18 member(s).
class TreeViewNode {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChildVectorChanged@TreeViewNode@@QEAAXAEBU?$IObservableVector@UTreeViewNode@Controls@Xaml@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@AEBUIInspectable@456@@Z
    void ChildVectorChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Children@TreeViewNode@@QEAA?AU?$IVector@UTreeViewNode@Controls@Xaml@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@XZ
    WindissectOpaque Children();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemsSource@TreeViewNode@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@@Z
    void ItemsSource(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TreeViewNode@@QEAA@XZ
    TreeViewNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Type@TreeViewNode@@QEAA?AUTypeName@Interop@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque Type();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDepth@TreeViewNode@@QEAAXH@Z
    void UpdateDepth(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHasChildren@TreeViewNode@@QEAAXXZ
    void UpdateHasChildren();
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ParentImpl@TreeViewNode@@QEAAXAEBU1Controls@Xaml@UI@Windows@winrt@@@Z
    void put_ParentImpl(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TreeViewNode@@UEAA@XZ
    virtual ~TreeViewNode();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentAsString@TreeViewNode@@AEAA?AUhstring@winrt@@XZ
    WindissectOpaque GetContentAsString();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsAdded@TreeViewNode@@AEAAXHH@Z
    void OnItemsAdded(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsRemoved@TreeViewNode@@AEAAXHH@Z
    void OnItemsRemoved(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsSourceChanged@TreeViewNode@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUNotifyCollectionChangedEventArgs@Interop@Xaml@UI@45@@Z
    void OnItemsSourceChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncChildrenNodesWithItemsSource@TreeViewNode@@AEAAXXZ
    void SyncChildrenNodesWithItemsSource();
};
