#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 17 member(s).
class InspectingDataSource {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAtCore@InspectingDataSource@@UEAA?AUIInspectable@Foundation@Windows@winrt@@H@Z
    virtual WindissectOpaque GetAtCore(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeCore@InspectingDataSource@@UEAAHXZ
    virtual int GetSizeCore();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasKeyIndexMappingCore@InspectingDataSource@@UEAA_NXZ
    virtual bool HasKeyIndexMappingCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexFromKeyCore@InspectingDataSource@@UEAAHAEBUhstring@winrt@@@Z
    virtual int IndexFromKeyCore(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InspectingDataSource@@QEAA@AEBUIInspectable@Foundation@Windows@winrt@@@Z
    InspectingDataSource(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?KeyFromIndexCore@InspectingDataSource@@UEAA?AUhstring@winrt@@H@Z
    virtual WindissectOpaque KeyFromIndexCore(int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InspectingDataSource@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InspectingDataSource@@UEAA@XZ
    virtual ~InspectingDataSource();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ListenToCollectionChanges@InspectingDataSource@@AEAAXXZ
    void ListenToCollectionChanges();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCollectionChanged@InspectingDataSource@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUNotifyCollectionChangedEventArgs@Interop@Xaml@UI@45@@Z
    void OnCollectionChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVectorChanged@InspectingDataSource@@AEAAXAEBU?$IObservableVector@UIInspectable@Foundation@Windows@winrt@@@Collections@Foundation@Windows@winrt@@AEBUIVectorChangedEventArgs@3456@@Z
    void OnVectorChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnListenToCollectionChanges@InspectingDataSource@@AEAAXXZ
    void UnListenToCollectionChanges();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WrapIterable@InspectingDataSource@@AEAA?AU?$IVector@UIInspectable@Foundation@Windows@winrt@@@Collections@Foundation@Windows@winrt@@AEBU?$IIterable@UIInspectable@Foundation@Windows@winrt@@@3456@@Z
    WindissectOpaque WrapIterable(WindissectOpaque const &);
};
