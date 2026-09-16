#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 11 member(s).
class XamlAmbientLight {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLightIdStatic@XamlAmbientLight@@SAAEAUhstring@winrt@@XZ
    static WindissectOpaque & GetLightIdStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnected@XamlAmbientLight@@QEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    void OnConnected(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@XamlAmbientLight@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0XamlAmbientLight@@QEAA@XZ
    XamlAmbientLight();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlAmbientLight@@UEAA@XZ
    virtual ~XamlAmbientLight();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCompositionResources@XamlAmbientLight@@AEAAXXZ
    void EnsureCompositionResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseCompositionResources@XamlAmbientLight@@AEAAXXZ
    void ReleaseCompositionResources();
};
