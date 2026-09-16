#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 6 member(s).
namespace ChildrenInTabFocusOrderIterable {
class ChildrenInTabFocusOrderIterator {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ChildrenInTabFocusOrderIterator@ChildrenInTabFocusOrderIterable@@QEAA@AEBUItemsRepeater@Controls@Xaml@UI@Windows@winrt@@@Z
    ChildrenInTabFocusOrderIterator(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Current@ChildrenInTabFocusOrderIterator@ChildrenInTabFocusOrderIterable@@QEAA?AUDependencyObject@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque Current();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveNext@ChildrenInTabFocusOrderIterator@ChildrenInTabFocusOrderIterable@@QEAA_NXZ
    bool MoveNext();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ChildrenInTabFocusOrderIterator@ChildrenInTabFocusOrderIterable@@UEAA@XZ
    virtual ~ChildrenInTabFocusOrderIterator();
};
} // namespace ChildrenInTabFocusOrderIterable
