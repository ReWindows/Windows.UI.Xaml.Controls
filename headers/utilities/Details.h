#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 4 member(s).
namespace Microsoft::WRL {
class Details {
public:
    class ModuleBase;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z
    long GetCacheEntry(WindissectOpaque *, unsigned int *, _GUID const &, WindissectOpaque const *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEB_W_N@Z
    bool TerminateMap(WindissectOpaque *, wchar_t const *, bool);
};
} // namespace Microsoft::WRL
