#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 7 member(s).
namespace Microsoft::UI::Composition::Effects {
class BlendEffect {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectId@BlendEffect@Effects@Composition@UI@Microsoft@@UEAAJPEAU_GUID@@@Z
    virtual long GetEffectId(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamedPropertyMapping@BlendEffect@Effects@Composition@UI@Microsoft@@UEAAJPEB_WPEAIPEAW4GRAPHICS_EFFECT_PROPERTY_MAPPING@@@Z
    virtual long GetNamedPropertyMapping(wchar_t const *, unsigned int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@BlendEffect@Effects@Composition@UI@Microsoft@@UEAAJIPEAPEAUIPropertyValue@abi@@@Z
    virtual long GetProperty(unsigned int, ::abi::IPropertyValue * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyCount@BlendEffect@Effects@Composition@UI@Microsoft@@UEAAJPEAI@Z
    virtual long GetPropertyCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSource@BlendEffect@Effects@Composition@UI@Microsoft@@UEAAJIPEAPEAUIGraphicsEffectSource@abi@@@Z
    virtual long GetSource(unsigned int, ::abi::IGraphicsEffectSource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceCount@BlendEffect@Effects@Composition@UI@Microsoft@@UEAAJPEAI@Z
    virtual long GetSourceCount(unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BlendEffect@Effects@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~BlendEffect();
};
} // namespace Microsoft::UI::Composition::Effects
