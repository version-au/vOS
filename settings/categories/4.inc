[FirstRightPanel]
Meter=String
Text=First
FontColor=0,0,0,0
MeterStyle=FirstItem | RightPanel
Y=[#s_ScrollRightPanel]
[CategoryIcon4]
Meter=String
Text=[\xE73E]
MeterStyle=CategoryIcon | RightPanel

[Title4]
Meter=String
Text=Text Colors 
MeterStyle=CategoryTitle | RightPanel
W=([#s_RightPanelW] - [CategoryIcon4:W])

[CategoryDescription4]
Meter=String
Text=
MeterStyle=VarDescription | ThickDescription | RightPanel

[CategoryTitleSeparator4]
Meter=Image
MeterStyle=CategoryTitleSeparator | RightPanel

[VariableIcon0]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle0Title]
Meter=String
Text=Color 1 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription0]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[ColorVariableValue0]
Meter=Shape
Shape=Ellipse [#s_ColorSize],[#s_ColorSize],[#s_ColorSize],[#s_ColorSize] | Fill Color [#TEXTCHANGE1] | StrokeWidth [#s_ColorStrokeWidth] | Extend Outline
Outline=Stroke Color [#s_ColorStrokeColor]
MeterStyle=VarColorValue | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables baseColor "#textcolor1#" "#CURRENTPATH#\ColorPickerPlus\ColorPickerPlus.ini"][!WriteKeyValue Variables colorToChange "textcolor1" "#CURRENTPATH#\ColorPickerPlus\ColorPickerPlus.ini"][!ActivateConfig "#CURRENTCONFIG#\ColorPickerPlus"][!WriteKeyValue Variables "TEXTCHANGE1" "#*TEXTCOLOR1*#" "#@#Variables.inc"]
ToolTipTitle=Color Information
ToolTipText=Text Color 1#CRLF#Main Large Dark
Hidden=
[StringVariableValue0]
Meter=String
Text=[#TEXTCHANGE1]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables baseColor "#textcolor1#" "#CURRENTPATH#\ColorPickerPlus\ColorPickerPlus.ini"][!WriteKeyValue Variables colorToChange "textcolor1" "#CURRENTPATH#\ColorPickerPlus\ColorPickerPlus.ini"][!ActivateConfig "#CURRENTCONFIG#\ColorPickerPlus"][!WriteKeyValue Variables "TEXTCHANGE1" "#*TEXTCOLOR1*#" "#@#Variables.inc"]
ToolTipTitle=Color Information
ToolTipText=Text Color 1#CRLF#Main Large Dark
Hidden=
[RainRGB0]
Measure=Plugin
Plugin=RunCommand
Disabled=
Program=""#CURRENTPATH#addons\RainRGB4RunCommand.exe""
Parameter=""VarName=TEXTCHANGE1" "FileName=#SKINSPATH#vOS\@resources\Variables.inc" "RefreshConfig=-1""
OutputType=ANSI
FinishAction=[!Refresh][#s_OnChangeAction]
[VariableIcon1]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle1Title]
Meter=String
Text=Color 2 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription1]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[ColorVariableValue1]
Meter=Shape
Shape=Ellipse [#s_ColorSize],[#s_ColorSize],[#s_ColorSize],[#s_ColorSize] | Fill Color [#TEXTCHANGE2] | StrokeWidth [#s_ColorStrokeWidth] | Extend Outline
Outline=Stroke Color [#s_ColorStrokeColor]
MeterStyle=VarColorValue | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables baseColor "#textcolor2#" "#CURRENTPATH#\ColorPickerPlus\ColorPickerPlus.ini"][!WriteKeyValue Variables colorToChange "textcolor2" "#CURRENTPATH#\ColorPickerPlus\ColorPickerPlus.ini"][!ActivateConfig "#CURRENTCONFIG#\ColorPickerPlus"][!WriteKeyValue Variables "TEXTCHANGE2" "#*TEXTCOLOR2*#" "#@#Variables.inc"]
ToolTipTitle=Color Information
ToolTipText=Text Color 2#CRLF#Main Large Light
Hidden=
[StringVariableValue1]
Meter=String
Text=[#TEXTCHANGE2]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables baseColor "#textcolor2#" "#CURRENTPATH#\ColorPickerPlus\ColorPickerPlus.ini"][!WriteKeyValue Variables colorToChange "textcolor2" "#CURRENTPATH#\ColorPickerPlus\ColorPickerPlus.ini"][!ActivateConfig "#CURRENTCONFIG#\ColorPickerPlus"][!WriteKeyValue Variables "TEXTCHANGE2" "#*TEXTCOLOR2*#" "#@#Variables.inc"]
ToolTipTitle=Color Information
ToolTipText=Text Color 2#CRLF#Main Large Light
Hidden=
[RainRGB1]
Measure=Plugin
Plugin=RunCommand
Disabled=
Program=""#CURRENTPATH#addons\RainRGB4RunCommand.exe""
Parameter=""VarName=TEXTCHANGE2" "FileName=#SKINSPATH#vOS\@resources\Variables.inc" "RefreshConfig=-1""
OutputType=ANSI
FinishAction=[!Refresh][#s_OnChangeAction]
[VariableIcon2]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle2Title]
Meter=String
Text=Color 3 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription2]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[ColorVariableValue2]
Meter=Shape
Shape=Ellipse [#s_ColorSize],[#s_ColorSize],[#s_ColorSize],[#s_ColorSize] | Fill Color [#TEXTCHANGE3] | StrokeWidth [#s_ColorStrokeWidth] | Extend Outline
Outline=Stroke Color [#s_ColorStrokeColor]
MeterStyle=VarColorValue | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables baseColor "#textcolor3#" "#CURRENTPATH#\ColorPickerPlus\ColorPickerPlus.ini"][!WriteKeyValue Variables colorToChange "textcolor3" "#CURRENTPATH#\ColorPickerPlus\ColorPickerPlus.ini"][!ActivateConfig "#CURRENTCONFIG#\ColorPickerPlus"][!WriteKeyValue Variables "TEXTCHANGE3" "#*TEXTCOLOR3*#" "#@#Variables.inc"]
ToolTipTitle=Color Information
ToolTipText=Text Color 3#CRLF#misc
Hidden=
[StringVariableValue2]
Meter=String
Text=[#TEXTCHANGE3]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables baseColor "#textcolor3#" "#CURRENTPATH#\ColorPickerPlus\ColorPickerPlus.ini"][!WriteKeyValue Variables colorToChange "textcolor3" "#CURRENTPATH#\ColorPickerPlus\ColorPickerPlus.ini"][!ActivateConfig "#CURRENTCONFIG#\ColorPickerPlus"][!WriteKeyValue Variables "TEXTCHANGE3" "#*TEXTCOLOR3*#" "#@#Variables.inc"]
ToolTipTitle=Color Information
ToolTipText=Text Color 3#CRLF#misc
Hidden=
[RainRGB2]
Measure=Plugin
Plugin=RunCommand
Disabled=
Program=""#CURRENTPATH#addons\RainRGB4RunCommand.exe""
Parameter=""VarName=TEXTCHANGE3" "FileName=#SKINSPATH#vOS\@resources\Variables.inc" "RefreshConfig=-1""
OutputType=ANSI
FinishAction=[!Refresh][#s_OnChangeAction]
[VariableIcon3]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle3Title]
Meter=String
Text=Color 4 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription3]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[ColorVariableValue3]
Meter=Shape
Shape=Ellipse [#s_ColorSize],[#s_ColorSize],[#s_ColorSize],[#s_ColorSize] | Fill Color [#TEXTCHANGE4] | StrokeWidth [#s_ColorStrokeWidth] | Extend Outline
Outline=Stroke Color [#s_ColorStrokeColor]
MeterStyle=VarColorValue | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables baseColor "#textcolor4#" "#CURRENTPATH#\ColorPickerPlus\ColorPickerPlus.ini"][!WriteKeyValue Variables colorToChange "textcolor4" "#CURRENTPATH#\ColorPickerPlus\ColorPickerPlus.ini"][!ActivateConfig "#CURRENTCONFIG#\ColorPickerPlus"][!WriteKeyValue Variables "TEXTCHANGE4" "#*TEXTCOLOR4*#" "#@#Variables.inc"]
ToolTipTitle=Color Information
ToolTipText=Text Color 4#CRLF#misc small
Hidden=
[StringVariableValue3]
Meter=String
Text=[#TEXTCHANGE4]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables baseColor "#textcolor4#" "#CURRENTPATH#\ColorPickerPlus\ColorPickerPlus.ini"][!WriteKeyValue Variables colorToChange "textcolor4" "#CURRENTPATH#\ColorPickerPlus\ColorPickerPlus.ini"][!ActivateConfig "#CURRENTCONFIG#\ColorPickerPlus"][!WriteKeyValue Variables "TEXTCHANGE4" "#*TEXTCOLOR4*#" "#@#Variables.inc"]
ToolTipTitle=Color Information
ToolTipText=Text Color 4#CRLF#misc small
Hidden=
[RainRGB3]
Measure=Plugin
Plugin=RunCommand
Disabled=
Program=""#CURRENTPATH#addons\RainRGB4RunCommand.exe""
Parameter=""VarName=TEXTCHANGE4" "FileName=#SKINSPATH#vOS\@resources\Variables.inc" "RefreshConfig=-1""
OutputType=ANSI
FinishAction=[!Refresh][#s_OnChangeAction]
[LastRightPanel]
Meter=String
Text=Last
FontColor=255,0,0,0
MeterStyle=LastItem | RightPanel

[VariableIcon99]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle1]
Meter=String
Text=Reset Text color
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription1]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue1]
Meter=String
Text=Click to Reset
MeterStyle=VarStringValue | Link1 | RightPanel
Hidden=
LeftMouseUpAction=[!WriteKeyValue Variables "TEXTCHANGE1" "#*TEXTMAINDARK*#" "#@#Variables.inc"][!WriteKeyValue Variables "TEXTCHANGE2" "#*TEXTMAINLIGHT*#" "#@#Variables.inc"][!WriteKeyValue Variables "TEXTCHANGE3" "#*TEXTMISC*#" "#@#Variables.inc"][!WriteKeyValue Variables "TEXTCHANGE4" "#*TEXTSMALLCOLOR*#" "#@#Variables.inc"][!WriteKeyValue Variables "FONT" "Roboto Medium" "#@#Variables.inc"][!RefreshApp]
ToolTipText="Click to reset text color back to presets."

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


