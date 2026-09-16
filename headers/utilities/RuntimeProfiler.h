#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 5 member(s).
class RuntimeProfiler {
public:
    class FunctionTelemetryCount;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelTimer@RuntimeProfiler@@YAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z
    int CancelTimer(_RTL_RUN_ONCE *, void *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireEvent@RuntimeProfiler@@YAX_N@Z
    void FireEvent(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeRuntimeProfiler@RuntimeProfiler@@YAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z
    int InitializeRuntimeProfiler(_RTL_RUN_ONCE *, void *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterMethod@RuntimeProfiler@@YAXW4ProfileGroup@1@GGPECJ@Z
    void RegisterMethod(int, unsigned short, unsigned short, long volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TPTimerCallback@RuntimeProfiler@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z
    void TPTimerCallback(_TP_CALLBACK_INSTANCE *, void *, _TP_TIMER *);
};
