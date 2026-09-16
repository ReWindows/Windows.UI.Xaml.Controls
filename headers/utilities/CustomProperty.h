#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 5 member(s).
class CustomProperty {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndexedValue@CustomProperty@@QEAA?AUIInspectable@Foundation@Windows@winrt@@AEBU2345@0@Z
    WindissectOpaque GetIndexedValue(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIndexedValue@CustomProperty@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@00@Z
    void SetIndexedValue(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CustomProperty@@UEAA@XZ
    virtual ~CustomProperty();
};
