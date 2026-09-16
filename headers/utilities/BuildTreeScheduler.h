#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 3 member(s).
class BuildTreeScheduler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldYield@BuildTreeScheduler@@SA_NXZ
    static bool ShouldYield();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRendering@BuildTreeScheduler@@CAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    static void OnRendering(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueTick@BuildTreeScheduler@@CAXXZ
    static void QueueTick();
};
