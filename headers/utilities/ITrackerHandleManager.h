#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 5 member(s).
class ITrackerHandleManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteTrackerHandle@ITrackerHandleManager@@QEBAXPEAUTrackerHandle__@@@Z
    void DeleteTrackerHandle(TrackerHandle__*) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrackerValue@ITrackerHandleManager@@QEBA_NPEAUTrackerHandle__@@PEAPEAUIUnknown@@@Z
    bool GetTrackerValue(TrackerHandle__*, IUnknown * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsComposed@ITrackerHandleManager@@UEAA_NXZ
    virtual bool IsComposed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NewTrackerHandle@ITrackerHandleManager@@QEBAXAEAPEAUTrackerHandle__@@@Z
    void NewTrackerHandle(TrackerHandle__* &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTrackerValue@ITrackerHandleManager@@QEBAXPEAUTrackerHandle__@@PEAUIUnknown@@@Z
    void SetTrackerValue(TrackerHandle__*, IUnknown *) const;
};
