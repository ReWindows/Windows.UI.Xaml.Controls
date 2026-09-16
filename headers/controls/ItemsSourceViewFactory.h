#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 3 member(s).
class ItemsSourceViewFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@ItemsSourceViewFactory@@QEBA?AUIInspectable@Foundation@Windows@winrt@@XZ
    WindissectOpaque ActivateInstance() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@ItemsSourceViewFactory@@QEAA?AUItemsSourceView@Controls@Xaml@UI@Windows@winrt@@AEBUIInspectable@Foundation@67@0AEAU8967@@Z
    WindissectOpaque CreateInstance(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ItemsSourceViewFactory@@UEBA?AUhstring@winrt@@XZ
    virtual WindissectOpaque GetRuntimeClassName() const;
};
