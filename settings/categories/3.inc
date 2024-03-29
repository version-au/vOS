[FirstRightPanel]
Meter=String
Text=First
FontColor=0,0,0,0
MeterStyle=FirstItem | RightPanel
Y=[#s_ScrollRightPanel]
[CategoryIcon9]
Meter=String
Text=[\xE73E]
MeterStyle=CategoryIcon | RightPanel

[Title9]
Meter=String
Text=Preset Colors 
MeterStyle=CategoryTitle | RightPanel
W=([#s_RightPanelW] - [CategoryIcon9:W])

[CategoryDescription9]
Meter=String
Text=
MeterStyle=VarDescription | ThickDescription | RightPanel

[CategoryTitleSeparator9]
Meter=Image
MeterStyle=CategoryTitleSeparator | RightPanel


[SColor1]
Meter=Shape
Shape=Ellipse (20),(20),(20) | Fill Color #PRESET1COLOR2#80 | StrokeWidth 2 | Stroke Color #COLOR5#
Shape2=Ellipse (14),(17.8),(10) | Fill Color #PRESET1COLOR1# | StrokeWidth 0
Shape3=Ellipse (25),(17.8),(10) | Fill Color #PRESET1COLOR3# | StrokeWidth 0
Shape4=Ellipse (20),(23.8),(10) | Fill Color #PRESET1COLOR5# | StrokeWidth 0
X=(220)
Y=(145)
LeftMouseUpAction=[!WriteKeyValue Variables "Color1" "#PRESET1COLOR1#" "#@#Variables.inc"][!WriteKeyValue Variables "Color2" "#PRESET1COLOR2#" "#@#Variables.inc"][!WriteKeyValue Variables "Color3" "#PRESET1COLOR3#" "#@#Variables.inc"][!WriteKeyValue Variables "Color4" "#PRESET1COLOR4#" "#@#Variables.inc"][!WriteKeyValue Variables "Color5" "#PRESET1COLOR5#" "#@#Variables.inc"][!WriteKeyValue Variables "Color6" "#PRESET1COLOR6#" "#@#Variables.inc"][!RefreshApp]
MouseOverAction=[!ShowMeterGroup "SColor1"][!Redraw]
MouseLeaveAction=[!HideMeterGroup "SColor1"][!Redraw]

[SColor2]
Meter=Shape
Shape=Ellipse (20),(20),(20) | Fill Color #PRESET2COLOR2#80 | StrokeWidth 2 | Stroke Color #COLOR5#
Shape2=Ellipse (14),(17.8),(10) | Fill Color #PRESET2COLOR1# | StrokeWidth 0
Shape3=Ellipse (25),(17.8),(10) | Fill Color #PRESET2COLOR3# | StrokeWidth 0
Shape4=Ellipse (20),(23.8),(10) | Fill Color #PRESET2COLOR5# | StrokeWidth 0
X=(5)R
Y=(0)r
LeftMouseUpAction=[!WriteKeyValue Variables "Color1" "363537" "#@#Variables.inc"][!WriteKeyValue Variables "Color2" "CAD8DE" "#@#Variables.inc"][!WriteKeyValue Variables "Color3" "3F5E5A" "#@#Variables.inc"][!WriteKeyValue Variables "Color4" "1CCD57" "#@#Variables.inc"][!WriteKeyValue Variables "Color5" "ED7D3A" "#@#Variables.inc"][!WriteKeyValue Variables "Color6" "EF2D56" "#@#Variables.inc"][!RefreshApp]
MouseOverAction=[!ShowMeterGroup "SColor2"][!Redraw]
MouseLeaveAction=[!HideMeterGroup "SColor2"][!Redraw]

[SColor3]
Meter=Shape
Shape=Ellipse (20),(20),(20) | Fill Color #PRESET3COLOR2#80 | StrokeWidth 2 | Stroke Color #COLOR5#
Shape2=Ellipse (14),(17.8),(10) | Fill Color #PRESET3COLOR1# | StrokeWidth 0
Shape3=Ellipse (25),(17.8),(10) | Fill Color #PRESET3COLOR3# | StrokeWidth 0
Shape4=Ellipse (20),(23.8),(10) | Fill Color #PRESET3COLOR5# | StrokeWidth 0
X=(5)R
Y=(0)r
LeftMouseUpAction=[!WriteKeyValue Variables "Color1" "481D24" "#@#Variables.inc"][!WriteKeyValue Variables "Color2" "FFC857" "#@#Variables.inc"][!WriteKeyValue Variables "Color3" "481D24" "#@#Variables.inc"][!WriteKeyValue Variables "Color4" "C5283D" "#@#Variables.inc"][!WriteKeyValue Variables "Color5" "E9724C" "#@#Variables.inc"][!WriteKeyValue Variables "Color6" "481D24" "#@#Variables.inc"][!RefreshApp]
MouseOverAction=[!ShowMeterGroup "SColor3"][!Redraw]
MouseLeaveAction=[!HideMeterGroup "SColor3"][!Redraw]

[SColor4]
Meter=Shape
Shape=Ellipse (20),(20),(20) | Fill Color #PRESET4COLOR2#80 | StrokeWidth 2 | Stroke Color #COLOR5#
Shape2=Ellipse (14),(17.8),(10) | Fill Color #PRESET4COLOR1# | StrokeWidth 0
Shape3=Ellipse (25),(17.8),(10) | Fill Color #PRESET4COLOR3# | StrokeWidth 0
Shape4=Ellipse (20),(23.8),(10) | Fill Color #PRESET4COLOR5# | StrokeWidth 0
X=(5)R
Y=(0)r
LeftMouseUpAction=[!WriteKeyValue Variables "Color1" "1B2432" "#@#Variables.inc"][!WriteKeyValue Variables "Color2" "CFD4DD" "#@#Variables.inc"][!WriteKeyValue Variables "Color3" "403F4C" "#@#Variables.inc"][!WriteKeyValue Variables "Color4" "ED254E" "#@#Variables.inc"][!WriteKeyValue Variables "Color5" "C5D86D" "#@#Variables.inc"][!WriteKeyValue Variables "Color6" "2C2B3C" "#@#Variables.inc"][!RefreshApp]
MouseOverAction=[!ShowMeterGroup "SColor4"][!Redraw]
MouseLeaveAction=[!HideMeterGroup "SColor4"][!Redraw]

[SColor5]
Meter=Shape
Shape=Ellipse (20),(20),(20) | Fill Color #PRESET5COLOR2#80 | StrokeWidth 2 | Stroke Color #COLOR5#
Shape2=Ellipse (14),(17.8),(10) | Fill Color #PRESET5COLOR1# | StrokeWidth 0
Shape3=Ellipse (25),(17.8),(10) | Fill Color #PRESET5COLOR3# | StrokeWidth 0
Shape4=Ellipse (20),(23.8),(10) | Fill Color #PRESET5COLOR5# | StrokeWidth 0
X=(5)R
Y=(0)r
LeftMouseUpAction=[!WriteKeyValue Variables "Color1" "1F1F1E" "#@#Variables.inc"][!WriteKeyValue Variables "Color2" "7DA0B4" "#@#Variables.inc"][!WriteKeyValue Variables "Color3" "2F81BB" "#@#Variables.inc"][!WriteKeyValue Variables "Color4" "884682" "#@#Variables.inc"][!WriteKeyValue Variables "Color5" "7DA0B4" "#@#Variables.inc"][!WriteKeyValue Variables "Color6" "5B507A" "#@#Variables.inc"][!RefreshApp]
MouseOverAction=[!ShowMeterGroup "SColor5"][!Redraw]
MouseLeaveAction=[!HideMeterGroup "SColor5"][!Redraw]

[SColor6]
Meter=Shape
Shape=Ellipse (20),(20),(20) | Fill Color #PRESET6COLOR2#80 | StrokeWidth 2 | Stroke Color #COLOR5#
Shape2=Ellipse (14),(17.8),(10) | Fill Color #PRESET6COLOR1# | StrokeWidth 0
Shape3=Ellipse (25),(17.8),(10) | Fill Color #PRESET6COLOR3# | StrokeWidth 0
Shape4=Ellipse (20),(23.8),(10) | Fill Color #PRESET6COLOR5# | StrokeWidth 0
X=(5)R
Y=(0)r
LeftMouseUpAction=[!WriteKeyValue Variables "Color1" "011627" "#@#Variables.inc"][!WriteKeyValue Variables "Color2" "FDFFFC" "#@#Variables.inc"][!WriteKeyValue Variables "Color3" "B91372" "#@#Variables.inc"][!WriteKeyValue Variables "Color4" "FF0022" "#@#Variables.inc"][!WriteKeyValue Variables "Color5" "41EAD4" "#@#Variables.inc"][!WriteKeyValue Variables "Color6" "0090C1" "#@#Variables.inc"][!RefreshApp]
MouseOverAction=[!ShowMeterGroup "SColor6"][!Redraw]
MouseLeaveAction=[!HideMeterGroup "SColor6"][!Redraw]

[SColor7]
Meter=Shape
Shape=Ellipse (20),(20),(20) | Fill Color #PRESET7COLOR2#80 | StrokeWidth 2 | Stroke Color #COLOR5#
Shape2=Ellipse (14),(17.8),(10) | Fill Color #PRESET7COLOR1# | StrokeWidth 0
Shape3=Ellipse (25),(17.8),(10) | Fill Color #PRESET7COLOR3# | StrokeWidth 0
Shape4=Ellipse (20),(23.8),(10) | Fill Color #PRESET7COLOR5# | StrokeWidth 0
X=(5)R
Y=(0)r
LeftMouseUpAction=[!WriteKeyValue Variables "Color1" "373F51" "#@#Variables.inc"][!WriteKeyValue Variables "Color2" "CCDBDC" "#@#Variables.inc"][!WriteKeyValue Variables "Color3" "5386E4" "#@#Variables.inc"][!WriteKeyValue Variables "Color4" "21897E" "#@#Variables.inc"][!WriteKeyValue Variables "Color5" "BF1A2F" "#@#Variables.inc"][!WriteKeyValue Variables "Color6" "FF8500" "#@#Variables.inc"][!RefreshApp]
MouseOverAction=[!ShowMeterGroup "SColor7"][!Redraw]
MouseLeaveAction=[!HideMeterGroup "SColor7"][!Redraw]

[SColor8]
Meter=Shape
Shape=Ellipse (20),(20),(20) | Fill Color #PRESET8COLOR2#80 | StrokeWidth 2 | Stroke Color #COLOR5#
Shape2=Ellipse (14),(17.8),(10) | Fill Color #PRESET8COLOR1# | StrokeWidth 0
Shape3=Ellipse (25),(17.8),(10) | Fill Color #PRESET8COLOR3# | StrokeWidth 0
Shape4=Ellipse (20),(23.8),(10) | Fill Color #PRESET8COLOR5# | StrokeWidth 0
X=(5)R
Y=(0)r
LeftMouseUpAction=[!WriteKeyValue Variables "Color1" "25291C" "#@#Variables.inc"][!WriteKeyValue Variables "Color2" "DBD5B5" "#@#Variables.inc"][!WriteKeyValue Variables "Color3" "F8333C" "#@#Variables.inc"][!WriteKeyValue Variables "Color4" "44AF69" "#@#Variables.inc"][!WriteKeyValue Variables "Color5" "FCAB10" "#@#Variables.inc"][!WriteKeyValue Variables "Color6" "2B9EB3" "#@#Variables.inc"][!RefreshApp]
MouseOverAction=[!ShowMeterGroup "SColor8"][!Redraw]
MouseLeaveAction=[!HideMeterGroup "SColor8"][!Redraw]

[SColor9]
Meter=Shape
Shape=Ellipse (20),(20),(20) | Fill Color #PRESET9COLOR2#80 | StrokeWidth 2 | Stroke Color #COLOR5#
Shape2=Ellipse (14),(17.8),(10) | Fill Color #PRESET9COLOR1# | StrokeWidth 0
Shape3=Ellipse (25),(17.8),(10) | Fill Color #PRESET9COLOR3# | StrokeWidth 0
Shape4=Ellipse (20),(23.8),(10) | Fill Color #PRESET9COLOR5# | StrokeWidth 0
X=(5)R
Y=(0)r
LeftMouseUpAction=[!WriteKeyValue Variables "Color1" "#PRESET9COLOR1#" "#@#Variables.inc"][!WriteKeyValue Variables "Color2" "#PRESET9COLOR2#" "#@#Variables.inc"][!WriteKeyValue Variables "Color3" "#PRESET9COLOR3#" "#@#Variables.inc"][!WriteKeyValue Variables "Color4" "#PRESET9COLOR4#" "#@#Variables.inc"][!WriteKeyValue Variables "Color5" "#PRESET9COLOR5#" "#@#Variables.inc"][!WriteKeyValue Variables "Color6" "#PRESET9COLOR6#" "#@#Variables.inc"][!RefreshApp]
MouseOverAction=[!ShowMeterGroup "SColor9"][!Redraw]
MouseLeaveAction=[!HideMeterGroup "SColor9"][!Redraw]

[SColor10]
Meter=Shape
Shape=Ellipse (20),(20),(20) | Fill Color #PRESET10COLOR2#80 | StrokeWidth 2 | Stroke Color #COLOR5#
Shape2=Ellipse (14),(17.8),(10) | Fill Color #PRESET10COLOR1# | StrokeWidth 0
Shape3=Ellipse (25),(17.8),(10) | Fill Color #PRESET10COLOR3# | StrokeWidth 0
Shape4=Ellipse (20),(23.8),(10) | Fill Color #PRESET10COLOR5# | StrokeWidth 0
X=(5)R
Y=(0)r
LeftMouseUpAction=[!WriteKeyValue Variables "Color1" "#PRESET10COLOR1#" "#@#Variables.inc"][!WriteKeyValue Variables "Color2" "#PRESET10COLOR2#" "#@#Variables.inc"][!WriteKeyValue Variables "Color3" "#PRESET10COLOR3#" "#@#Variables.inc"][!WriteKeyValue Variables "Color4" "#PRESET10COLOR4#" "#@#Variables.inc"][!WriteKeyValue Variables "Color5" "#PRESET10COLOR5#" "#@#Variables.inc"][!WriteKeyValue Variables "Color6" "#PRESET10COLOR6#" "#@#Variables.inc"][!RefreshApp]
MouseOverAction=[!ShowMeterGroup "SColor10"][!Redraw]
MouseLeaveAction=[!HideMeterGroup "SColor10"][!Redraw]
DynamicVariables=1
ToolTipText=Collects colors from your desktop wallpaper#CRLF#Drag setting window to other monitors to update auto preset

;====================ROW 2================================================================

[SColor11]
Meter=Shape
Shape=Ellipse (20),(20),(20) | Fill Color #PRESET11COLOR2#80 | StrokeWidth 2 | Stroke Color #COLOR5#
Shape2=Ellipse (14),(17.8),(10) | Fill Color #PRESET11COLOR1# | StrokeWidth 0
Shape3=Ellipse (25),(17.8),(10) | Fill Color #PRESET11COLOR3# | StrokeWidth 0
Shape4=Ellipse (20),(23.8),(10) | Fill Color #PRESET11COLOR5# | StrokeWidth 0
X=(220)
Y=(200)
LeftMouseUpAction=[!WriteKeyValue Variables "Color1" "#PRESET11COLOR1#" "#@#Variables.inc"][!WriteKeyValue Variables "Color2" "#PRESET11COLOR2#" "#@#Variables.inc"][!WriteKeyValue Variables "Color3" "#PRESET11COLOR3#" "#@#Variables.inc"][!WriteKeyValue Variables "Color4" "#PRESET11COLOR4#" "#@#Variables.inc"][!WriteKeyValue Variables "Color5" "#PRESET11COLOR5#" "#@#Variables.inc"][!WriteKeyValue Variables "Color6" "#PRESET11COLOR6#" "#@#Variables.inc"][!RefreshApp]
MouseOverAction=[!ShowMeterGroup "SColor11"][!Redraw]
MouseLeaveAction=[!HideMeterGroup "SColor11"][!Redraw]

[SColor12]
Meter=Shape
Shape=Ellipse (20),(20),(20) | Fill Color #PRESET12COLOR2#80 | StrokeWidth 2 | Stroke Color #COLOR5#
Shape2=Ellipse (14),(17.8),(10) | Fill Color #PRESET12COLOR1# | StrokeWidth 0
Shape3=Ellipse (25),(17.8),(10) | Fill Color #PRESET12COLOR3# | StrokeWidth 0
Shape4=Ellipse (20),(23.8),(10) | Fill Color #PRESET12COLOR5# | StrokeWidth 0
X=(5)R
Y=(0)r
LeftMouseUpAction=[!WriteKeyValue Variables "Color1" "#PRESET12COLOR1#" "#@#Variables.inc"][!WriteKeyValue Variables "Color2" "#PRESET12COLOR2#" "#@#Variables.inc"][!WriteKeyValue Variables "Color3" "#PRESET12COLOR3#" "#@#Variables.inc"][!WriteKeyValue Variables "Color4" "#PRESET12COLOR4#" "#@#Variables.inc"][!WriteKeyValue Variables "Color5" "#PRESET12COLOR5#" "#@#Variables.inc"][!WriteKeyValue Variables "Color6" "#PRESET12COLOR6#" "#@#Variables.inc"][!RefreshApp]
MouseOverAction=[!ShowMeterGroup "SColor12"][!Redraw]
MouseLeaveAction=[!HideMeterGroup "SColor12"][!Redraw]

[SColor13]
Meter=Shape
Shape=Ellipse (20),(20),(20) | Fill Color #PRESET13COLOR2#80 | StrokeWidth 2 | Stroke Color #COLOR5#
Shape2=Ellipse (14),(17.8),(10) | Fill Color #PRESET13COLOR1# | StrokeWidth 0
Shape3=Ellipse (25),(17.8),(10) | Fill Color #PRESET13COLOR3# | StrokeWidth 0
Shape4=Ellipse (20),(23.8),(10) | Fill Color #PRESET13COLOR5# | StrokeWidth 0
X=(5)R
Y=(0)r
LeftMouseUpAction=[!WriteKeyValue Variables "Color1" "#PRESET13COLOR1#" "#@#Variables.inc"][!WriteKeyValue Variables "Color2" "#PRESET13COLOR2#" "#@#Variables.inc"][!WriteKeyValue Variables "Color3" "#PRESET13COLOR3#" "#@#Variables.inc"][!WriteKeyValue Variables "Color4" "#PRESET13COLOR4#" "#@#Variables.inc"][!WriteKeyValue Variables "Color5" "#PRESET13COLOR5#" "#@#Variables.inc"][!WriteKeyValue Variables "Color6" "#PRESET13COLOR6#" "#@#Variables.inc"][!RefreshApp]
MouseOverAction=[!ShowMeterGroup "SColor13"][!Redraw]
MouseLeaveAction=[!HideMeterGroup "SColor13"][!Redraw]

[SColor14]
Meter=Shape
Shape=Ellipse (20),(20),(20) | Fill Color #PRESET14COLOR2#80 | StrokeWidth 2 | Stroke Color #COLOR5#
Shape2=Ellipse (14),(17.8),(10) | Fill Color #PRESET14COLOR1# | StrokeWidth 0
Shape3=Ellipse (25),(17.8),(10) | Fill Color #PRESET14COLOR3# | StrokeWidth 0
Shape4=Ellipse (20),(23.8),(10) | Fill Color #PRESET14COLOR5# | StrokeWidth 0
X=(5)R
Y=(0)r
LeftMouseUpAction=[!WriteKeyValue Variables "Color1" "#PRESET14COLOR1#" "#@#Variables.inc"][!WriteKeyValue Variables "Color2" "#PRESET14COLOR2#" "#@#Variables.inc"][!WriteKeyValue Variables "Color3" "#PRESET14COLOR3#" "#@#Variables.inc"][!WriteKeyValue Variables "Color4" "#PRESET14COLOR4#" "#@#Variables.inc"][!WriteKeyValue Variables "Color5" "#PRESET14COLOR5#" "#@#Variables.inc"][!WriteKeyValue Variables "Color6" "#PRESET14COLOR6#" "#@#Variables.inc"][!RefreshApp]
MouseOverAction=[!ShowMeterGroup "SColor14"][!Redraw]
MouseLeaveAction=[!HideMeterGroup "SColor14"][!Redraw]

[SColor15]
Meter=Shape
Shape=Ellipse (20),(20),(20) | Fill Color #PRESET15COLOR2#80 | StrokeWidth 2 | Stroke Color #COLOR5#
Shape2=Ellipse (14),(17.8),(10) | Fill Color #PRESET15COLOR1# | StrokeWidth 0
Shape3=Ellipse (25),(17.8),(10) | Fill Color #PRESET15COLOR3# | StrokeWidth 0
Shape4=Ellipse (20),(23.8),(10) | Fill Color #PRESET15COLOR5# | StrokeWidth 0
X=(5)R
Y=(0)r
LeftMouseUpAction=[!WriteKeyValue Variables "Color1" "#PRESET15COLOR1#" "#@#Variables.inc"][!WriteKeyValue Variables "Color2" "#PRESET15COLOR2#" "#@#Variables.inc"][!WriteKeyValue Variables "Color3" "#PRESET15COLOR3#" "#@#Variables.inc"][!WriteKeyValue Variables "Color4" "#PRESET15COLOR4#" "#@#Variables.inc"][!WriteKeyValue Variables "Color5" "#PRESET15COLOR5#" "#@#Variables.inc"][!WriteKeyValue Variables "Color6" "#PRESET15COLOR6#" "#@#Variables.inc"][!RefreshApp]
MouseOverAction=[!ShowMeterGroup "SColor15"][!Redraw]
MouseLeaveAction=[!HideMeterGroup "SColor15"][!Redraw]

[SColor16]
Meter=Shape
Shape=Ellipse (20),(20),(20) | Fill Color #PRESET16COLOR2#80 | StrokeWidth 2 | Stroke Color #COLOR5#
Shape2=Ellipse (14),(17.8),(10) | Fill Color #PRESET16COLOR1# | StrokeWidth 0
Shape3=Ellipse (25),(17.8),(10) | Fill Color #PRESET16COLOR3# | StrokeWidth 0
Shape4=Ellipse (20),(23.8),(10) | Fill Color #PRESET16COLOR5# | StrokeWidth 0
X=(5)R
Y=(0)r
LeftMouseUpAction=[!WriteKeyValue Variables "Color1" "#PRESET16COLOR1#" "#@#Variables.inc"][!WriteKeyValue Variables "Color2" "#PRESET16COLOR2#" "#@#Variables.inc"][!WriteKeyValue Variables "Color3" "#PRESET16COLOR3#" "#@#Variables.inc"][!WriteKeyValue Variables "Color4" "#PRESET16COLOR4#" "#@#Variables.inc"][!WriteKeyValue Variables "Color5" "#PRESET16COLOR5#" "#@#Variables.inc"][!WriteKeyValue Variables "Color6" "#PRESET16COLOR6#" "#@#Variables.inc"][!RefreshApp]
MouseOverAction=[!ShowMeterGroup "SColor16"][!Redraw]
MouseLeaveAction=[!HideMeterGroup "SColor16"][!Redraw]

[SColor17]
Meter=Shape
Shape=Ellipse (20),(20),(20) | Fill Color #PRESET17COLOR2#80 | StrokeWidth 2 | Stroke Color #COLOR5#
Shape2=Ellipse (14),(17.8),(10) | Fill Color #PRESET17COLOR1# | StrokeWidth 0
Shape3=Ellipse (25),(17.8),(10) | Fill Color #PRESET17COLOR3# | StrokeWidth 0
Shape4=Ellipse (20),(23.8),(10) | Fill Color #PRESET17COLOR5# | StrokeWidth 0
X=(5)R
Y=(0)r
LeftMouseUpAction=[!WriteKeyValue Variables "Color1" "#PRESET17COLOR1#" "#@#Variables.inc"][!WriteKeyValue Variables "Color2" "#PRESET17COLOR2#" "#@#Variables.inc"][!WriteKeyValue Variables "Color3" "#PRESET17COLOR3#" "#@#Variables.inc"][!WriteKeyValue Variables "Color4" "#PRESET17COLOR4#" "#@#Variables.inc"][!WriteKeyValue Variables "Color5" "#PRESET17COLOR5#" "#@#Variables.inc"][!WriteKeyValue Variables "Color6" "#PRESET17COLOR6#" "#@#Variables.inc"][!RefreshApp]
MouseOverAction=[!ShowMeterGroup "SColor17"][!Redraw]
MouseLeaveAction=[!HideMeterGroup "SColor17"][!Redraw]

[SColor18]
Meter=Shape
Shape=Ellipse (20),(20),(20) | Fill Color #PRESET18COLOR2#80 | StrokeWidth 2 | Stroke Color #COLOR5#
Shape2=Ellipse (14),(17.8),(10) | Fill Color #PRESET18COLOR1# | StrokeWidth 0
Shape3=Ellipse (25),(17.8),(10) | Fill Color #PRESET18COLOR3# | StrokeWidth 0
Shape4=Ellipse (20),(23.8),(10) | Fill Color #PRESET18COLOR5# | StrokeWidth 0
X=(5)R
Y=(0)r
LeftMouseUpAction=[!WriteKeyValue Variables "Color1" "#PRESET18COLOR1#" "#@#Variables.inc"][!WriteKeyValue Variables "Color2" "#PRESET18COLOR2#" "#@#Variables.inc"][!WriteKeyValue Variables "Color3" "#PRESET18COLOR3#" "#@#Variables.inc"][!WriteKeyValue Variables "Color4" "#PRESET18COLOR4#" "#@#Variables.inc"][!WriteKeyValue Variables "Color5" "#PRESET18COLOR5#" "#@#Variables.inc"][!WriteKeyValue Variables "Color6" "#PRESET18COLOR6#" "#@#Variables.inc"][!RefreshApp]
MouseOverAction=[!ShowMeterGroup "SColor18"][!Redraw]
MouseLeaveAction=[!HideMeterGroup "SColor18"][!Redraw]


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

@include5=#@#\PresetColors\Preset1.ini
@include6=#@#\PresetColors\Preset2.ini
@include7=#@#\PresetColors\Preset3.ini
@include8=#@#\PresetColors\Preset4.ini
@include9=#@#\PresetColors\Preset5.ini
@include10=#@#\PresetColors\Preset6.ini
@include11=#@#\PresetColors\Preset7.ini
@include12=#@#\PresetColors\Preset8.ini
@include13=#@#\PresetColors\Preset9.ini
@include14=#@#\PresetColors\Preset10.ini
; ---------- Row 2 --------------------------------------------------------------
@include15=#@#\PresetColors\Preset11.ini
@include16=#@#\PresetColors\Preset12.ini
@include17=#@#\PresetColors\Preset13.ini
@include18=#@#\PresetColors\Preset14.ini
@include19=#@#\PresetColors\Preset15.ini
@include20=#@#\PresetColors\Preset16.ini
@include21=#@#\PresetColors\Preset17.ini
@include22=#@#\PresetColors\Preset18.ini

; --------------------------------------------------------------------------------
; ---------- Windows wallpaper color info --------------------------------------------------------------
; --------------------------------------------------------------------------------
[Wincolorinfoline]
Meter=Shape
Shape=Line (654),(120),(654),(150)  | StrokeWidth (2) | Stroke Color #COLOR2#80 | StrokeDashes 2,2 | StrokeDashCap Round

[Wincircle]
Meter=Shape
Shape=Ellipse (20),(20),(20) | Fill Color #COLOR2#80 | StrokeWidth 0
X=(635)
Y=(90)

[WinIcon]
Meter=IMAGE
ImageName=#@#Images/windows-logo.png
W=(25)
H=(25)
X=(641)
Y=(97)
Greyscale=1
ImageTint=[ChamFG5]
DynamicVariables=1