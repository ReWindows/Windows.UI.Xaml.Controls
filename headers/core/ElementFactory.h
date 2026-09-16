#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 8 member(s).
class ElementFactory {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ElementFactory@@QEAA@XZ
    ElementFactory();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementCore@ElementFactory@@UEAA?AUUIElement@Xaml@UI@Windows@winrt@@AEBUElementFactoryGetArgs@3456@@Z
    virtual WindissectOpaque GetElementCore(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NonDelegatingAddRef@ElementFactory@@UEAAKXZ
    virtual unsigned long NonDelegatingAddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NonDelegatingQueryInterface@ElementFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long NonDelegatingQueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NonDelegatingRelease@ElementFactory@@UEAAKXZ
    virtual unsigned long NonDelegatingRelease();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecycleElementCore@ElementFactory@@UEAAXAEBUElementFactoryRecycleArgs@Xaml@UI@Windows@winrt@@@Z
    virtual void RecycleElementCore(WindissectOpaque const &);
};
