[FirstLeftPanel]
Meter=String
Text=First
FontColor=0,0,0,0
MeterStyle=FirstItem | LeftPanel
Y=[#s_ScrollLeftPanel]
[ListIcon0]
Meter=String
Text=[\xE897]
Y=[#s_ListAboutTopPadding]R
MeterStyle=ListIcon | ListAboutIcon | LeftPanel
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 0 "#ROOTCONFIGPATH#settings\includes\Variables.inc"][!Refresh]
[ListItem0]
Meter=String
Text=vOS 
MeterStyle=ListItem | ListAboutItem | LeftPanel
W=([#s_LeftPanelW] - ([ListIcon0:W] + [#s_ListRightPadding]))
FontWeight=([#s_CurrentCategory] = 0) ? [#s_SelectedFontWeight] : [#s_VariableTitleFontWeight]
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 0 "#ROOTCONFIGPATH#settings\includes\Variables.inc"][!Refresh]
ToolTipTitle=vOS 
ToolTipText=

[ListIcon1]
Meter=String
Text=[\xE713]
MeterStyle=ListIcon | ListTopicIcon | LeftPanel
[ListItem1]
Meter=String
Text=Colors 
MeterStyle=ListItem | ListTopicItem | LeftPanel
W=([#s_LeftPanelW] - ([ListIcon1:W] + [#s_ListRightPadding]))
FontWeight=([#s_CurrentCategory] = 1) ? [#s_SelectedFontWeight] : [#s_FontWeight]
ToolTipTitle=Colors 
ToolTipText=

[ListIcon2]
Meter=String
Text=[\xE73E]
MeterStyle=ListIcon | ListDefaultIcon | LeftPanel
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 2 "#ROOTCONFIGPATH#settings\includes\Variables.inc"][!Refresh]
[ListItem2]
Meter=String
Text=Bar/Gadget Colors 
MeterStyle=ListItem | ListDefaultItem | LeftPanel
W=([#s_LeftPanelW] - ([ListIcon2:W] + [#s_ListRightPadding]))
FontWeight=([#s_CurrentCategory] = 2) ? [#s_SelectedFontWeight] : [#s_FontWeight]
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 2 "#ROOTCONFIGPATH#settings\includes\Variables.inc"][!Refresh]
ToolTipTitle=Bar/Gadget Colors 
ToolTipText=


[ListIcon3]
Meter=String
Text=[\xE73E]
MeterStyle=ListIcon | ListDefaultIcon | LeftPanel
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 3 "#ROOTCONFIGPATH#settings\includes\Variables.inc"][!Refresh]
[ListItem3]
Meter=String
Text=Preset Colors 
MeterStyle=ListItem | ListDefaultItem | LeftPanel
W=([#s_LeftPanelW] - ([ListIcon3:W] + [#s_ListRightPadding]))
FontWeight=([#s_CurrentCategory] = 3) ? [#s_SelectedFontWeight] : [#s_FontWeight]
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 3 "#ROOTCONFIGPATH#settings\includes\Variables.inc"][!Refresh]
ToolTipTitle=Preset Colors 
ToolTipText=


[ListIcon4]
Meter=String
Text=[\xE73E]
MeterStyle=ListIcon | ListDefaultIcon | LeftPanel
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 4 "#ROOTCONFIGPATH#settings\includes\Variables.inc"][!Refresh]
[ListItem4]
Meter=String
Text=Text Colors 
MeterStyle=ListItem | ListDefaultItem | LeftPanel
W=([#s_LeftPanelW] - ([ListIcon4:W] + [#s_ListRightPadding]))
FontWeight=([#s_CurrentCategory] = 4) ? [#s_SelectedFontWeight] : [#s_FontWeight]
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 4 "#ROOTCONFIGPATH#settings\includes\Variables.inc"][!Refresh]
ToolTipTitle=Text Colors 
ToolTipText=


[ListIcon5]
Meter=String
Text=[\xE713]
MeterStyle=ListIcon | ListTopicIcon | LeftPanel
[ListItem5]
Meter=String
Text=Skin Settings 
MeterStyle=ListItem | ListTopicItem | LeftPanel
W=([#s_LeftPanelW] - ([ListIcon5:W] + [#s_ListRightPadding]))
FontWeight=([#s_CurrentCategory] = 5) ? [#s_SelectedFontWeight] : [#s_FontWeight]
ToolTipTitle=Skin Settings 
ToolTipText=

[ListIcon6]
Meter=String
Text=[\xE73E]
MeterStyle=ListIcon | ListDefaultIcon | LeftPanel
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 6 "#ROOTCONFIGPATH#settings\includes\Variables.inc"][!Refresh]
[ListItem6]
Meter=String
Text=AppBar 
MeterStyle=ListItem | ListDefaultItem | LeftPanel
W=([#s_LeftPanelW] - ([ListIcon6:W] + [#s_ListRightPadding]))
FontWeight=([#s_CurrentCategory] = 6) ? [#s_SelectedFontWeight] : [#s_FontWeight]
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 6 "#ROOTCONFIGPATH#settings\includes\Variables.inc"][!Refresh]
ToolTipTitle=AppBar 
ToolTipText=


[ListIcon7]
Meter=String
Text=[\xE73E]
MeterStyle=ListIcon | ListDefaultIcon | LeftPanel
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 7 "#ROOTCONFIGPATH#settings\includes\Variables.inc"][!Refresh]
[ListItem7]
Meter=String
Text=AppGadget 
MeterStyle=ListItem | ListDefaultItem | LeftPanel
W=([#s_LeftPanelW] - ([ListIcon7:W] + [#s_ListRightPadding]))
FontWeight=([#s_CurrentCategory] = 7) ? [#s_SelectedFontWeight] : [#s_FontWeight]
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 7 "#ROOTCONFIGPATH#settings\includes\Variables.inc"][!Refresh]
ToolTipTitle=AppGadget 
ToolTipText=


[ListIcon8]
Meter=String
Text=[\xE73E]
MeterStyle=ListIcon | ListDefaultIcon | LeftPanel
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 8 "#ROOTCONFIGPATH#settings\includes\Variables.inc"][!Refresh]
[ListItem8]
Meter=String
Text=DriveBar/Gadget 
MeterStyle=ListItem | ListDefaultItem | LeftPanel
W=([#s_LeftPanelW] - ([ListIcon8:W] + [#s_ListRightPadding]))
FontWeight=([#s_CurrentCategory] = 8) ? [#s_SelectedFontWeight] : [#s_FontWeight]
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 8 "#ROOTCONFIGPATH#settings\includes\Variables.inc"][!Refresh]
ToolTipTitle=DriveBar/Gadget 
ToolTipText=


[ListIcon9]
Meter=String
Text=[\xE73E]
MeterStyle=ListIcon | ListDefaultIcon | LeftPanel
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 9 "#ROOTCONFIGPATH#settings\includes\Variables.inc"][!Refresh]
[ListItem9]
Meter=String
Text=MusicBar 
MeterStyle=ListItem | ListDefaultItem | LeftPanel
W=([#s_LeftPanelW] - ([ListIcon9:W] + [#s_ListRightPadding]))
FontWeight=([#s_CurrentCategory] = 9) ? [#s_SelectedFontWeight] : [#s_FontWeight]
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 9 "#ROOTCONFIGPATH#settings\includes\Variables.inc"][!Refresh]
ToolTipTitle=MusicBar 
ToolTipText=


[ListIcon10]
Meter=String
Text=[\xE73E]
MeterStyle=ListIcon | ListDefaultIcon | LeftPanel
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 10 "#ROOTCONFIGPATH#settings\includes\Variables.inc"][!Refresh]
[ListItem10]
Meter=String
Text=FanBar 
MeterStyle=ListItem | ListDefaultItem | LeftPanel
W=([#s_LeftPanelW] - ([ListIcon10:W] + [#s_ListRightPadding]))
FontWeight=([#s_CurrentCategory] = 10) ? [#s_SelectedFontWeight] : [#s_FontWeight]
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 10 "#ROOTCONFIGPATH#settings\includes\Variables.inc"][!Refresh]
ToolTipTitle=FanBar 
ToolTipText=


[ListIcon11]
Meter=String
Text=[\xE713]
MeterStyle=ListIcon | ListTopicIcon | LeftPanel
[ListItem11]
Meter=String
Text=HWiNFO Settings 
MeterStyle=ListItem | ListTopicItem | LeftPanel
W=([#s_LeftPanelW] - ([ListIcon11:W] + [#s_ListRightPadding]))
FontWeight=([#s_CurrentCategory] = 11) ? [#s_SelectedFontWeight] : [#s_FontWeight]
ToolTipTitle=HWiNFO Settings 
ToolTipText=

[ListIcon12]
Meter=String
Text=[\xE73E]
MeterStyle=ListIcon | ListDefaultIcon | LeftPanel
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 12 "#ROOTCONFIGPATH#settings\includes\Variables.inc"][!Refresh]
[ListItem12]
Meter=String
Text=Index Values 
MeterStyle=ListItem | ListDefaultItem | LeftPanel
W=([#s_LeftPanelW] - ([ListIcon12:W] + [#s_ListRightPadding]))
FontWeight=([#s_CurrentCategory] = 12) ? [#s_SelectedFontWeight] : [#s_FontWeight]
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 12 "#ROOTCONFIGPATH#settings\includes\Variables.inc"][!Refresh]
ToolTipTitle=Index Values 
ToolTipText=


[LastLeftPanel]
Meter=String
Text=Last
FontColor=255,0,0,0
MeterStyle=LastItem | LeftPanel

[ScrollDownLeftPanel]
Measure=Calc
Formula=[#s_ScrollLeftPanel] - [#s_ScrollSpeed]
IfCondition=([LastLeftPanel:Y] > [#s_ScrollTreshold])
IfTrueAction=[!SetVariable "s_ScrollLeftPanel" "[&ScrollDownLeftPanel]"][!DisableMeasure "ScrollDownLeftPanel"][!Update][!Redraw]
IfFalseAction=[!DisableMeasure "ScrollDownLeftPanel"]
IfConditionMode=1
Disabled=1
DynamicVariables=1

[ScrollUpLeftPanel]
Measure=Calc
Formula=[#s_ScrollLeftPanel] + [#s_ScrollSpeed]
IfCondition=([FirstLeftPanel:Y] < 0)
IfTrueAction=[!SetVariable "s_ScrollLeftPanel" "[&ScrollUpLeftPanel]"][!DisableMeasure "ScrollUpLeftPanel"][!Update][!Redraw]
IfFalseAction=[!DisableMeasure "ScrollUpLeftPanel"]
IfConditionMode=1
Disabled=1
DynamicVariables=1

[MeterLogo]
Meter=Image
ImageName=#@#Images\logov2.png
;Greyscale=1
;ImageTint=#COLOR4#
X=(0)
Y=(0)
W=(45)
H=(45)