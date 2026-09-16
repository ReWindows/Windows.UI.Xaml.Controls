#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 9 member(s).
class RecyclingElementFactory {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementCore@RecyclingElementFactory@@UEAA?AUUIElement@Xaml@UI@Windows@winrt@@AEBUElementFactoryGetArgs@3456@@Z
    virtual WindissectOpaque GetElementCore(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectTemplateKeyCore@RecyclingElementFactory@@QEAA?AUhstring@winrt@@AEBUIInspectable@Foundation@Windows@3@AEBUUIElement@Xaml@UI@63@@Z
    WindissectOpaque OnSelectTemplateKeyCore(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecycleElementCore@RecyclingElementFactory@@UEAAXAEBUElementFactoryRecycleArgs@Xaml@UI@Windows@winrt@@@Z
    virtual void RecycleElementCore(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RecyclingElementFactory@@QEAA@XZ
    RecyclingElementFactory();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RecyclingElementFactory@@UEAA@XZ
    virtual ~RecyclingElementFactory();
};
