[FirstRightPanel]
Meter=String
Text=First
FontColor=0,0,0,0
MeterStyle=FirstItem | RightPanel
Y=[#s_ScrollRightPanel]
[CategoryIcon6]
Meter=String
Text=[\xE73E]
MeterStyle=CategoryIcon | RightPanel

[Title6]
Meter=String
Text=AppBar 
MeterStyle=CategoryTitle | RightPanel
W=([#s_RightPanelW] - [CategoryIcon6:W])

[CategoryDescription6]
Meter=String
Text=
MeterStyle=VarDescription | ThickDescription | RightPanel

[CategoryTitleSeparator6]
Meter=Image
MeterStyle=CategoryTitleSeparator | RightPanel

[VariableIcon0]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle0]
Meter=String
Text=Application Path 1 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription0]
Meter=String
Text=Path to shortcut directory
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableVariableValue0]
Meter=String
Text=[#AppPath1]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText0" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText0]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=#s_FontColor#
FontFace=#s_FontFace#
FontSize=#s_InputTextFontSize#
Disabled=
X=([VariableVariableValue0:X])
Y=([VariableVariableValue0:Y] + [#s_ValueYPadding])
H=[VariableVariableValue0:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#AppPath1]
Command1=[!WriteKeyValue "Variables" "AppPath1" "$UserInput$" "#SKINSPATH#vOS\@resources\Variables.inc"][!Refresh][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableVariableValue0 FontColor "[#s_FontColor]"][!UpdateMeter VariableVariableValue0][!Redraw]

[VariableIcon1]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle1]
Meter=String
Text=Application Path 2 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription1]
Meter=String
Text=Path to shortcut directory
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableVariableValue1]
Meter=String
Text=[#AppPath2]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText1" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText1]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=#s_FontColor#
FontFace=#s_FontFace#
FontSize=#s_InputTextFontSize#
Disabled=
X=([VariableVariableValue1:X])
Y=([VariableVariableValue1:Y] + [#s_ValueYPadding])
H=[VariableVariableValue1:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#AppPath2]
Command1=[!WriteKeyValue "Variables" "AppPath2" "$UserInput$" "#SKINSPATH#vOS\@resources\Variables.inc"][!Refresh][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableVariableValue1 FontColor "[#s_FontColor]"][!UpdateMeter VariableVariableValue1][!Redraw]

[VariableIcon2]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle2]
Meter=String
Text=Application Path 3 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription2]
Meter=String
Text=Path to shortcut directory
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableVariableValue2]
Meter=String
Text=[#AppPath3]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText2" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText2]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=#s_FontColor#
FontFace=#s_FontFace#
FontSize=#s_InputTextFontSize#
Disabled=
X=([VariableVariableValue2:X])
Y=([VariableVariableValue2:Y] + [#s_ValueYPadding])
H=[VariableVariableValue2:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#AppPath3]
Command1=[!WriteKeyValue "Variables" "AppPath3" "$UserInput$" "#SKINSPATH#vOS\@resources\Variables.inc"][!Refresh][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableVariableValue2 FontColor "[#s_FontColor]"][!UpdateMeter VariableVariableValue2][!Redraw]

[VariableIcon3]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle3]
Meter=String
Text=AppBar Scale 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription3]
Meter=String
Text=Size scaling. 0.5 increments
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableVariableValue3]
Meter=String
Text=[#APPBARSCALE]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText3" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText3]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=#s_FontColor#
FontFace=#s_FontFace#
FontSize=#s_InputTextFontSize#
Disabled=
X=([VariableVariableValue3:X])
Y=([VariableVariableValue3:Y] + [#s_ValueYPadding])
H=[VariableVariableValue3:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#APPBARSCALE]
Command1=[!WriteKeyValue "Variables" "APPBARSCALE" "$UserInput$" "#SKINSPATH#vOS\@resources\Variables.inc"][!Refresh][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableVariableValue3 FontColor "[#s_FontColor]"][!UpdateMeter VariableVariableValue3][!Redraw]

[LastRightPanel]
Meter=String
Text=Last
FontColor=255,0,0,0
MeterStyle=LastItem | RightPanel

[ScrollDownRightPanel]
Measure=Calc
Formula=[#s_ScrollRightPanel] - [#s_ScrollSpeed]
IfCondition=([LastRightPanel:Y] > [#s_ScrollTreshold])
IfTrueAction=[!SetVariable "s_ScrollRightPanel" "[&ScrollDownRightPanel]"][!DisableMeasure "ScrollDownRightPanel"][!Update][!Redraw]
IfFalseAction=[!DisableMeasure "ScrollDownRightPanel"]
IfConditionMode=1
Disabled=1
DynamicVariables=1

[ScrollUpRightPanel]
Measure=Calc
Formula=[#s_ScrollRightPanel] + [#s_ScrollSpeed]
IfCondition=([FirstRightPanel:Y] < 0)
IfTrueAction=[!SetVariable "s_ScrollRightPanel" "[&ScrollUpRightPanel]"][!DisableMeasure "ScrollUpRightPanel"][!Update][!Redraw]
IfFalseAction=[!DisableMeasure "ScrollUpRightPanel"]
IfConditionMode=1
Disabled=1
DynamicVariables=1


