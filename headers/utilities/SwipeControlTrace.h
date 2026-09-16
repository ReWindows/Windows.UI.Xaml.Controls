#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 2 member(s).
class SwipeControlTrace {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceInfo@SwipeControlTrace@@SAX_NAEBUIInspectable@Foundation@Windows@winrt@@PEB_WZZ
    static void TraceInfo(bool, WindissectOpaque const &, wchar_t const *, ...);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceVerbose@SwipeControlTrace@@SAX_NAEBUIInspectable@Foundation@Windows@winrt@@PEB_WZZ
    static void TraceVerbose(bool, WindissectOpaque const &, wchar_t const *, ...);
};
