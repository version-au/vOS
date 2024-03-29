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
Text=AppGadget 
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
Text=[#AppPath4]
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
DefaultValue=[#AppPath4]
Command1=[!WriteKeyValue "Variables" "AppPath4" "$UserInput$" "#SKINSPATH#vOS\@resources\Variables.inc"][!Refresh][#s_OnChangeAction]
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
Text=[#AppPath5]
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
DefaultValue=[#AppPath5]
Command1=[!WriteKeyValue "Variables" "AppPath5" "$UserInput$" "#SKINSPATH#vOS\@resources\Variables.inc"][!Refresh][#s_OnChangeAction]
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
Text=[#AppPath6]
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
DefaultValue=[#AppPath6]
Command1=[!WriteKeyValue "Variables" "AppPath6" "$UserInput$" "#SKINSPATH#vOS\@resources\Variables.inc"][!Refresh][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableVariableValue2 FontColor "[#s_FontColor]"][!UpdateMeter VariableVariableValue2][!Redraw]

[VariableIcon3]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle3]
Meter=String
Text=AppGadget Scale
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription3]
Meter=String
Text=Size scaling. 0.5 increments
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableVariableValue3]
Meter=String
Text=[#APPGADGETSCALE]
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
DefaultValue=[#APPGADGETSCALE]
Command1=[!WriteKeyValue "Variables" "APPGADGETSCALE" "$UserInput$" "#SKINSPATH#vOS\@resources\Variables.inc"][!Refresh][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableVariableValue3 FontColor "[#s_FontColor]"][!UpdateMeter VariableVariableValue3][!Redraw]

[VariableIcon4]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle4]
Meter=String
Text=AppGadget 1 Icon Tint
MeterStyle=VarTitle | RightPanel
[VariableDescription4]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel

[ToggleOff4]
Meter=Shape
Shape=Line 0,0,([#s_ToggleLength]),0 | Extend Line
Shape2=Ellipse ([#s_TogglePadding]/2),0,(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2),(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2) | Extend Circle
Circle=StrokeWidth 0 | Fill Color [#s_RightPanelBackgroundColor]
Line=StrokeWidth [#s_ToggleSize] | Stroke Color [#s_FontColor] | StrokeStartCap Round | StrokeEndCap Round
Hidden=([#EnableGS1])
Y=([VariableDescription4:Y] + [VariableDescription4:H] + ([#s_ToggleSize] / 2) + [#s_ValueYPadding])
MeterStyle=VarToggleValue | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables "EnableGS1" 1 "#SKINSPATH#vOS\@resources\Variables.inc"][!SetVariable "EnableGS1" 1][!WriteKeyValue Variables "APPGADGETTINT1" "" "#@#Variables.inc"][!Update][!Redraw][#s_OnChangeAction]

[ToggleOn4]
Meter=Shape
Shape=Line 0,0,([#s_ToggleLength]),0 | Extend Line
Shape2=Ellipse (([#s_ToggleLength]) - ([#s_TogglePadding]/2)),0,(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2),(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2) | Extend Circle
Circle=StrokeWidth 0 | Fill Color [#s_RightPanelBackgroundColor]
Line=StrokeWidth [#s_ToggleSize] | Stroke Color [#s_ToggleActiveColor] | StrokeStartCap Round | StrokeEndCap Round
Hidden=([#EnableGS1] - 1)
Y=([VariableDescription4:Y] + [VariableDescription4:H] + ([#s_ToggleSize] / 2) + [#s_ValueYPadding])
MeterStyle=VarToggleValue | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables "EnableGS1" 0 "#SKINSPATH#vOS\@resources\Variables.inc"][!SetVariable "EnableGS1" 0][!WriteKeyValue Variables "APPGADGETTINT1" "#*LINECOLOR1*#" "#@#Variables.inc"][!Update][!Redraw][#s_OnChangeAction]

[ClearFloat4]
Meter=Image
W=[#s_RightPanelW]
H=([#s_ValueYPadding] + [#s_ToggleSize] + [#s_ValueYPadding])
MeterStyle=RightPanel
Y=([VariableDescription4:Y] + [VariableDescription4:H])
DynamicVariables=1

[VariableIcon5]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle5]
Meter=String
Text=AppGadget 2 Icon Tint
MeterStyle=VarTitle | RightPanel
[VariableDescription5]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel

[ToggleOff5]
Meter=Shape
Shape=Line 0,0,([#s_ToggleLength]),0 | Extend Line
Shape2=Ellipse ([#s_TogglePadding]/2),0,(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2),(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2) | Extend Circle
Circle=StrokeWidth 0 | Fill Color [#s_RightPanelBackgroundColor]
Line=StrokeWidth [#s_ToggleSize] | Stroke Color [#s_FontColor] | StrokeStartCap Round | StrokeEndCap Round
Hidden=([#EnableGS2])
Y=([VariableDescription5:Y] + [VariableDescription5:H] + ([#s_ToggleSize] / 2) + [#s_ValueYPadding])
MeterStyle=VarToggleValue | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables "EnableGS2" 1 "#SKINSPATH#vOS\@resources\Variables.inc"][!SetVariable "EnableGS2" 1][!WriteKeyValue Variables "APPGADGETTINT2" "" "#@#Variables.inc"][!Update][!Redraw][#s_OnChangeAction]

[ToggleOn5]
Meter=Shape
Shape=Line 0,0,([#s_ToggleLength]),0 | Extend Line
Shape2=Ellipse (([#s_ToggleLength]) - ([#s_TogglePadding]/2)),0,(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2),(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2) | Extend Circle
Circle=StrokeWidth 0 | Fill Color [#s_RightPanelBackgroundColor]
Line=StrokeWidth [#s_ToggleSize] | Stroke Color [#s_ToggleActiveColor] | StrokeStartCap Round | StrokeEndCap Round
Hidden=([#EnableGS2] - 1)
Y=([VariableDescription5:Y] + [VariableDescription5:H] + ([#s_ToggleSize] / 2) + [#s_ValueYPadding])
MeterStyle=VarToggleValue | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables "EnableGS2" 0 "#SKINSPATH#vOS\@resources\Variables.inc"][!SetVariable "EnableGS2" 0][!WriteKeyValue Variables "APPGADGETTINT2" "#*LINECOLOR1*#" "#@#Variables.inc"][!Update][!Redraw][#s_OnChangeAction]

[ClearFloat5]
Meter=Image
W=[#s_RightPanelW]
H=([#s_ValueYPadding] + [#s_ToggleSize] + [#s_ValueYPadding])
MeterStyle=RightPanel
Y=([VariableDescription5:Y] + [VariableDescription5:H])
DynamicVariables=1

[VariableIcon6]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle6]
Meter=String
Text=AppGadget 3 Icon Tint
MeterStyle=VarTitle | RightPanel
[VariableDescription6]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel

[ToggleOff6]
Meter=Shape
Shape=Line 0,0,([#s_ToggleLength]),0 | Extend Line
Shape2=Ellipse ([#s_TogglePadding]/2),0,(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2),(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2) | Extend Circle
Circle=StrokeWidth 0 | Fill Color [#s_RightPanelBackgroundColor]
Line=StrokeWidth [#s_ToggleSize] | Stroke Color [#s_FontColor] | StrokeStartCap Round | StrokeEndCap Round
Hidden=([#EnableGS3])
Y=([VariableDescription6:Y] + [VariableDescription6:H] + ([#s_ToggleSize] / 2) + [#s_ValueYPadding])
MeterStyle=VarToggleValue | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables "EnableGS3" 1 "#SKINSPATH#vOS\@resources\Variables.inc"][!SetVariable "EnableGS3" 1][!Update][!Redraw][#s_OnChangeAction]

[ToggleOn6]
Meter=Shape
Shape=Line 0,0,([#s_ToggleLength]),0 | Extend Line
Shape2=Ellipse (([#s_ToggleLength]) - ([#s_TogglePadding]/2)),0,(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2),(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2) | Extend Circle
Circle=StrokeWidth 0 | Fill Color [#s_RightPanelBackgroundColor]
Line=StrokeWidth [#s_ToggleSize] | Stroke Color [#s_ToggleActiveColor] | StrokeStartCap Round | StrokeEndCap Round
Hidden=([#EnableGS3] - 1)
Y=([VariableDescription6:Y] + [VariableDescription6:H] + ([#s_ToggleSize] / 2) + [#s_ValueYPadding])
MeterStyle=VarToggleValue | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables "EnableGS3" 0 "#SKINSPATH#vOS\@resources\Variables.inc"][!SetVariable "EnableGS3" 0][!Update][!Redraw][#s_OnChangeAction]

[ClearFloat6]
Meter=Image
W=[#s_RightPanelW]
H=([#s_ValueYPadding] + [#s_ToggleSize] + [#s_ValueYPadding])
MeterStyle=RightPanel
Y=([VariableDescription6:Y] + [VariableDescription6:H])
DynamicVariables=1

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


