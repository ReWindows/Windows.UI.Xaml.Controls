#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 6 member(s).
class SwipeTestHooks {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureGlobalTestHooks@SwipeTestHooks@@SA?AU?$com_ptr@VSwipeTestHooks@@@winrt@@XZ
    static WindissectOpaque EnsureGlobalTestHooks();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlobalTestHooks@SwipeTestHooks@@SA?AU?$com_ptr@VSwipeTestHooks@@@winrt@@XZ
    static WindissectOpaque GetGlobalTestHooks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyIdleStatusChanged@SwipeTestHooks@@SAXAEBUSwipeControl@Controls@Xaml@UI@Windows@winrt@@@Z
    static void NotifyIdleStatusChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyLastInteractedWithSwipeControlChanged@SwipeTestHooks@@SAXXZ
    static void NotifyLastInteractedWithSwipeControlChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOpenedStatusChanged@SwipeTestHooks@@SAXAEBUSwipeControl@Controls@Xaml@UI@Windows@winrt@@@Z
    static void NotifyOpenedStatusChanged(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SwipeTestHooks@@UEAA@XZ
    virtual ~SwipeTestHooks();
};
