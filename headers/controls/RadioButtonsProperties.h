#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 11 member(s).
class RadioButtonsProperties {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@RadioButtonsProperties@@SAXXZ
    static void EnsureProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Items@RadioButtonsProperties@@QEAA?AU?$IVector@UIInspectable@Foundation@Windows@winrt@@@Collections@Foundation@Windows@winrt@@XZ
    WindissectOpaque Items();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemsSource@RadioButtonsProperties@@QEAA?AUIInspectable@Foundation@Windows@winrt@@XZ
    WindissectOpaque ItemsSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MaximumColumns@RadioButtonsProperties@@QEAAHXZ
    int MaximumColumns();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MaximumColumns@RadioButtonsProperties@@QEAAXH@Z
    void MaximumColumns(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@RadioButtonsProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectedIndex@RadioButtonsProperties@@QEAAHXZ
    int SelectedIndex();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectedIndex@RadioButtonsProperties@@QEAAXH@Z
    void SelectedIndex(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectedItem@RadioButtonsProperties@@QEAA?AUIInspectable@Foundation@Windows@winrt@@XZ
    WindissectOpaque SelectedItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectedItem@RadioButtonsProperties@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@@Z
    void SelectedItem(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RadioButtonsProperties@@QEAA@XZ
    ~RadioButtonsProperties();
};
