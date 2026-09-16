#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 18 member(s).
class RatingControlProperties {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearProperties@RatingControlProperties@@SAXXZ
    static void ClearProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@RatingControlProperties@@SAXXZ
    static void EnsureProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitialSetValue@RatingControlProperties@@QEAAHXZ
    int InitialSetValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitialSetValue@RatingControlProperties@@QEAAXH@Z
    void InitialSetValue(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsClearEnabled@RatingControlProperties@@QEAAX_N@Z
    void IsClearEnabled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsClearEnabled@RatingControlProperties@@QEAA_NXZ
    bool IsClearEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReadOnly@RatingControlProperties@@QEAAX_N@Z
    void IsReadOnly(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReadOnly@RatingControlProperties@@QEAA_NXZ
    bool IsReadOnly();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemInfo@RatingControlProperties@@QEAA?AURatingItemInfo@Controls@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque ItemInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MaxRating@RatingControlProperties@@QEAAHXZ
    int MaxRating();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MaxRating@RatingControlProperties@@QEAAXH@Z
    void MaxRating(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@RatingControlProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlaceholderValue@RatingControlProperties@@QEAANXZ
    double PlaceholderValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlaceholderValue@RatingControlProperties@@QEAAXN@Z
    void PlaceholderValue(double);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RatingControlProperties@@QEAA@XZ
    RatingControlProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Value@RatingControlProperties@@QEAANXZ
    double Value();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Value@RatingControlProperties@@QEAAXN@Z
    void Value(double);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RatingControlProperties@@QEAA@XZ
    ~RatingControlProperties();
};
