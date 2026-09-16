#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 19 member(s).
class PersonPicture {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@PersonPicture@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@PersonPicture@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PersonPicture@@QEAA@XZ
    PersonPicture();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PersonPicture@@UEAA@XZ
    virtual ~PersonPicture();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalizedPluralBadgeItemStringResource@PersonPicture@@AEAA?AUhstring@winrt@@I@Z
    WindissectOpaque GetLocalizedPluralBadgeItemStringResource(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContactChanged@PersonPicture@@AEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnContactChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSizeChanged@PersonPicture@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUSizeChangedEventArgs@Xaml@UI@45@@Z
    void OnSizeChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnloaded@PersonPicture@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnUnloaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAutomationName@PersonPicture@@AEAAXXZ
    void UpdateAutomationName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBadge@PersonPicture@@AEAAXXZ
    void UpdateBadge();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBadgeGlyph@PersonPicture@@AEAAXXZ
    void UpdateBadgeGlyph();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBadgeImageSource@PersonPicture@@AEAAXXZ
    void UpdateBadgeImageSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBadgeNumber@PersonPicture@@AEAAXXZ
    void UpdateBadgeNumber();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateControlForContact@PersonPicture@@AEAAX_N@Z
    void UpdateControlForContact(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIfReady@PersonPicture@@AEAAXXZ
    void UpdateIfReady();
};
