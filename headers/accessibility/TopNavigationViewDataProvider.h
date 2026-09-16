#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 21 member(s).
class TopNavigationViewDataProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DefaultAttachedData@TopNavigationViewDataProvider@@UEAAMXZ
    virtual float DefaultAttachedData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DefaultVectorIDOnInsert@TopNavigationViewDataProvider@@UEAA?AW4NavigationViewSplitVectorID@@XZ
    virtual int DefaultVectorIDOnInsert();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@TopNavigationViewDataProvider@@UEAA?AUIInspectable@Foundation@Windows@winrt@@H@Z
    virtual WindissectOpaque GetAt(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOverflowItems@TopNavigationViewDataProvider@@QEAA?AU?$IVector@UIInspectable@Foundation@Windows@winrt@@@Collections@Foundation@Windows@winrt@@XZ
    WindissectOpaque GetOverflowItems();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimaryItems@TopNavigationViewDataProvider@@QEAA?AU?$IVector@UIInspectable@Foundation@Windows@winrt@@@Collections@Foundation@Windows@winrt@@XZ
    WindissectOpaque GetPrimaryItems();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimaryListSize@TopNavigationViewDataProvider@@QEAAHXZ
    int GetPrimaryListSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWidthForItem@TopNavigationViewDataProvider@@QEAAMH@Z
    float GetWidthForItem(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOf@TopNavigationViewDataProvider@@UEAAHAEBUIInspectable@Foundation@Windows@winrt@@@Z
    virtual int IndexOf(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidWidthCacheIfOverflowItemContentChanged@TopNavigationViewDataProvider@@QEAAXXZ
    void InvalidWidthCacheIfOverflowItemContentChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveAllItemsToPrimaryList@TopNavigationViewDataProvider@@QEAAXXZ
    void MoveAllItemsToPrimaryList();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDataSource@TopNavigationViewDataProvider@@QEAAXUIInspectable@Foundation@Windows@winrt@@@Z
    void SetDataSource(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldChangeDataSource@TopNavigationViewDataProvider@@QEAA_NAEBUIInspectable@Foundation@Windows@winrt@@@Z
    bool ShouldChangeDataSource(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Size@TopNavigationViewDataProvider@@UEAAHXZ
    virtual int Size();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TopNavigationViewDataProvider@@QEAA@AEBV0@@Z
    TopNavigationViewDataProvider(TopNavigationViewDataProvider const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TopNavigationViewDataProvider@@QEAA@PEBUITrackerHandleManager@@@Z
    TopNavigationViewDataProvider(ITrackerHandleManager const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWidthForPrimaryItem@TopNavigationViewDataProvider@@QEAAXHM@Z
    void UpdateWidthForPrimaryItem(int, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WidthRequiredToRecoveryAllItemsToPrimary@TopNavigationViewDataProvider@@QEAAMXZ
    float WidthRequiredToRecoveryAllItemsToPrimary();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TopNavigationViewDataProvider@@QEAA@XZ
    ~TopNavigationViewDataProvider();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDataSourceChanged@TopNavigationViewDataProvider@@IEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUNotifyCollectionChangedEventArgs@Interop@Xaml@UI@45@@Z
    void OnDataSourceChanged(WindissectOpaque const &, WindissectOpaque const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeDataSource@TopNavigationViewDataProvider@@AEAAXUItemsSourceView@Controls@Xaml@UI@Windows@winrt@@@Z
    void ChangeDataSource(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidWidth@TopNavigationViewDataProvider@@AEAA_NM@Z
    bool IsValidWidth(float);
};
