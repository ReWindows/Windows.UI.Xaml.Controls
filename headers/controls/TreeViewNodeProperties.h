#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 6 member(s).
class TreeViewNodeProperties {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearProperties@TreeViewNodeProperties@@SAXXZ
    static void ClearProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Content@TreeViewNodeProperties@@QEAA?AUIInspectable@Foundation@Windows@winrt@@XZ
    WindissectOpaque Content();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Content@TreeViewNodeProperties@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@@Z
    void Content(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@TreeViewNodeProperties@@SAXXZ
    static void EnsureProperties();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExpanded@TreeViewNodeProperties@@QEAAX_N@Z
    void IsExpanded(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@TreeViewNodeProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
};
