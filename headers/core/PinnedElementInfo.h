#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 3 member(s).
namespace ViewManager {
class PinnedElementInfo {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PinnedElementInfo@ViewManager@@QEAA@AEBU01@@Z
    PinnedElementInfo(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VirtualizationInfo@PinnedElementInfo@ViewManager@@QEBA?AU?$com_ptr@VVirtualizationInfo@@@winrt@@XZ
    WindissectOpaque VirtualizationInfo() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PinnedElementInfo@ViewManager@@QEAA@XZ
    ~PinnedElementInfo();
};
} // namespace ViewManager
