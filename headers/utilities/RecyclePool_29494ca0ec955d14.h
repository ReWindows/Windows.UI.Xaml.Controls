#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 11 member(s).
class RecyclePool {
public:
    class ElementInfo;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@RecyclePool@@SAXXZ
    static void EnsureProperties();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPoolInstance@RecyclePool@@SA?AU1Controls@Xaml@UI@Windows@winrt@@AEBUDataTemplate@3456@@Z
    static WindissectOpaque GetPoolInstance(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutElementCore@RecyclePool@@QEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@AEBUhstring@6@0@Z
    void PutElementCore(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetReuseKey@RecyclePool@@SAXAEBUUIElement@Xaml@UI@Windows@winrt@@AEBUhstring@6@@Z
    static void SetReuseKey(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetElementCore@RecyclePool@@QEAA?AUUIElement@Xaml@UI@Windows@winrt@@AEBUhstring@6@AEBU23456@@Z
    WindissectOpaque TryGetElementCore(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RecyclePool@@UEAA@XZ
    virtual ~RecyclePool();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureOwnerIsPanelOrNull@RecyclePool@@AEAA?AUPanel@Controls@Xaml@UI@Windows@winrt@@AEBUUIElement@4567@@Z
    WindissectOpaque EnsureOwnerIsPanelOrNull(WindissectOpaque const &);
};
