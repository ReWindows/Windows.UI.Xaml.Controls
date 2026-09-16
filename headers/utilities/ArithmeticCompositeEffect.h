#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 11 member(s).
namespace Microsoft::UI::Composition::Effects {
class ArithmeticCompositeEffect {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectId@ArithmeticCompositeEffect@Effects@Composition@UI@Microsoft@@UEAAJPEAU_GUID@@@Z
    virtual long GetEffectId(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamedPropertyMapping@ArithmeticCompositeEffect@Effects@Composition@UI@Microsoft@@UEAAJPEB_WPEAIPEAW4GRAPHICS_EFFECT_PROPERTY_MAPPING@@@Z
    virtual long GetNamedPropertyMapping(wchar_t const *, unsigned int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@ArithmeticCompositeEffect@Effects@Composition@UI@Microsoft@@UEAAJIPEAPEAUIPropertyValue@abi@@@Z
    virtual long GetProperty(unsigned int, ::abi::IPropertyValue * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyCount@ArithmeticCompositeEffect@Effects@Composition@UI@Microsoft@@UEAAJPEAI@Z
    virtual long GetPropertyCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSource@ArithmeticCompositeEffect@Effects@Composition@UI@Microsoft@@UEAAJIPEAPEAUIGraphicsEffectSource@abi@@@Z
    virtual long GetSource(unsigned int, ::abi::IGraphicsEffectSource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceCount@ArithmeticCompositeEffect@Effects@Composition@UI@Microsoft@@UEAAJPEAI@Z
    virtual long GetSourceCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MultiplyAmount@ArithmeticCompositeEffect@Effects@Composition@UI@Microsoft@@QEAAXAEBM@Z
    void MultiplyAmount(float const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Offset@ArithmeticCompositeEffect@Effects@Composition@UI@Microsoft@@QEAAXAEBM@Z
    void Offset(float const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Source1Amount@ArithmeticCompositeEffect@Effects@Composition@UI@Microsoft@@QEAAXAEBM@Z
    void Source1Amount(float const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Source2Amount@ArithmeticCompositeEffect@Effects@Composition@UI@Microsoft@@QEAAXAEBM@Z
    void Source2Amount(float const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ArithmeticCompositeEffect@Effects@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~ArithmeticCompositeEffect();
};
} // namespace Microsoft::UI::Composition::Effects
