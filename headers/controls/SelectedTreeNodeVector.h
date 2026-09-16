#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 16 member(s).
class SelectedTreeNodeVector {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@SelectedTreeNodeVector@@QEAAXAEBUTreeViewNode@Controls@Xaml@UI@Windows@winrt@@@Z
    void Append(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@SelectedTreeNodeVector@@QEAAXXZ
    void Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetView@SelectedTreeNodeVector@@QEAA?AU?$IVectorView@UTreeViewNode@Controls@Xaml@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@XZ
    WindissectOpaque GetView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOf@SelectedTreeNodeVector@@QEAA_NAEBUTreeViewNode@Controls@Xaml@UI@Windows@winrt@@AEAI@Z
    bool IndexOf(WindissectOpaque const &, unsigned int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAt@SelectedTreeNodeVector@@QEAAXIAEBUTreeViewNode@Controls@Xaml@UI@Windows@winrt@@@Z
    void InsertAt(unsigned int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@SelectedTreeNodeVector@@QEAAXI@Z
    void RemoveAt(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAtEnd@SelectedTreeNodeVector@@QEAAXXZ
    void RemoveAtEnd();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SelectedTreeNodeVector@@UEAA@XZ
    virtual ~SelectedTreeNodeVector();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExternalTrackerHandleManager@SelectedTreeNodeVector@@MEAAPEAUITrackerHandleManager@@XZ
    virtual ITrackerHandleManager * GetExternalTrackerHandleManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVectorEventSender@SelectedTreeNodeVector@@MEAA?AUIInspectable@Foundation@Windows@winrt@@XZ
    virtual WindissectOpaque GetVectorEventSender();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVectorEventSource@SelectedTreeNodeVector@@MEAAPEAV?$event_source@U?$VectorChangedEventHandler@UTreeViewNode@Controls@Xaml@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@@XZ
    virtual WindissectOpaque * GetVectorEventSource();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSelection@SelectedTreeNodeVector@@AEAAXAEBUTreeViewNode@Controls@Xaml@UI@Windows@winrt@@W4TreeNodeSelectionState@2@@Z
    void UpdateSelection(WindissectOpaque const &, int);
};
