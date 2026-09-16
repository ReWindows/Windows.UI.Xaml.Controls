#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 9 member(s).
namespace Microsoft::UI::Composition::Effects {
class ColorMatrixEffect {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AlphaMode@ColorMatrixEffect@Effects@Composition@UI@Microsoft@@QEAAXAEBW4CanvasAlphaMode@2345winrt@@@Z
    void AlphaMode(int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ColorMatrix@ColorMatrixEffect@Effects@Composition@UI@Microsoft@@QEAAXAEBUMatrix5x4@2345winrt@@@Z
    void ColorMatrix(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectId@ColorMatrixEffect@Effects@Composition@UI@Microsoft@@UEAAJPEAU_GUID@@@Z
    virtual long GetEffectId(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamedPropertyMapping@ColorMatrixEffect@Effects@Composition@UI@Microsoft@@UEAAJPEB_WPEAIPEAW4GRAPHICS_EFFECT_PROPERTY_MAPPING@@@Z
    virtual long GetNamedPropertyMapping(wchar_t const *, unsigned int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@ColorMatrixEffect@Effects@Composition@UI@Microsoft@@UEAAJIPEAPEAUIPropertyValue@abi@@@Z
    virtual long GetProperty(unsigned int, ::abi::IPropertyValue * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyCount@ColorMatrixEffect@Effects@Composition@UI@Microsoft@@UEAAJPEAI@Z
    virtual long GetPropertyCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSource@ColorMatrixEffect@Effects@Composition@UI@Microsoft@@UEAAJIPEAPEAUIGraphicsEffectSource@abi@@@Z
    virtual long GetSource(unsigned int, ::abi::IGraphicsEffectSource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceCount@ColorMatrixEffect@Effects@Composition@UI@Microsoft@@UEAAJPEAI@Z
    virtual long GetSourceCount(unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ColorMatrixEffect@Effects@Composition@UI@Microsoft@@UEAA@XZ
    virtual ~ColorMatrixEffect();
};
} // namespace Microsoft::UI::Composition::Effects
