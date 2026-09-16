#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 4 member(s).
namespace Microsoft::UI::Composition::Effects {
class AlphaMaskEffect {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectId@AlphaMaskEffect@Effects@Composition@UI@Microsoft@@UEAAJPEAU_GUID@@@Z
    virtual long GetEffectId(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSource@AlphaMaskEffect@Effects@Composition@UI@Microsoft@@UEAAJIPEAPEAUIGraphicsEffectSource@abi@@@Z
    virtual long GetSource(unsigned int, ::abi::IGraphicsEffectSource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceCount@AlphaMaskEffect@Effects@Composition@UI@Microsoft@@UEAAJPEAI@Z
    virtual long GetSourceCount(unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AlphaMaskEffect@Effects@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~AlphaMaskEffect();
};
} // namespace Microsoft::UI::Composition::Effects
