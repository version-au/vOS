[FirstRightPanel]
Meter=String
Text=First
FontColor=0,0,0,0
MeterStyle=FirstItem | RightPanel
Y=[#s_ScrollRightPanel]
[CategoryIcon12]
Meter=String
Text=[\xE73E]
MeterStyle=CategoryIcon | RightPanel

[Title12]
Meter=String
Text=Index Values 
MeterStyle=CategoryTitle | RightPanel
W=([#s_RightPanelW] - [CategoryIcon12:W])

[CategoryDescription12]
Meter=String
Text=Right click and select 'Display Sensors' 
MeterStyle=VarDescription | ThickDescription | RightPanel

[CategoryTitleSeparator12]
Meter=Image
MeterStyle=CategoryTitleSeparator | RightPanel

[VariableIcon0]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle0]
Meter=String
Text=CPU Avg Clock
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription0]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableVariableValue0]
Meter=String
Text=[#HWINFO1]
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
DefaultValue=[#HWINFO1]
Command1=[!WriteKeyValue "Variables" "HWINFO1" "$UserInput$" "#SKINSPATH#vOS\@resources\Variables.inc"][!Refresh][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableVariableValue0 FontColor "[#s_FontColor]"][!UpdateMeter VariableVariableValue0][!Redraw]

[VariableIcon1]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle1]
Meter=String
Text=CPU Temperature
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription1]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableVariableValue1]
Meter=String
Text=[#HWINFO2]
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
DefaultValue=[#HWINFO2]
Command1=[!WriteKeyValue "Variables" "HWINFO2" "$UserInput$" "#SKINSPATH#vOS\@resources\Variables.inc"][!Refresh][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableVariableValue1 FontColor "[#s_FontColor]"][!UpdateMeter VariableVariableValue1][!Redraw]

[VariableIcon2]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle2]
Meter=String
Text=CPU Voltage
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription2]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableVariableValue2]
Meter=String
Text=[#HWINFO3]
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
DefaultValue=[#HWINFO3]
Command1=[!WriteKeyValue "Variables" "HWINFO3" "$UserInput$" "#SKINSPATH#vOS\@resources\Variables.inc"][!Refresh][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableVariableValue2 FontColor "[#s_FontColor]"][!UpdateMeter VariableVariableValue2][!Redraw]

[VariableIcon3]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle3]
Meter=String
Text=CPU TDC
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription3]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableVariableValue3]
Meter=String
Text=[#HWINFO4]
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
DefaultValue=[#HWINFO4]
Command1=[!WriteKeyValue "Variables" "HWINFO4" "$UserInput$" "#SKINSPATH#vOS\@resources\Variables.inc"][!Refresh][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableVariableValue3 FontColor "[#s_FontColor]"][!UpdateMeter VariableVariableValue3][!Redraw]

[VariableIcon4]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle4]
Meter=String
Text=CPU Wattage
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription4]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableVariableValue4]
Meter=String
Text=[#HWINFO15]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText4" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText4]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=#s_FontColor#
FontFace=#s_FontFace#
FontSize=#s_InputTextFontSize#
Disabled=
X=([VariableVariableValue4:X])
Y=([VariableVariableValue4:Y] + [#s_ValueYPadding])
H=[VariableVariableValue4:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#HWINFO15]
Command1=[!WriteKeyValue "Variables" "HWINFO15" "$UserInput$" "#SKINSPATH#vOS\@resources\Variables.inc"][!Refresh][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableVariableValue4 FontColor "[#s_FontColor]"][!UpdateMeter VariableVariableValue4][!Redraw]

[VariableIcon5]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle5]
Meter=String
Text=Output Fans
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription5]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableVariableValue5]
Meter=String
Text=[#HWINFO5]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText5" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText5]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=#s_FontColor#
FontFace=#s_FontFace#
FontSize=#s_InputTextFontSize#
Disabled=
X=([VariableVariableValue5:X])
Y=([VariableVariableValue5:Y] + [#s_ValueYPadding])
H=[VariableVariableValue5:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#HWINFO5]
Command1=[!WriteKeyValue "Variables" "HWINFO5" "$UserInput$" "#SKINSPATH#vOS\@resources\Variables.inc"][!Refresh][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableVariableValue5 FontColor "[#s_FontColor]"][!UpdateMeter VariableVariableValue5][!Redraw]

[VariableIcon6]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle6]
Meter=String
Text=CPU Fans
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription6]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableVariableValue6]
Meter=String
Text=[#HWINFO6]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText6" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText6]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=#s_FontColor#
FontFace=#s_FontFace#
FontSize=#s_InputTextFontSize#
Disabled=
X=([VariableVariableValue6:X])
Y=([VariableVariableValue6:Y] + [#s_ValueYPadding])
H=[VariableVariableValue6:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#HWINFO6]
Command1=[!WriteKeyValue "Variables" "HWINFO6" "$UserInput$" "#SKINSPATH#vOS\@resources\Variables.inc"][!Refresh][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableVariableValue6 FontColor "[#s_FontColor]"][!UpdateMeter VariableVariableValue6][!Redraw]

[VariableIcon7]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle7]
Meter=String
Text=Input Fans
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription7]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableVariableValue7]
Meter=String
Text=[#HWINFO7]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText7" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText7]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=#s_FontColor#
FontFace=#s_FontFace#
FontSize=#s_InputTextFontSize#
Disabled=
X=([VariableVariableValue7:X])
Y=([VariableVariableValue7:Y] + [#s_ValueYPadding])
H=[VariableVariableValue7:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#HWINFO7]
Command1=[!WriteKeyValue "Variables" "HWINFO7" "$UserInput$" "#SKINSPATH#vOS\@resources\Variables.inc"][!Refresh][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableVariableValue7 FontColor "[#s_FontColor]"][!UpdateMeter VariableVariableValue7][!Redraw]

[VariableIcon8]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle8]
Meter=String
Text=GPU Fans
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription8]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableVariableValue8]
Meter=String
Text=[#HWINFO8]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText8" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText8]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=#s_FontColor#
FontFace=#s_FontFace#
FontSize=#s_InputTextFontSize#
Disabled=
X=([VariableVariableValue8:X])
Y=([VariableVariableValue8:Y] + [#s_ValueYPadding])
H=[VariableVariableValue8:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#HWINFO8]
Command1=[!WriteKeyValue "Variables" "HWINFO8" "$UserInput$" "#SKINSPATH#vOS\@resources\Variables.inc"][!Refresh][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableVariableValue8 FontColor "[#s_FontColor]"][!UpdateMeter VariableVariableValue8][!Redraw]

[VariableIcon9]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle9]
Meter=String
Text=AIO Pump
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription9]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableVariableValue9]
Meter=String
Text=[#HWINFO9]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText9" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText9]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=#s_FontColor#
FontFace=#s_FontFace#
FontSize=#s_InputTextFontSize#
Disabled=
X=([VariableVariableValue9:X])
Y=([VariableVariableValue9:Y] + [#s_ValueYPadding])
H=[VariableVariableValue9:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#HWINFO9]
Command1=[!WriteKeyValue "Variables" "HWINFO9" "$UserInput$" "#SKINSPATH#vOS\@resources\Variables.inc"][!Refresh][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableVariableValue9 FontColor "[#s_FontColor]"][!UpdateMeter VariableVariableValue9][!Redraw]

[VariableIcon10]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle10]
Meter=String
Text=Ram Stick 1 Temp
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription10]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableVariableValue10]
Meter=String
Text=[#HWINFO10]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText10" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText10]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=#s_FontColor#
FontFace=#s_FontFace#
FontSize=#s_InputTextFontSize#
Disabled=
X=([VariableVariableValue10:X])
Y=([VariableVariableValue10:Y] + [#s_ValueYPadding])
H=[VariableVariableValue10:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#HWINFO10]
Command1=[!WriteKeyValue "Variables" "HWINFO10" "$UserInput$" "#SKINSPATH#vOS\@resources\Variables.inc"][!Refresh][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableVariableValue10 FontColor "[#s_FontColor]"][!UpdateMeter VariableVariableValue10][!Redraw]

[VariableIcon11]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle11]
Meter=String
Text=Ram Stick 2 Temp
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription11]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableVariableValue11]
Meter=String
Text=[#HWINFO11]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText11" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText11]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=#s_FontColor#
FontFace=#s_FontFace#
FontSize=#s_InputTextFontSize#
Disabled=
X=([VariableVariableValue11:X])
Y=([VariableVariableValue11:Y] + [#s_ValueYPadding])
H=[VariableVariableValue11:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#HWINFO11]
Command1=[!WriteKeyValue "Variables" "HWINFO11" "$UserInput$" "#SKINSPATH#vOS\@resources\Variables.inc"][!Refresh][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableVariableValue11 FontColor "[#s_FontColor]"][!UpdateMeter VariableVariableValue11][!Redraw]

[VariableIcon12]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle12]
Meter=String
Text=Ram Stick 3 Temp
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription12]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableVariableValue12]
Meter=String
Text=[#HWINFO12]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText12" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText12]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=#s_FontColor#
FontFace=#s_FontFace#
FontSize=#s_InputTextFontSize#
Disabled=
X=([VariableVariableValue12:X])
Y=([VariableVariableValue12:Y] + [#s_ValueYPadding])
H=[VariableVariableValue12:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#HWINFO12]
Command1=[!WriteKeyValue "Variables" "HWINFO12" "$UserInput$" "#SKINSPATH#vOS\@resources\Variables.inc"][!Refresh][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableVariableValue12 FontColor "[#s_FontColor]"][!UpdateMeter VariableVariableValue12][!Redraw]

[VariableIcon13]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle13]
Meter=String
Text=Ram Stick 4 Temp
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription13]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableVariableValue13]
Meter=String
Text=[#HWINFO13]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText13" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText13]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=#s_FontColor#
FontFace=#s_FontFace#
FontSize=#s_InputTextFontSize#
Disabled=
X=([VariableVariableValue13:X])
Y=([VariableVariableValue13:Y] + [#s_ValueYPadding])
H=[VariableVariableValue13:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#HWINFO13]
Command1=[!WriteKeyValue "Variables" "HWINFO13" "$UserInput$" "#SKINSPATH#vOS\@resources\Variables.inc"][!Refresh][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableVariableValue13 FontColor "[#s_FontColor]"][!UpdateMeter VariableVariableValue13][!Redraw]

[VariableIcon14]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle14]
Meter=String
Text=GPU Temperature
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription14]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableVariableValue14]
Meter=String
Text=[#HWINFO14]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText14" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText14]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=#s_FontColor#
FontFace=#s_FontFace#
FontSize=#s_InputTextFontSize#
Disabled=
X=([VariableVariableValue14:X])
Y=([VariableVariableValue14:Y] + [#s_ValueYPadding])
H=[VariableVariableValue14:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#HWINFO14]
Command1=[!WriteKeyValue "Variables" "HWINFO14" "$UserInput$" "#SKINSPATH#vOS\@resources\Variables.inc"][!Refresh][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableVariableValue14 FontColor "[#s_FontColor]"][!UpdateMeter VariableVariableValue14][!Redraw]

[VariableIcon15]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle15]
Meter=String
Text=GPU Amps
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription15]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableVariableValue15]
Meter=String
Text=[#HWINFO16]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText15" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText15]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=#s_FontColor#
FontFace=#s_FontFace#
FontSize=#s_InputTextFontSize#
Disabled=
X=([VariableVariableValue15:X])
Y=([VariableVariableValue15:Y] + [#s_ValueYPadding])
H=[VariableVariableValue15:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#HWINFO16]
Command1=[!WriteKeyValue "Variables" "HWINFO16" "$UserInput$" "#SKINSPATH#vOS\@resources\Variables.inc"][!Refresh][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableVariableValue15 FontColor "[#s_FontColor]"][!UpdateMeter VariableVariableValue15][!Redraw]

[VariableIcon16]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle16]
Meter=String
Text=GPU Wattage
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription16]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableVariableValue16]
Meter=String
Text=[#HWINFO17]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText16" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText16]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=#s_FontColor#
FontFace=#s_FontFace#
FontSize=#s_InputTextFontSize#
Disabled=
X=([VariableVariableValue16:X])
Y=([VariableVariableValue16:Y] + [#s_ValueYPadding])
H=[VariableVariableValue16:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#HWINFO17]
Command1=[!WriteKeyValue "Variables" "HWINFO17" "$UserInput$" "#SKINSPATH#vOS\@resources\Variables.inc"][!Refresh][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableVariableValue16 FontColor "[#s_FontColor]"][!UpdateMeter VariableVariableValue16][!Redraw]

[VariableIcon17]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle17]
Meter=String
Text=GPU Clock
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription17]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableVariableValue17]
Meter=String
Text=[#HWINFO18]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText17" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText17]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=#s_FontColor#
FontFace=#s_FontFace#
FontSize=#s_InputTextFontSize#
Disabled=
X=([VariableVariableValue17:X])
Y=([VariableVariableValue17:Y] + [#s_ValueYPadding])
H=[VariableVariableValue17:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#HWINFO18]
Command1=[!WriteKeyValue "Variables" "HWINFO18" "$UserInput$" "#SKINSPATH#vOS\@resources\Variables.inc"][!Refresh][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableVariableValue17 FontColor "[#s_FontColor]"][!UpdateMeter VariableVariableValue17][!Redraw]

[VariableIcon18]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle18]
Meter=String
Text=GPU Memory Clock
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription18]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableVariableValue18]
Meter=String
Text=[#HWINFO19]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText18" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText18]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=#s_FontColor#
FontFace=#s_FontFace#
FontSize=#s_InputTextFontSize#
Disabled=
X=([VariableVariableValue18:X])
Y=([VariableVariableValue18:Y] + [#s_ValueYPadding])
H=[VariableVariableValue18:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#HWINFO19]
Command1=[!WriteKeyValue "Variables" "HWINFO19" "$UserInput$" "#SKINSPATH#vOS\@resources\Variables.inc"][!Refresh][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableVariableValue18 FontColor "[#s_FontColor]"][!UpdateMeter VariableVariableValue18][!Redraw]

[VariableIcon19]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle19]
Meter=String
Text=GPU Memory Usage
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription19]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableVariableValue19]
Meter=String
Text=[#HWINFO20]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText19" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText19]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=#s_FontColor#
FontFace=#s_FontFace#
FontSize=#s_InputTextFontSize#
Disabled=
X=([VariableVariableValue19:X])
Y=([VariableVariableValue19:Y] + [#s_ValueYPadding])
H=[VariableVariableValue19:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#HWINFO20]
Command1=[!WriteKeyValue "Variables" "HWINFO20" "$UserInput$" "#SKINSPATH#vOS\@resources\Variables.inc"][!Refresh][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableVariableValue19 FontColor "[#s_FontColor]"][!UpdateMeter VariableVariableValue19][!Redraw]

[VariableIcon20]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle20]
Meter=String
Text=Network Download Total
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription20]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableVariableValue20]
Meter=String
Text=[#HWINFO21]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText20" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText20]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=#s_FontColor#
FontFace=#s_FontFace#
FontSize=#s_InputTextFontSize#
Disabled=
X=([VariableVariableValue20:X])
Y=([VariableVariableValue20:Y] + [#s_ValueYPadding])
H=[VariableVariableValue20:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#HWINFO21]
Command1=[!WriteKeyValue "Variables" "HWINFO21" "$UserInput$" "#SKINSPATH#vOS\@resources\Variables.inc"][!Refresh][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableVariableValue20 FontColor "[#s_FontColor]"][!UpdateMeter VariableVariableValue20][!Redraw]

[VariableIcon21]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle21]
Meter=String
Text=Network Upload Total
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription21]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableVariableValue21]
Meter=String
Text=[#HWINFO22]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText21" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText21]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=#s_FontColor#
FontFace=#s_FontFace#
FontSize=#s_InputTextFontSize#
Disabled=
X=([VariableVariableValue21:X])
Y=([VariableVariableValue21:Y] + [#s_ValueYPadding])
H=[VariableVariableValue21:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#HWINFO22]
Command1=[!WriteKeyValue "Variables" "HWINFO22" "$UserInput$" "#SKINSPATH#vOS\@resources\Variables.inc"][!Refresh][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableVariableValue21 FontColor "[#s_FontColor]"][!UpdateMeter VariableVariableValue21][!Redraw]

[VariableIcon22]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle22]
Meter=String
Text=RTSS FPS
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription22]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableVariableValue22]
Meter=String
Text=[#HWINFO23]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText22" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText22]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=#s_FontColor#
FontFace=#s_FontFace#
FontSize=#s_InputTextFontSize#
Disabled=
X=([VariableVariableValue22:X])
Y=([VariableVariableValue22:Y] + [#s_ValueYPadding])
H=[VariableVariableValue22:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#HWINFO23]
Command1=[!WriteKeyValue "Variables" "HWINFO23" "$UserInput$" "#SKINSPATH#vOS\@resources\Variables.inc"][!Refresh][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableVariableValue22 FontColor "[#s_FontColor]"][!UpdateMeter VariableVariableValue22][!Redraw]

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


