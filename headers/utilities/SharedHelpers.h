#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 24 member(s).
class SharedHelpers {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertDipsToPhysical@SharedHelpers@@SA?AURect@Foundation@Windows@winrt@@AEBUUIElement@Xaml@UI@45@AEBU2345@@Z
    static WindissectOpaque ConvertDipsToPhysical(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStreamFromBytes@SharedHelpers@@SA?AUInMemoryRandomAccessStream@Streams@Storage@Windows@winrt@@AEBU?$array_view@$$CBE@6@@Z
    static WindissectOpaque CreateStreamFromBytes(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoRectsIntersect@SharedHelpers@@SA_NAEBURect@Foundation@Windows@winrt@@0@Z
    static bool DoRectsIntersect(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRichTextSelection@SharedHelpers@@SA?AUITextSelection@Text@UI@Windows@winrt@@AEBURichEditBox@Controls@Xaml@456@@Z
    static WindissectOpaque GetRichTextSelection(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVirtualKeyFromChar@SharedHelpers@@SA?AW4VirtualKey@System@Windows@winrt@@_W@Z
    static int GetVirtualKeyFromChar(wchar_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAncestor@SharedHelpers@@SA_NAEBUDependencyObject@Xaml@UI@Windows@winrt@@0_N@Z
    static bool IsAncestor(WindissectOpaque const &, WindissectOpaque const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAnimationsEnabled@SharedHelpers@@SA_NXZ
    static bool IsAnimationsEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsApplicationViewGetDisplayRegionsAvailable@SharedHelpers@@SA_NXZ
    static bool IsApplicationViewGetDisplayRegionsAvailable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInDesignModeV2@SharedHelpers@@SA_NXZ
    static bool IsInDesignModeV2();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMouseModeEnabled@SharedHelpers@@SA_NXZ
    static bool IsMouseModeEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOnXbox@SharedHelpers@@SA_NXZ
    static bool IsOnXbox();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTH2OrLower@SharedHelpers@@SA_NXZ
    static bool IsTH2OrLower();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTranslationFacadeAvailable@SharedHelpers@@SA_NAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    static bool IsTranslationFacadeAvailable(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsXamlCompositionBrushBaseAvailable@SharedHelpers@@SA_NXZ
    static bool IsXamlCompositionBrushBaseAvailable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeIconElementFrom@SharedHelpers@@SA?AUIconElement@Controls@Xaml@UI@Windows@winrt@@AEBUIconSource@34567@@Z
    static WindissectOpaque MakeIconElementFrom(WindissectOpaque const &);
};
