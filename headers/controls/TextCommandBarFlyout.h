#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.Xaml.Controls.dll by Windissect. 24 member(s).
class TextCommandBarFlyout {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TextCommandBarFlyout@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TextCommandBarFlyout@@QEAA@XZ
    TextCommandBarFlyout();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextCommandBarFlyout@@UEAA@XZ
    virtual ~TextCommandBarFlyout();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteBoldCommand@TextCommandBarFlyout@@AEAAXXZ
    void ExecuteBoldCommand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteCopyCommand@TextCommandBarFlyout@@AEAAXXZ
    void ExecuteCopyCommand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteCutCommand@TextCommandBarFlyout@@AEAAXXZ
    void ExecuteCutCommand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteItalicCommand@TextCommandBarFlyout@@AEAAXXZ
    void ExecuteItalicCommand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecutePasteCommand@TextCommandBarFlyout@@AEAAXXZ
    void ExecutePasteCommand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteRedoCommand@TextCommandBarFlyout@@AEAAXXZ
    void ExecuteRedoCommand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteSelectAllCommand@TextCommandBarFlyout@@AEAAXXZ
    void ExecuteSelectAllCommand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteUnderlineCommand@TextCommandBarFlyout@@AEAAXXZ
    void ExecuteUnderlineCommand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteUndoCommand@TextCommandBarFlyout@@AEAAXXZ
    void ExecuteUndoCommand();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetButton@TextCommandBarFlyout@@AEAA?AUICommandBarElement@Controls@Xaml@UI@Windows@winrt@@W4TextControlButtons@@@Z
    WindissectOpaque GetButton(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetButtonsToAdd@TextCommandBarFlyout@@AEAA?AW4TextControlButtons@@XZ
    int GetButtonsToAdd();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPasswordBoxButtonsToAdd@TextCommandBarFlyout@@CA?AW4TextControlButtons@@AEBUPasswordBox@Controls@Xaml@UI@Windows@winrt@@@Z
    static int GetPasswordBoxButtonsToAdd(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRichEditBoxButtonsToAdd@TextCommandBarFlyout@@CA?AW4TextControlButtons@@AEBURichEditBox@Controls@Xaml@UI@Windows@winrt@@@Z
    static int GetRichEditBoxButtonsToAdd(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRichTextBlockButtonsToAdd@TextCommandBarFlyout@@CA?AW4TextControlButtons@@AEBURichTextBlock@Controls@Xaml@UI@Windows@winrt@@@Z
    static int GetRichTextBlockButtonsToAdd(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextBoxButtonsToAdd@TextCommandBarFlyout@@CA?AW4TextControlButtons@@AEBUTextBox@Controls@Xaml@UI@Windows@winrt@@@Z
    static int GetTextBoxButtonsToAdd(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsButtonInPrimaryCommands@TextCommandBarFlyout@@AEAA_NW4TextControlButtons@@@Z
    bool IsButtonInPrimaryCommands(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateButtons@TextCommandBarFlyout@@AEAAXXZ
    void UpdateButtons();
};
