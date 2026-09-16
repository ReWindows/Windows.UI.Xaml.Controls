#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 17 member(s).
class PersonPictureProperties {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BadgeGlyph@PersonPictureProperties@@QEAA?AUhstring@winrt@@XZ
    WindissectOpaque BadgeGlyph();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BadgeImageSource@PersonPictureProperties@@QEAA?AUImageSource@Media@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque BadgeImageSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BadgeNumber@PersonPictureProperties@@QEAAHXZ
    int BadgeNumber();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BadgeNumber@PersonPictureProperties@@QEAAXH@Z
    void BadgeNumber(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BadgeText@PersonPictureProperties@@QEAA?AUhstring@winrt@@XZ
    WindissectOpaque BadgeText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearProperties@PersonPictureProperties@@SAXXZ
    static void ClearProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Contact@PersonPictureProperties@@QEAAXAEBU0Contacts@ApplicationModel@Windows@winrt@@@Z
    void Contact(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Contact@PersonPictureProperties@@QEAA?AU0Contacts@ApplicationModel@Windows@winrt@@XZ
    WindissectOpaque Contact();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplayName@PersonPictureProperties@@QEAA?AUhstring@winrt@@XZ
    WindissectOpaque DisplayName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@PersonPictureProperties@@SAXXZ
    static void EnsureProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initials@PersonPictureProperties@@QEAA?AUhstring@winrt@@XZ
    WindissectOpaque Initials();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGroup@PersonPictureProperties@@QEAA_NXZ
    bool IsGroup();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGroup@PersonPictureProperties@@QEAAX_N@Z
    void IsGroup(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@PersonPictureProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreferSmallImage@PersonPictureProperties@@QEAAX_N@Z
    void PreferSmallImage(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreferSmallImage@PersonPictureProperties@@QEAA_NXZ
    bool PreferSmallImage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProfilePicture@PersonPictureProperties@@QEAA?AUImageSource@Media@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque ProfilePicture();
};
