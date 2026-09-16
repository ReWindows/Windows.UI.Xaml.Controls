#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 7 member(s).
class VirtualizationInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPin@VirtualizationInfo@@QEAAIXZ
    unsigned int AddPin();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DataTemplateComponent@VirtualizationInfo@@QEBA?AUIDataTemplateComponent@Markup@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque DataTemplateComponent() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePin@VirtualizationInfo@@QEAAIXZ
    unsigned int RemovePin();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePhasingInfo@VirtualizationInfo@@QEAAXHAEBUIInspectable@Foundation@Windows@winrt@@AEBUIDataTemplateComponent@Markup@Xaml@UI@45@@Z
    void UpdatePhasingInfo(int, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VirtualizationInfo@@UEAA@XZ
    virtual ~VirtualizationInfo();
};
