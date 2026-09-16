#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 18 member(s).
class ScrollAnchorProvider {
public:
    class BringIntoViewState;
    class CandidateInfo;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@ScrollAnchorProvider@@QEAA?AUSize@Foundation@Windows@winrt@@AEBU2345@@Z
    WindissectOpaque ArrangeOverride(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRelativeViewport@ScrollAnchorProvider@@QEAA?AURect@Foundation@Windows@winrt@@AEBUUIElement@Xaml@UI@45@@Z
    WindissectOpaque GetRelativeViewport(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterAnchorCandidate@ScrollAnchorProvider@@QEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    void RegisterAnchorCandidate(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ScrollAnchorProvider@@QEAA@XZ
    ScrollAnchorProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterAnchorCandidate@ScrollAnchorProvider@@QEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    void UnregisterAnchorCandidate(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ScrollAnchorProvider@@UEAA@XZ
    virtual ~ScrollAnchorProvider();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyPendingChangeView@ScrollAnchorProvider@@AEAAXAEBUScrollViewer@Controls@Xaml@UI@Windows@winrt@@@Z
    void ApplyPendingChangeView(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnchorElement@ScrollAnchorProvider@@AEAA?AUUIElement@Xaml@UI@Windows@winrt@@PEAURect@Foundation@56@@Z
    WindissectOpaque GetAnchorElement(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasPendingBringIntoView@ScrollAnchorProvider@@AEBA_NXZ
    bool HasPendingBringIntoView() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollViewerSizeChanged@ScrollAnchorProvider@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUSizeChangedEventArgs@Xaml@UI@45@@Z
    void OnScrollViewerSizeChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollViewerViewChanged@ScrollAnchorProvider@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUScrollViewerViewChangedEventArgs@Controls@Xaml@UI@45@@Z
    void OnScrollViewerViewChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollViewerViewChanging@ScrollAnchorProvider@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUScrollViewerViewChangingEventArgs@Controls@Xaml@UI@45@@Z
    void OnScrollViewerViewChanging(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrackElement@ScrollAnchorProvider@@AEAANAEBUUIElement@Xaml@UI@Windows@winrt@@URect@Foundation@56@AEBUScrollViewer@Controls@3456@@Z
    double TrackElement(WindissectOpaque const &, WindissectOpaque, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetScrollViewer@ScrollAnchorProvider@@AEAA?AUScrollViewer@Controls@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque TryGetScrollViewer();
};
