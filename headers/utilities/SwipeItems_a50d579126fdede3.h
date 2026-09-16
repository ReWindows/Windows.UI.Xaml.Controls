#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 17 member(s).
class SwipeItems {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@SwipeItems@@QEAAXAEBUSwipeItem@Controls@Xaml@UI@Windows@winrt@@@Z
    void Append(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@SwipeItems@@QEAA?AU?$IIterator@USwipeItem@Controls@Xaml@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@XZ
    WindissectOpaque First();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@SwipeItems@@QEAA?AUSwipeItem@Controls@Xaml@UI@Windows@winrt@@I@Z
    WindissectOpaque GetAt(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMany@SwipeItems@@QEAAIIU?$array_view@USwipeItem@Controls@Xaml@UI@Windows@winrt@@@winrt@@@Z
    unsigned int GetMany(unsigned int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOf@SwipeItems@@QEAA_NAEBUSwipeItem@Controls@Xaml@UI@Windows@winrt@@AEAI@Z
    bool IndexOf(WindissectOpaque const &, unsigned int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAt@SwipeItems@@QEAAXIAEBUSwipeItem@Controls@Xaml@UI@Windows@winrt@@@Z
    void InsertAt(unsigned int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@SwipeItems@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@SwipeItems@@QEAAXI@Z
    void RemoveAt(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceAll@SwipeItems@@QEAAXU?$array_view@$$CBUSwipeItem@Controls@Xaml@UI@Windows@winrt@@@winrt@@@Z
    void ReplaceAll(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAt@SwipeItems@@QEAAXIAEBUSwipeItem@Controls@Xaml@UI@Windows@winrt@@@Z
    void SetAt(unsigned int, WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SwipeItems@@QEAA@XZ
    SwipeItems();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SwipeItems@@UEAA@XZ
    virtual ~SwipeItems();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Items@SwipeItems@@AEAAXAEBU?$IVector@USwipeItem@Controls@Xaml@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Z
    void put_Items(WindissectOpaque const &);
};
