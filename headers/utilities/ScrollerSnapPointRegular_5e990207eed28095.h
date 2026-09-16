#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 14 member(s).
class ScrollerSnapPointRegular {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Combine@ScrollerSnapPointRegular@@UEAAXUScrollerSnapPointBase@Primitives@Controls@Xaml@UI@Windows@winrt@@@Z
    virtual void Combine(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateConditionalExpression@ScrollerSnapPointRegular@@UEAA?AUExpressionAnimation@Composition@UI@Windows@winrt@@UCompositor@3456@Uhstring@6@1@Z
    virtual WindissectOpaque CreateConditionalExpression(WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRestingPointExpression@ScrollerSnapPointRegular@@UEAA?AUExpressionAnimation@Composition@UI@Windows@winrt@@UCompositor@3456@Uhstring@6@1@Z
    virtual WindissectOpaque CreateRestingPointExpression(WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineActualApplicableZone@ScrollerSnapPointRegular@@UEAAXPEAVScrollerSnapPointBase@@0@Z
    virtual void DetermineActualApplicableZone(ScrollerSnapPointBase *, ScrollerSnapPointBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Evaluate@ScrollerSnapPointRegular@@UEAANN@Z
    virtual double Evaluate(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Influence@ScrollerSnapPointRegular@@UEAANN@Z
    virtual double Influence(double);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ScrollerSnapPointRegular@@QEAA@NNNNNW4ScrollerSnapPointAlignment@Primitives@Controls@Xaml@UI@Windows@winrt@@W4ScrollerSnapPointApplicableRangeType@234567@@Z
    ScrollerSnapPointRegular(double, double, double, double, double, int, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ScrollerSnapPointRegular@@QEAA@NNNNW4ScrollerSnapPointAlignment@Primitives@Controls@Xaml@UI@Windows@winrt@@@Z
    ScrollerSnapPointRegular(double, double, double, double, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SortPredicate@ScrollerSnapPointRegular@@UEAA?AUScrollerSnapPointSortPredicate@@XZ
    virtual ScrollerSnapPointSortPredicate SortPredicate();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateConstructorParameters@ScrollerSnapPointRegular@@AEAAXNNNNN_N@Z
    void ValidateConstructorParameters(double, double, double, double, double, bool);
};
