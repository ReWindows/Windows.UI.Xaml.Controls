#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 31 member(s).
class TreeViewList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainerFromNode@TreeViewList@@QEAA?AUDependencyObject@Xaml@UI@Windows@winrt@@AEBUTreeViewNode@Controls@3456@@Z
    WindissectOpaque ContainerFromNode(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DraggedTreeViewNode@TreeViewList@@QEAA?AUTreeViewNode@Controls@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque DraggedTreeViewNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlatIndex@TreeViewList@@QEBAHAEBUTreeViewNode@Controls@Xaml@UI@Windows@winrt@@@Z
    int FlatIndex(WindissectOpaque const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFlatIndexValid@TreeViewList@@QEBA_NH@Z
    bool IsFlatIndexValid(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMutiSelectWithSelectedItems@TreeViewList@@QEBA_NXZ
    bool IsMutiSelectWithSelectedItems() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSelected@TreeViewList@@QEBA_NAEBUTreeViewNode@Controls@Xaml@UI@Windows@winrt@@@Z
    bool IsSelected(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ListViewModel@TreeViewList@@QEBA?AU?$com_ptr@VViewModel@@@winrt@@XZ
    WindissectOpaque ListViewModel() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NodeFromContainer@TreeViewList@@QEAA?AUTreeViewNode@Controls@Xaml@UI@Windows@winrt@@AEBUDependencyObject@4567@@Z
    WindissectOpaque NodeFromContainer(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@TreeViewList@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContainerContentChanging@TreeViewList@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUContainerContentChangingEventArgs@Controls@Xaml@UI@45@@Z
    void OnContainerContentChanging(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDragEnter@TreeViewList@@QEAAXAEBUDragEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnDragEnter(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDragItemsCompleted@TreeViewList@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUDragItemsCompletedEventArgs@Controls@Xaml@UI@45@@Z
    void OnDragItemsCompleted(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDragItemsStarting@TreeViewList@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUDragItemsStartingEventArgs@Controls@Xaml@UI@45@@Z
    void OnDragItemsStarting(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDragLeave@TreeViewList@@QEAAXAEBUDragEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnDragLeave(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDragOver@TreeViewList@@QEAAXAEBUDragEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnDragOver(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDrop@TreeViewList@@QEAAXAEBUDragEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnDrop(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareContainerForItemOverride@TreeViewList@@QEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUIInspectable@Foundation@56@@Z
    void PrepareContainerForItemOverride(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveNodeFromParent@TreeViewList@@QEAAIAEBUTreeViewNode@Controls@Xaml@UI@Windows@winrt@@@Z
    unsigned int RemoveNodeFromParent(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDraggedOverItem@TreeViewList@@QEAAXUTreeViewItem@Controls@Xaml@UI@Windows@winrt@@@Z
    void SetDraggedOverItem(WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TreeViewList@@QEAA@XZ
    TreeViewList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDropTargetDropEffect@TreeViewList@@QEAAX_N0UTreeViewItem@Controls@Xaml@UI@Windows@winrt@@@Z
    void UpdateDropTargetDropEffect(bool, bool, WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TreeViewList@@UEAA@XZ
    virtual ~TreeViewList();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildEffectString@TreeViewList@@AEAA?AUhstring@winrt@@U23@000@Z
    WindissectOpaque BuildEffectString(WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationName@TreeViewList@@AEAA?AUhstring@winrt@@H@Z
    WindissectOpaque GetAutomationName(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootOfSelection@TreeViewList@@AEBA?AUTreeViewNode@Controls@Xaml@UI@Windows@winrt@@AEBU234567@@Z
    WindissectOpaque GetRootOfSelection(WindissectOpaque const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIndexValid@TreeViewList@@AEAA_NH@Z
    bool IsIndexValid(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NodeAtFlatIndex@TreeViewList@@AEBA?AUTreeViewNode@Controls@Xaml@UI@Windows@winrt@@H@Z
    WindissectOpaque NodeAtFlatIndex(int) const;
};
