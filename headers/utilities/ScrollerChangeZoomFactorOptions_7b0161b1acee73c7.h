#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 9 member(s).
class ScrollerChangeZoomFactorOptions {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CenterPoint@ScrollerChangeZoomFactorOptions@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@winrt@@@Z
    void CenterPoint(WindissectOpaque &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ScrollerChangeZoomFactorOptions@@QEAA@MAEBW4ScrollerViewKind@Controls@Xaml@UI@Windows@winrt@@AEBUfloat2@Numerics@Foundation@56@AEBW4ScrollerViewChangeKind@23456@AEBW4ScrollerViewChangeSnapPointRespect@23456@@Z
    ScrollerChangeZoomFactorOptions(float, int const &, WindissectOpaque &, int const &, int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SnapPointRespect@ScrollerChangeZoomFactorOptions@@QEAAXAEBW4ScrollerViewChangeSnapPointRespect@Controls@Xaml@UI@Windows@winrt@@@Z
    void SnapPointRespect(int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewChangeKind@ScrollerChangeZoomFactorOptions@@QEAAXAEBW4ScrollerViewChangeKind@Controls@Xaml@UI@Windows@winrt@@@Z
    void ViewChangeKind(int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ZoomFactor@ScrollerChangeZoomFactorOptions@@QEAAXM@Z
    void ZoomFactor(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ZoomFactorKind@ScrollerChangeZoomFactorOptions@@QEAAXAEBW4ScrollerViewKind@Controls@Xaml@UI@Windows@winrt@@@Z
    void ZoomFactorKind(int const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ScrollerChangeZoomFactorOptions@@UEAA@XZ
    virtual ~ScrollerChangeZoomFactorOptions();
};
