#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 5 member(s).
namespace winrt::Windows::Foundation {
class PropertyValue {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBoolean@PropertyValue@Foundation@Windows@winrt@@SA@_N@Z
    static CreateBoolean(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDouble@PropertyValue@Foundation@Windows@winrt@@SA@N@Z
    static CreateDouble(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSingle@PropertyValue@Foundation@Windows@winrt@@SA@M@Z
    static CreateSingle(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSingleArray@PropertyValue@Foundation@Windows@winrt@@SA@U?$array_view@$$CBM@4@@Z
    static CreateSingleArray(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateUInt32@PropertyValue@Foundation@Windows@winrt@@SA@I@Z
    static CreateUInt32(unsigned int);
};
} // namespace winrt::Windows::Foundation
