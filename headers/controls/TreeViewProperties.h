#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 9 member(s).
class TreeViewProperties {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanDragItems@TreeViewProperties@@QEAAX_N@Z
    void CanDragItems(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanReorderItems@TreeViewProperties@@QEAAX_N@Z
    void CanReorderItems(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanReorderItems@TreeViewProperties@@QEAA_NXZ
    bool CanReorderItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@TreeViewProperties@@SAXXZ
    static void EnsureProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemsSource@TreeViewProperties@@QEAA?AUIInspectable@Foundation@Windows@winrt@@XZ
    WindissectOpaque ItemsSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@TreeViewProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectionMode@TreeViewProperties@@QEAA?AW4TreeViewSelectionMode@Controls@Xaml@UI@Windows@winrt@@XZ
    int SelectionMode();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TreeViewProperties@@QEAA@XZ
    TreeViewProperties();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TreeViewProperties@@QEAA@XZ
    ~TreeViewProperties();
};
