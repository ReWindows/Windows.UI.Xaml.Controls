#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 8 member(s).
namespace Private {
class XamlRuntimeType {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@XamlRuntimeType@Private@@UEBAJGPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(unsigned short, IInspectable * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToMap@XamlRuntimeType@Private@@UEBAJGPEAUIInspectable@@00@Z
    virtual long AddToMap(unsigned short, IInspectable *, IInspectable *, IInspectable *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToVector@XamlRuntimeType@Private@@UEBAJGPEAUIInspectable@@0@Z
    virtual long AddToVector(unsigned short, IInspectable *, IInspectable *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoxEnum@XamlRuntimeType@Private@@UEBAJGIPEAPEAUIInspectable@@@Z
    virtual long BoxEnum(unsigned short, unsigned int, IInspectable * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDependencyProperties@XamlRuntimeType@Private@@UEBAJG@Z
    virtual long EnsureDependencyProperties(unsigned short) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@XamlRuntimeType@Private@@UEBAJGPEAUIInspectable@@PEAPEAU3@@Z
    virtual long GetValue(unsigned short, IInspectable *, IInspectable * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetDependencyProperties@XamlRuntimeType@Private@@UEBAXXZ
    virtual void ResetDependencyProperties() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@XamlRuntimeType@Private@@UEBAJGPEAUIInspectable@@0@Z
    virtual long SetValue(unsigned short, IInspectable *, IInspectable *) const;
};
} // namespace Private
