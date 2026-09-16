#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 2 member(s).
class IndexRange {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Contains@IndexRange@@QEBA_NH@Z
    bool Contains(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Split@IndexRange@@QEAA_NHAEAU1@0@Z
    bool Split(int, IndexRange &, IndexRange &);
};
