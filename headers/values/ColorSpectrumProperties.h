#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 23 member(s).
class ColorSpectrumProperties {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearProperties@ColorSpectrumProperties@@SAXXZ
    static void ClearProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Color@ColorSpectrumProperties@@QEAA?AU0UI@Windows@winrt@@XZ
    WindissectOpaque Color();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Color@ColorSpectrumProperties@@QEAAXAEBU0UI@Windows@winrt@@@Z
    void Color(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ColorSpectrumProperties@@QEAA@XZ
    ColorSpectrumProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Components@ColorSpectrumProperties@@QEAA?AW4ColorSpectrumComponents@Controls@Xaml@UI@Windows@winrt@@XZ
    int Components();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@ColorSpectrumProperties@@SAXXZ
    static void EnsureProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HsvColor@ColorSpectrumProperties@@QEAA?AUfloat4@Numerics@Foundation@Windows@winrt@@XZ
    WindissectOpaque HsvColor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HsvColor@ColorSpectrumProperties@@QEAAXAEBUfloat4@Numerics@Foundation@Windows@winrt@@@Z
    void HsvColor(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MaxHue@ColorSpectrumProperties@@QEAAHXZ
    int MaxHue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MaxHue@ColorSpectrumProperties@@QEAAXH@Z
    void MaxHue(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MaxSaturation@ColorSpectrumProperties@@QEAAHXZ
    int MaxSaturation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MaxSaturation@ColorSpectrumProperties@@QEAAXH@Z
    void MaxSaturation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MaxValue@ColorSpectrumProperties@@QEAAHXZ
    int MaxValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MaxValue@ColorSpectrumProperties@@QEAAXH@Z
    void MaxValue(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MinHue@ColorSpectrumProperties@@QEAAHXZ
    int MinHue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MinHue@ColorSpectrumProperties@@QEAAXH@Z
    void MinHue(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MinSaturation@ColorSpectrumProperties@@QEAAHXZ
    int MinSaturation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MinSaturation@ColorSpectrumProperties@@QEAAXH@Z
    void MinSaturation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MinValue@ColorSpectrumProperties@@QEAAHXZ
    int MinValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MinValue@ColorSpectrumProperties@@QEAAXH@Z
    void MinValue(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@ColorSpectrumProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shape@ColorSpectrumProperties@@QEAA?AW4ColorSpectrumShape@Controls@Xaml@UI@Windows@winrt@@XZ
    int Shape();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ColorSpectrumProperties@@QEAA@XZ
    ~ColorSpectrumProperties();
};
