#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 6 member(s).
class IndexPath {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneWithChildIndex@IndexPath@@QEBA?AU1Controls@Xaml@UI@Windows@winrt@@H@Z
    WindissectOpaque CloneWithChildIndex(int) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0IndexPath@@QEAA@AEBU?$IVector@H@Collections@Foundation@Windows@winrt@@@Z
    IndexPath(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@IndexPath@@QEAA?AUhstring@winrt@@XZ
    WindissectOpaque ToString();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1IndexPath@@UEAA@XZ
    virtual ~IndexPath();
};
