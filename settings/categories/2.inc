[FirstRightPanel]
Meter=String
Text=First
FontColor=0,0,0,0
MeterStyle=FirstItem | RightPanel
Y=[#s_ScrollRightPanel]
[CategoryIcon2]
Meter=String
Text=[\xE73E]
MeterStyle=CategoryIcon | RightPanel

[Title2]
Meter=String
Text=Bar/Gadget Colors 
MeterStyle=CategoryTitle | RightPanel
W=([#s_RightPanelW] - [CategoryIcon2:W])

[CategoryDescription2]
Meter=String
Text=
MeterStyle=VarDescription | ThickDescription | RightPanel

[CategoryTitleSeparator2]
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
Shape=Ellipse [#s_ColorSize],[#s_ColorSize],[#s_ColorSize],[#s_ColorSize] | Fill Color [#COLOR1] | StrokeWidth [#s_ColorStrokeWidth] | Extend Outline
Outline=Stroke Color [#s_ColorStrokeColor]
MeterStyle=VarColorValue | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables baseColor "#color1#" "#CURRENTPATH#\ColorPickerPlus\ColorPickerPlus.ini"][!WriteKeyValue Variables colorToChange "color1" "#CURRENTPATH#\ColorPickerPlus\ColorPickerPlus.ini"][!ActivateConfig "#CURRENTCONFIG#\ColorPickerPlus"]
ToolTipTitle=Color Information
ToolTipText=Bar Background#CRLF#Gradient Color 2
Hidden=
[StringVariableValue0]
Meter=String
Text=[#COLOR1]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables baseColor "#color1#" "#CURRENTPATH#\ColorPickerPlus\ColorPickerPlus.ini"][!WriteKeyValue Variables colorToChange "color1" "#CURRENTPATH#\ColorPickerPlus\ColorPickerPlus.ini"][!ActivateConfig "#CURRENTCONFIG#\ColorPickerPlus"]
ToolTipTitle=Color Information
ToolTipText=Bar Background#CRLF#Gradient Color 2
Hidden=
[RainRGB0]
Measure=Plugin
Plugin=RunCommand
Disabled=
Program=""#CURRENTPATH#addons\RainRGB4RunCommand.exe""
Parameter=""VarName=COLOR1" "FileName=#SKINSPATH#vOS\@resources\Variables.inc" "RefreshConfig=-1""
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
Shape=Ellipse [#s_ColorSize],[#s_ColorSize],[#s_ColorSize],[#s_ColorSize] | Fill Color [#COLOR2] | StrokeWidth [#s_ColorStrokeWidth] | Extend Outline
Outline=Stroke Color [#s_ColorStrokeColor]
MeterStyle=VarColorValue | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables baseColor "#color2#" "#CURRENTPATH#\ColorPickerPlus\ColorPickerPlus.ini"][!WriteKeyValue Variables colorToChange "color2" "#CURRENTPATH#\ColorPickerPlus\ColorPickerPlus.ini"][!ActivateConfig "#CURRENTCONFIG#\ColorPickerPlus"]
ToolTipTitle=Color Information
ToolTipText=Meter Stroke#CRLF#Top Process 2#CRLF#Small Text
Hidden=
[StringVariableValue1]
Meter=String
Text=[#COLOR2]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables baseColor "#color2#" "#CURRENTPATH#\ColorPickerPlus\ColorPickerPlus.ini"][!WriteKeyValue Variables colorToChange "color2" "#CURRENTPATH#\ColorPickerPlus\ColorPickerPlus.ini"][!ActivateConfig "#CURRENTCONFIG#\ColorPickerPlus"]
ToolTipTitle=Color Information
ToolTipText=Meter Stroke#CRLF#Top Process 2#CRLF#Small Text
Hidden=
[RainRGB1]
Measure=Plugin
Plugin=RunCommand
Disabled=
Program=""#CURRENTPATH#addons\RainRGB4RunCommand.exe""
Parameter=""VarName=COLOR2" "FileName=#SKINSPATH#vOS\@resources\Variables.inc" "RefreshConfig=-1""
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
Shape=Ellipse [#s_ColorSize],[#s_ColorSize],[#s_ColorSize],[#s_ColorSize] | Fill Color [#COLOR3] | StrokeWidth [#s_ColorStrokeWidth] | Extend Outline
Outline=Stroke Color [#s_ColorStrokeColor]
MeterStyle=VarColorValue | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables baseColor "#color3#" "#CURRENTPATH#\ColorPickerPlus\ColorPickerPlus.ini"][!WriteKeyValue Variables colorToChange "color3" "#CURRENTPATH#\ColorPickerPlus\ColorPickerPlus.ini"][!ActivateConfig "#CURRENTCONFIG#\ColorPickerPlus"]
ToolTipTitle=Color Information
ToolTipText=Gradient Color 1
Hidden=
[StringVariableValue2]
Meter=String
Text=[#COLOR3]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables baseColor "#color3#" "#CURRENTPATH#\ColorPickerPlus\ColorPickerPlus.ini"][!WriteKeyValue Variables colorToChange "color3" "#CURRENTPATH#\ColorPickerPlus\ColorPickerPlus.ini"][!ActivateConfig "#CURRENTCONFIG#\ColorPickerPlus"]
ToolTipTitle=Color Information
ToolTipText=Gradient Color 1
Hidden=
[RainRGB2]
Measure=Plugin
Plugin=RunCommand
Disabled=
Program=""#CURRENTPATH#addons\RainRGB4RunCommand.exe""
Parameter=""VarName=COLOR3" "FileName=#SKINSPATH#vOS\@resources\Variables.inc" "RefreshConfig=-1""
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
Shape=Ellipse [#s_ColorSize],[#s_ColorSize],[#s_ColorSize],[#s_ColorSize] | Fill Color [#COLOR4] | StrokeWidth [#s_ColorStrokeWidth] | Extend Outline
Outline=Stroke Color [#s_ColorStrokeColor]
MeterStyle=VarColorValue | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables baseColor "#color4#" "#CURRENTPATH#\ColorPickerPlus\ColorPickerPlus.ini"][!WriteKeyValue Variables colorToChange "color4" "#CURRENTPATH#\ColorPickerPlus\ColorPickerPlus.ini"][!ActivateConfig "#CURRENTCONFIG#\ColorPickerPlus"]
ToolTipTitle=Color Information
ToolTipText=Meter Line High#CRLF#Top Process 1#CRLF#HDD Used#CRLF#Main Text
Hidden=
[StringVariableValue3]
Meter=String
Text=[#COLOR4]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables baseColor "#color4#" "#CURRENTPATH#\ColorPickerPlus\ColorPickerPlus.ini"][!WriteKeyValue Variables colorToChange "color4" "#CURRENTPATH#\ColorPickerPlus\ColorPickerPlus.ini"][!ActivateConfig "#CURRENTCONFIG#\ColorPickerPlus"]
ToolTipTitle=Color Information
ToolTipText=Meter Line High#CRLF#Top Process 1#CRLF#HDD Used#CRLF#Main Text
Hidden=
[RainRGB3]
Measure=Plugin
Plugin=RunCommand
Disabled=
Program=""#CURRENTPATH#addons\RainRGB4RunCommand.exe""
Parameter=""VarName=COLOR4" "FileName=#SKINSPATH#vOS\@resources\Variables.inc" "RefreshConfig=-1""
OutputType=ANSI
FinishAction=[!Refresh][#s_OnChangeAction]
[VariableIcon4]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle4Title]
Meter=String
Text=Color 5 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription4]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[ColorVariableValue4]
Meter=Shape
Shape=Ellipse [#s_ColorSize],[#s_ColorSize],[#s_ColorSize],[#s_ColorSize] | Fill Color [#COLOR5] | StrokeWidth [#s_ColorStrokeWidth] | Extend Outline
Outline=Stroke Color [#s_ColorStrokeColor]
MeterStyle=VarColorValue | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables baseColor "#color5#" "#CURRENTPATH#\ColorPickerPlus\ColorPickerPlus.ini"][!WriteKeyValue Variables colorToChange "color5" "#CURRENTPATH#\ColorPickerPlus\ColorPickerPlus.ini"][!ActivateConfig "#CURRENTCONFIG#\ColorPickerPlus"]
ToolTipTitle=Color Information
ToolTipText=Meter Line Low#CRLF#Top Process 3#CRLF#HDD Free#CRLF#Secondary Text#CRLF#Misc Text
Hidden=
[StringVariableValue4]
Meter=String
Text=[#COLOR5]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables baseColor "#color5#" "#CURRENTPATH#\ColorPickerPlus\ColorPickerPlus.ini"][!WriteKeyValue Variables colorToChange "color5" "#CURRENTPATH#\ColorPickerPlus\ColorPickerPlus.ini"][!ActivateConfig "#CURRENTCONFIG#\ColorPickerPlus"]
ToolTipTitle=Color Information
ToolTipText=Meter Line Low#CRLF#Top Process 3#CRLF#HDD Free#CRLF#Secondary Text#CRLF#Misc Text
Hidden=
[RainRGB4]
Measure=Plugin
Plugin=RunCommand
Disabled=
Program=""#CURRENTPATH#addons\RainRGB4RunCommand.exe""
Parameter=""VarName=COLOR5" "FileName=#SKINSPATH#vOS\@resources\Variables.inc" "RefreshConfig=-1""
OutputType=ANSI
FinishAction=[!Refresh][#s_OnChangeAction]
[VariableIcon5]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle5Title]
Meter=String
Text=Color 6 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription5]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[ColorVariableValue5]
Meter=Shape
Shape=Ellipse [#s_ColorSize],[#s_ColorSize],[#s_ColorSize],[#s_ColorSize] | Fill Color [#COLOR6] | StrokeWidth [#s_ColorStrokeWidth] | Extend Outline
Outline=Stroke Color [#s_ColorStrokeColor]
MeterStyle=VarColorValue | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables baseColor "#color6#" "#CURRENTPATH#\ColorPickerPlus\ColorPickerPlus.ini"][!WriteKeyValue Variables colorToChange "color6" "#CURRENTPATH#\ColorPickerPlus\ColorPickerPlus.ini"][!ActivateConfig "#CURRENTCONFIG#\ColorPickerPlus"]
ToolTipTitle=Color Information
ToolTipText=Histogram Background
Hidden=
[StringVariableValue5]
Meter=String
Text=[#COLOR6]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables baseColor "#color6#" "#CURRENTPATH#\ColorPickerPlus\ColorPickerPlus.ini"][!WriteKeyValue Variables colorToChange "color6" "#CURRENTPATH#\ColorPickerPlus\ColorPickerPlus.ini"][!ActivateConfig "#CURRENTCONFIG#\ColorPickerPlus"]
ToolTipTitle=Color Information
ToolTipText=Histogram Background
Hidden=
[RainRGB5]
Measure=Plugin
Plugin=RunCommand
Disabled=
Program=""#CURRENTPATH#addons\RainRGB4RunCommand.exe""
Parameter=""VarName=COLOR6" "FileName=#SKINSPATH#vOS\@resources\Variables.inc" "RefreshConfig=-1""
OutputType=ANSI
FinishAction=[!Refresh][#s_OnChangeAction]
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


