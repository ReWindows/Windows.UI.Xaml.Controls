#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 14 member(s).
class ScrollerSnapPointIrregular {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Combine@ScrollerSnapPointIrregular@@UEAAXUScrollerSnapPointBase@Primitives@Controls@Xaml@UI@Windows@winrt@@@Z
    virtual void Combine(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateConditionalExpression@ScrollerSnapPointIrregular@@UEAA?AUExpressionAnimation@Composition@UI@Windows@winrt@@UCompositor@3456@Uhstring@6@1@Z
    virtual WindissectOpaque CreateConditionalExpression(WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRestingPointExpression@ScrollerSnapPointIrregular@@UEAA?AUExpressionAnimation@Composition@UI@Windows@winrt@@UCompositor@3456@Uhstring@6@1@Z
    virtual WindissectOpaque CreateRestingPointExpression(WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineActualApplicableZone@ScrollerSnapPointIrregular@@UEAAXPEAVScrollerSnapPointBase@@0@Z
    virtual void DetermineActualApplicableZone(ScrollerSnapPointBase *, ScrollerSnapPointBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Evaluate@ScrollerSnapPointIrregular@@UEAANN@Z
    virtual double Evaluate(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Influence@ScrollerSnapPointIrregular@@UEAANN@Z
    virtual double Influence(double);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ScrollerSnapPointIrregular@@QEAA@NNW4ScrollerSnapPointAlignment@Primitives@Controls@Xaml@UI@Windows@winrt@@W4ScrollerSnapPointApplicableRangeType@234567@@Z
    ScrollerSnapPointIrregular(double, double, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SortPredicate@ScrollerSnapPointIrregular@@UEAA?AUScrollerSnapPointSortPredicate@@XZ
    virtual ScrollerSnapPointSortPredicate SortPredicate();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineMaxActualApplicableZone@ScrollerSnapPointIrregular@@AEAANPEAVScrollerSnapPointBase@@@Z
    double DetermineMaxActualApplicableZone(ScrollerSnapPointBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineMinActualApplicableZone@ScrollerSnapPointIrregular@@AEAANPEAVScrollerSnapPointBase@@@Z
    double DetermineMinActualApplicableZone(ScrollerSnapPointBase *);
};
