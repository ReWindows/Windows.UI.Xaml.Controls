#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 9 member(s).
class ScrollerChangeOffsetsOptions {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HorizontalOffset@ScrollerChangeOffsetsOptions@@QEAAXN@Z
    void HorizontalOffset(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OffsetsKind@ScrollerChangeOffsetsOptions@@QEAAXAEBW4ScrollerViewKind@Controls@Xaml@UI@Windows@winrt@@@Z
    void OffsetsKind(int const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ScrollerChangeOffsetsOptions@@QEAA@NNAEBW4ScrollerViewKind@Controls@Xaml@UI@Windows@winrt@@AEBW4ScrollerViewChangeKind@23456@AEBW4ScrollerViewChangeSnapPointRespect@23456@@Z
    ScrollerChangeOffsetsOptions(double, double, int const &, int const &, int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SnapPointRespect@ScrollerChangeOffsetsOptions@@QEAAXAEBW4ScrollerViewChangeSnapPointRespect@Controls@Xaml@UI@Windows@winrt@@@Z
    void SnapPointRespect(int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerticalOffset@ScrollerChangeOffsetsOptions@@QEAAXN@Z
    void VerticalOffset(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewChangeKind@ScrollerChangeOffsetsOptions@@QEAAXAEBW4ScrollerViewChangeKind@Controls@Xaml@UI@Windows@winrt@@@Z
    void ViewChangeKind(int const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ScrollerChangeOffsetsOptions@@UEAA@XZ
    virtual ~ScrollerChangeOffsetsOptions();
};
