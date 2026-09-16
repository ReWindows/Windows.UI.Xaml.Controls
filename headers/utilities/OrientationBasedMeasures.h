#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 3 member(s).
class OrientationBasedMeasures {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MajorEnd@OrientationBasedMeasures@@QEBAMAEBURect@Foundation@Windows@winrt@@@Z
    float MajorEnd(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MinorMajorPoint@OrientationBasedMeasures@@QEAA?AUPoint@Foundation@Windows@winrt@@MM@Z
    WindissectOpaque MinorMajorPoint(float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MinorMajorRect@OrientationBasedMeasures@@QEAA?AURect@Foundation@Windows@winrt@@MMMM@Z
    WindissectOpaque MinorMajorRect(float, float, float, float);
};
