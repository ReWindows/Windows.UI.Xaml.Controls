#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 20 member(s).
class TreeViewNodeVector {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendCore@TreeViewNodeVector@@QEAAXAEBUTreeViewNode@Controls@Xaml@UI@Windows@winrt@@@Z
    void AppendCore(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearCore@TreeViewNodeVector@@QEAAXXZ
    void ClearCore();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetView@TreeViewNodeVector@@QEAA?AU?$IVectorView@UTreeViewNode@Controls@Xaml@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@XZ
    WindissectOpaque GetView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOf@TreeViewNodeVector@@QEAA_NAEBUTreeViewNode@Controls@Xaml@UI@Windows@winrt@@AEAI@Z
    bool IndexOf(WindissectOpaque const &, unsigned int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAtCore@TreeViewNodeVector@@QEAAXIAEBUTreeViewNode@Controls@Xaml@UI@Windows@winrt@@@Z
    void InsertAtCore(unsigned int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAtCore@TreeViewNodeVector@@QEAAXI@Z
    void RemoveAtCore(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAtEndCore@TreeViewNodeVector@@QEAAXXZ
    void RemoveAtEndCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceAllCore@TreeViewNodeVector@@QEAAXU?$array_view@$$CBUTreeViewNode@Controls@Xaml@UI@Windows@winrt@@@winrt@@@Z
    void ReplaceAllCore(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAtCore@TreeViewNodeVector@@QEAAXIAEBUTreeViewNode@Controls@Xaml@UI@Windows@winrt@@@Z
    void SetAtCore(unsigned int, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParent@TreeViewNodeVector@@QEAAXUTreeViewNode@Controls@Xaml@UI@Windows@winrt@@@Z
    void SetParent(WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TreeViewNodeVector@@QEAA@XZ
    TreeViewNodeVector();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TreeViewNodeVector@@UEAA@XZ
    virtual ~TreeViewNodeVector();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExternalTrackerHandleManager@TreeViewNodeVector@@MEAAPEAUITrackerHandleManager@@XZ
    virtual ITrackerHandleManager * GetExternalTrackerHandleManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVectorEventSender@TreeViewNodeVector@@MEAA?AUIInspectable@Foundation@Windows@winrt@@XZ
    virtual WindissectOpaque GetVectorEventSender();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVectorEventSource@TreeViewNodeVector@@MEAAPEAV?$event_source@U?$VectorChangedEventHandler@UTreeViewNode@Controls@Xaml@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@@XZ
    virtual WindissectOpaque * GetVectorEventSource();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsParentInContentMode@TreeViewNodeVector@@AEAA_NXZ
    bool IsParentInContentMode();
};
