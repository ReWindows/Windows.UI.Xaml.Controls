#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 7 member(s).
class ScrollerAnchorRequestedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnchorElement@ScrollerAnchorRequestedEventArgs@@QEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    void AnchorElement(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ScrollerAnchorRequestedEventArgs@@QEAA@AEBUScroller@Primitives@Controls@Xaml@UI@Windows@winrt@@@Z
    ScrollerAnchorRequestedEventArgs(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ScrollerAnchorRequestedEventArgs@@UEAA@XZ
    virtual ~ScrollerAnchorRequestedEventArgs();
};
