#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 5 member(s).
class ScrollControllerOffsetChangeRequestedEventArgs {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ScrollControllerOffsetChangeRequestedEventArgs@@QEAA@NAEBW4ScrollerViewKind@Controls@Xaml@UI@Windows@winrt@@AEBW4ScrollerViewChangeKind@23456@@Z
    ScrollControllerOffsetChangeRequestedEventArgs(double, int const &, int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewChangeId@ScrollControllerOffsetChangeRequestedEventArgs@@QEAAXH@Z
    void ViewChangeId(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ScrollControllerOffsetChangeRequestedEventArgs@@UEAA@XZ
    virtual ~ScrollControllerOffsetChangeRequestedEventArgs();
};
