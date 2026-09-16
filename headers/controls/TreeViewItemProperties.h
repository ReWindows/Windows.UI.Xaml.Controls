#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 11 member(s).
class TreeViewItemProperties {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@TreeViewItemProperties@@SAXXZ
    static void EnsureProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GlyphOpacity@TreeViewItemProperties@@QEAANXZ
    double GlyphOpacity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GlyphOpacity@TreeViewItemProperties@@QEAAXN@Z
    void GlyphOpacity(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GlyphSize@TreeViewItemProperties@@QEAANXZ
    double GlyphSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GlyphSize@TreeViewItemProperties@@QEAAXN@Z
    void GlyphSize(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasUnrealizedChildren@TreeViewItemProperties@@QEAAX_N@Z
    void HasUnrealizedChildren(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasUnrealizedChildren@TreeViewItemProperties@@QEAA_NXZ
    bool HasUnrealizedChildren();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExpanded@TreeViewItemProperties@@QEAAX_N@Z
    void IsExpanded(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExpanded@TreeViewItemProperties@@QEAA_NXZ
    bool IsExpanded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@TreeViewItemProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TreeViewItemTemplateSettings@TreeViewItemProperties@@QEAA?AU0Controls@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque TreeViewItemTemplateSettings();
};
