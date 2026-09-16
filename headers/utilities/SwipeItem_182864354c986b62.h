#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 12 member(s).
class SwipeItem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateControl@SwipeItem@@QEAAXAEBUAppBarButton@Controls@Xaml@UI@Windows@winrt@@UStyle@4567@@Z
    void GenerateControl(WindissectOpaque const &, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeSwipe@SwipeItem@@QEAAXAEBUSwipeControl@Controls@Xaml@UI@Windows@winrt@@@Z
    void InvokeSwipe(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@SwipeItem@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SwipeItem@@QEAA@XZ
    SwipeItem();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SwipeItem@@UEAA@XZ
    virtual ~SwipeItem();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachEventHandlers@SwipeItem@@AEAAXAEBUAppBarButton@Controls@Xaml@UI@Windows@winrt@@@Z
    void AttachEventHandlers(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommandChanged@SwipeItem@@AEAAXUICommand@Input@Xaml@UI@Windows@winrt@@0@Z
    void OnCommandChanged(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemTapped@SwipeItem@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUTappedRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnItemTapped(WindissectOpaque const &, WindissectOpaque const &);
};
