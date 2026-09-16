#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 5 member(s).
namespace DependencyLocator::Internal {
class LocalDependencyStorage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Instance@LocalDependencyStorage@Internal@DependencyLocator@@SAAEAV123@XZ
    static ::DependencyLocator::Internal::LocalDependencyStorage & Instance();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LocalDependencyStorage@Internal@DependencyLocator@@QEAA@XZ
    LocalDependencyStorage();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDestroyedCallback@LocalDependencyStorage@Internal@DependencyLocator@@UEAAXPEAUINotifyLocalDependencyStorageDestroyed@23@@Z
    virtual void SetDestroyedCallback(::DependencyLocator::Internal::INotifyLocalDependencyStorageDestroyed *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LocalDependencyStorage@Internal@DependencyLocator@@QEAA@XZ
    ~LocalDependencyStorage();
};
} // namespace DependencyLocator::Internal
