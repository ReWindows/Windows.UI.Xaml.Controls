#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 2 member(s).
class InitialsGenerator {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCharacterType@InitialsGenerator@@SA?AW4CharacterType@@_W@Z
    static int GetCharacterType(wchar_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitialsFromContactObject@InitialsGenerator@@SA?AUhstring@winrt@@AEBUContact@Contacts@ApplicationModel@Windows@3@@Z
    static WindissectOpaque InitialsFromContactObject(WindissectOpaque const &);
};
