#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 8 member(s).
class RefreshRequestedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecrementDeferralCount@RefreshRequestedEventArgs@@QEAAXXZ
    void DecrementDeferralCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeferral@RefreshRequestedEventArgs@@QEAA?AUDeferral@Foundation@Windows@winrt@@XZ
    WindissectOpaque GetDeferral();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RefreshRequestedEventArgs@@QEAA@AEBUDeferral@Foundation@Windows@winrt@@@Z
    RefreshRequestedEventArgs(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RefreshRequestedEventArgs@@UEAA@XZ
    virtual ~RefreshRequestedEventArgs();
};
