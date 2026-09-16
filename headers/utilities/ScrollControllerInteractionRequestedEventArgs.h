#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 5 member(s).
class ScrollControllerInteractionRequestedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Handled@ScrollControllerInteractionRequestedEventArgs@@QEAAX_N@Z
    void Handled(bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ScrollControllerInteractionRequestedEventArgs@@QEAA@AEBUPointerPoint@Input@UI@Windows@winrt@@@Z
    ScrollControllerInteractionRequestedEventArgs(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ScrollControllerInteractionRequestedEventArgs@@UEAA@XZ
    virtual ~ScrollControllerInteractionRequestedEventArgs();
};
