#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 9 member(s).
class InteractionTrackerAsyncOperation {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOptions@InteractionTrackerAsyncOperation@@QEBA?AUIInspectable@Foundation@Windows@winrt@@XZ
    WindissectOpaque GetOptions() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InteractionTrackerAsyncOperation@@QEAA@W4InteractionTrackerAsyncOperationType@@W4InteractionTrackerAsyncOperationTrigger@@_NAEBUIInspectable@Foundation@Windows@winrt@@@Z
    InteractionTrackerAsyncOperation(int, int, bool, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsDelayed@InteractionTrackerAsyncOperation@@QEAAX_N@Z
    void SetIsDelayed(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsScrollControllerRequest@InteractionTrackerAsyncOperation@@QEAAX_N@Z
    void SetIsScrollControllerRequest(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRequestId@InteractionTrackerAsyncOperation@@QEAAXH@Z
    void SetRequestId(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTicksCountdown@InteractionTrackerAsyncOperation@@QEAAXH@Z
    void SetTicksCountdown(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TickNonAnimatedOperation@InteractionTrackerAsyncOperation@@QEAAXPEA_N@Z
    void TickNonAnimatedOperation(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TickQueuedOperation@InteractionTrackerAsyncOperation@@QEAAXPEA_N@Z
    void TickQueuedOperation(bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InteractionTrackerAsyncOperation@@QEAA@XZ
    ~InteractionTrackerAsyncOperation();
};
