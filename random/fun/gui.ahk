; Create a simple GUI window
Gui, Add, Text,, name?? :))
Gui, Add, Edit, vNameEdit w200
Gui, Add, Button, gSubmit, submit!!

; Show the GUI
Gui, Show, w300 h150, test
Return

Submit:
Gui, Submit, NoHide
MsgBox, oh hello %NameEdit%!
Return

GuiClose:
ExitApp
