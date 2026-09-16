#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 17 member(s).
class RadioButtons {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@RadioButtons@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@RadioButtons@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RadioButtons@@QEAA@XZ
    RadioButtons();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RadioButtons@@UEAA@XZ
    virtual ~RadioButtons();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveSelection@RadioButtons@@AEAA_NH@Z
    bool MoveSelection(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListViewKeyDown@RadioButtons@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUKeyRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnListViewKeyDown(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListViewKeyUp@RadioButtons@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUKeyRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnListViewKeyUp(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListViewLoaded@RadioButtons@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnListViewLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListViewSelectionChanged@RadioButtons@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUSelectionChangedEventArgs@Controls@Xaml@UI@45@@Z
    void OnListViewSelectionChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateItemsSource@RadioButtons@@AEAAXXZ
    void UpdateItemsSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMaximumColumns@RadioButtons@@AEAAXXZ
    void UpdateMaximumColumns();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSelectedIndex@RadioButtons@@AEAAXXZ
    void UpdateSelectedIndex();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSelectedItem@RadioButtons@@AEAAXXZ
    void UpdateSelectedItem();
};
