#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 8 member(s).
namespace Microsoft::UI::Composition::Effects {
class GaussianBlurEffect {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BlurAmount@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@QEAAXAEBM@Z
    void BlurAmount(float const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectId@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAJPEAU_GUID@@@Z
    virtual long GetEffectId(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamedPropertyMapping@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAJPEB_WPEAIPEAW4GRAPHICS_EFFECT_PROPERTY_MAPPING@@@Z
    virtual long GetNamedPropertyMapping(wchar_t const *, unsigned int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAJIPEAPEAUIPropertyValue@abi@@@Z
    virtual long GetProperty(unsigned int, ::abi::IPropertyValue * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyCount@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAJPEAI@Z
    virtual long GetPropertyCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSource@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAJIPEAPEAUIGraphicsEffectSource@abi@@@Z
    virtual long GetSource(unsigned int, ::abi::IGraphicsEffectSource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceCount@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAJPEAI@Z
    virtual long GetSourceCount(unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~GaussianBlurEffect();
};
} // namespace Microsoft::UI::Composition::Effects
