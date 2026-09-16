#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 13 member(s).
namespace Microsoft::UI::Composition::Effects {
class EffectBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EffectBase@Effects@Composition@UI@Microsoft@@QEAA@XZ
    EffectBase();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamedPropertyMapping@EffectBase@Effects@Composition@UI@Microsoft@@UEAAJPEB_WPEAIPEAW4GRAPHICS_EFFECT_PROPERTY_MAPPING@@@Z
    virtual long GetNamedPropertyMapping(wchar_t const *, unsigned int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@EffectBase@Effects@Composition@UI@Microsoft@@UEAAJIPEAPEAUIPropertyValue@abi@@@Z
    virtual long GetProperty(unsigned int, ::abi::IPropertyValue * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyCount@EffectBase@Effects@Composition@UI@Microsoft@@UEAAJPEAI@Z
    virtual long GetPropertyCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSource@EffectBase@Effects@Composition@UI@Microsoft@@UEAAJIPEAPEAUIGraphicsEffectSource@abi@@@Z
    virtual long GetSource(unsigned int, ::abi::IGraphicsEffectSource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceCount@EffectBase@Effects@Composition@UI@Microsoft@@UEAAJPEAI@Z
    virtual long GetSourceCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Name@EffectBase@Effects@Composition@UI@Microsoft@@QEAA?AUhstring@winrt@@XZ
    WindissectOpaque Name();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EffectBase@Effects@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~EffectBase();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamedPropertyMappingImpl@EffectBase@Effects@Composition@UI@Microsoft@@IEAAJPEBUNamedProperty@12345@IPEB_WPEAIPEAW4GRAPHICS_EFFECT_PROPERTY_MAPPING@@@Z
    long GetNamedPropertyMappingImpl(WindissectOpaque const *, unsigned int, wchar_t const *, unsigned int *, int *);
};
} // namespace Microsoft::UI::Composition::Effects
