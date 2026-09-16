#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 18 member(s).
class ScrollerAutomationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Scroll@ScrollerAutomationPeer@@QEAAXAEBW4ScrollAmount@Automation@Xaml@UI@Windows@winrt@@0@Z
    void Scroll(int const &, int const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ScrollerAutomationPeer@@QEAA@AEBUScroller@Primitives@Controls@Xaml@UI@Windows@winrt@@@Z
    ScrollerAutomationPeer(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScrollPercent@ScrollerAutomationPeer@@QEAAXNN@Z
    void SetScrollPercent(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScrollPatternProperties@ScrollerAutomationPeer@@QEAAXXZ
    void UpdateScrollPatternProperties();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ScrollerAutomationPeer@@UEAA@XZ
    virtual ~ScrollerAutomationPeer();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScrollPercent@ScrollerAutomationPeer@@CANNNN@Z
    static double GetScrollPercent(double, double, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScroller@ScrollerAutomationPeer@@AEAA?AUScroller@Primitives@Controls@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque GetScroller();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewPercent@ScrollerAutomationPeer@@CANNN@Z
    static double GetViewPercent(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalScrollPercentImpl@ScrollerAutomationPeer@@AEAANXZ
    double get_HorizontalScrollPercentImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalViewSizeImpl@ScrollerAutomationPeer@@AEAANXZ
    double get_HorizontalViewSizeImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontallyScrollableImpl@ScrollerAutomationPeer@@AEAA_NXZ
    bool get_HorizontallyScrollableImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticalScrollPercentImpl@ScrollerAutomationPeer@@AEAANXZ
    double get_VerticalScrollPercentImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticalViewSizeImpl@ScrollerAutomationPeer@@AEAANXZ
    double get_VerticalViewSizeImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticallyScrollableImpl@ScrollerAutomationPeer@@AEAA_NXZ
    bool get_VerticallyScrollableImpl();
};
