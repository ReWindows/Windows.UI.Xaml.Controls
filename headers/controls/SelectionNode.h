#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 22 member(s).
class SelectionNode {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToNullableBool@SelectionNode@@SA?AU?$IReference@_N@Foundation@Windows@winrt@@W4SelectionState@@@Z
    static WindissectOpaque ConvertToNullableBool(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DataCount@SelectionNode@@QEAAHXZ
    int DataCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateIsSelectedBasedOnChildrenNodes@SelectionNode@@QEAA?AW4SelectionState@@XZ
    int EvaluateIsSelectedBasedOnChildrenNodes();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSelected@SelectionNode@@QEAA_NH@Z
    bool IsSelected(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSelectedWithPartial@SelectionNode@@QEAA?AU?$IReference@_N@Foundation@Windows@winrt@@H@Z
    WindissectOpaque IsSelectedWithPartial(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSelectedWithPartial@SelectionNode@@QEAA?AU?$IReference@_N@Foundation@Windows@winrt@@XZ
    WindissectOpaque IsSelectedWithPartial();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemsSourceView@SelectionNode@@QEAA?AU0Controls@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque ItemsSourceView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectRange@SelectionNode@@QEAA_NAEBUIndexRange@@_N@Z
    bool SelectRange(IndexRange const &, bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SelectionNode@@QEAA@PEAVSelectionModel@@PEAV0@@Z
    SelectionNode(SelectionModel *, SelectionNode *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Source@SelectionNode@@QEAA?AUIInspectable@Foundation@Windows@winrt@@XZ
    WindissectOpaque Source();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Source@SelectionNode@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@@Z
    void Source(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SelectionNode@@QEAA@XZ
    ~SelectionNode();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRange@SelectionNode@@AEAAXAEBUIndexRange@@_N@Z
    void AddRange(IndexRange const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearSelection@SelectionNode@@AEAAXXZ
    void ClearSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookupCollectionChangedHandler@SelectionNode@@AEAAXXZ
    void HookupCollectionChangedHandler();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidIndex@SelectionNode@@AEAA_NH@Z
    bool IsValidIndex(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsAdded@SelectionNode@@AEAA_NHH@Z
    bool OnItemsAdded(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsRemoved@SelectionNode@@AEAA_NHH@Z
    bool OnItemsRemoved(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSourceListChanged@SelectionNode@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUNotifyCollectionChangedEventArgs@Interop@Xaml@UI@45@@Z
    void OnSourceListChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveRange@SelectionNode@@AEAAXAEBUIndexRange@@_N@Z
    void RemoveRange(IndexRange const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Select@SelectionNode@@AEAA_NH_N0@Z
    bool Select(int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhookCollectionChangedHandler@SelectionNode@@AEAAXXZ
    void UnhookCollectionChangedHandler();
};
