#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 23 member(s).
class ElementManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@ElementManager@@QEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@H@Z
    void Add(WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearRealizedRange@ElementManager@@QEAAXHH@Z
    void ClearRealizedRange(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearRealizedRange@ElementManager@@QEAAXXZ
    void ClearRealizedRange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DataSourceChanged@ElementManager@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUNotifyCollectionChangedEventArgs@Interop@Xaml@UI@45@@Z
    void DataSourceChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DiscardElementsOutsideWindow@ElementManager@@QEAAX_NH@Z
    void DiscardElementsOutsideWindow(bool, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@ElementManager@@QEAA?AUUIElement@Xaml@UI@Windows@winrt@@H@Z
    WindissectOpaque GetAt(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataIndexFromRealizedRangeIndex@ElementManager@@QEBAHH@Z
    int GetDataIndexFromRealizedRangeIndex(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutBoundsForDataIndex@ElementManager@@QEBA?AURect@Foundation@Windows@winrt@@H@Z
    WindissectOpaque GetLayoutBoundsForDataIndex(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealizedElement@ElementManager@@QEAA?AUUIElement@Xaml@UI@Windows@winrt@@H@Z
    WindissectOpaque GetRealizedElement(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealizedElementCount@ElementManager@@QEBAHXZ
    int GetRealizedElementCount() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@ElementManager@@QEAAXHHAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    void Insert(int, int, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDataIndexRealized@ElementManager@@QEBA_NH@Z
    bool IsDataIndexRealized(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIndexValidInData@ElementManager@@QEBA_NH@Z
    bool IsIndexValidInData(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowConnected@ElementManager@@QEBA_NAEBURect@Foundation@Windows@winrt@@AEBW4ScrollOrientation@@@Z
    bool IsWindowConnected(WindissectOpaque const &, int const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBeginMeasure@ElementManager@@QEAAXAEBW4ScrollOrientation@@@Z
    void OnBeginMeasure(int const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLayoutBoundsForDataIndex@ElementManager@@QEAAXHAEBURect@Foundation@Windows@winrt@@@Z
    void SetLayoutBoundsForDataIndex(int, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ElementManager@@QEAA@XZ
    ~ElementManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DiscardElementsOutsideWindow@ElementManager@@AEAAXAEBURect@Foundation@Windows@winrt@@AEBW4ScrollOrientation@@@Z
    void DiscardElementsOutsideWindow(WindissectOpaque const &, int const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealizedRangeIndexFromDataIndex@ElementManager@@AEBAHH@Z
    int GetRealizedRangeIndexFromDataIndex(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Intersects@ElementManager@@CA_NAEBURect@Foundation@Windows@winrt@@0AEBW4ScrollOrientation@@@Z
    static bool Intersects(WindissectOpaque const &, WindissectOpaque const &, int const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVirtualizingContext@ElementManager@@AEBA_NXZ
    bool IsVirtualizingContext() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsAdded@ElementManager@@AEAAXHH@Z
    void OnItemsAdded(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsRemoved@ElementManager@@AEAAXHH@Z
    void OnItemsRemoved(int, int);
};
