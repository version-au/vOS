; Menu Meters ~ Icons and Text
;----------------------------------------------------
; Meter Styles
;----------------------------------------------------

[TextStyle]
FontSize=#TextSize#
FontColor=#TextColor#
AntiAlias=1
InlineSetting=Weight 600
DynamicVariables=1
Container=ContainerMeter

[IconStyle]
X=(5*#Scaler#)
Y=r
W=(23*#Scaler#)
H=(23*#Scaler#)
AntiAlias=1
DynamicVariables=1
Container=ContainerMeter

[HighlightStyle]
SolidColor=0,0,0,1
X=(5*#Scaler#)
Y=(6*#Scaler#)R
W=208
H=([Index1Icon:H] > [Index1Info:H] ? [Index1Icon:H] : [Index1Info:H])
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# SolidColor "#HighlightColor#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# SolidColor "0,0,0,1"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Container=ContainerMeter

[InfoStyle]
X=(6*#Scaler#)R
Y=(2*#Scaler#)r
Text="%1"
ClipString=1
W=(#Width#*0.88)
AutoScale=1
AntiAlias=1
DynamicVariables=1
Container=ContainerMeter

;----------------------------------------------------
; Content Meters
;----------------------------------------------------

[Index1]
Meter=Image
MeterStyle=HighlightStyle
Group=Index1
Y=(48*#Scaler#)
LeftMouseDoubleClickAction=[!CommandMeasure mIndex1Name "FollowPath"][!UpdateMeasure mPath][!UpdateMeasureGroup Children][!UpdateMeter *][!Redraw]

[Index1Icon]
Meter=Image
MeasureName=mIndex1Icon
MeterStyle=IconStyle
Group=Index1

[Index1Info]
Meter=String
MeasureName=mIndex1Name
MeterStyle=TextStyle | InfoStyle
Group=Index1
RightMouseUpAction=[!DisableMouseAction Background "MouseLeaveAction"][!CommandMeasure "mIndex1Name" "ContextMenu"]

[Index2]
Meter=Image
MeterStyle=HighlightStyle
Group=Index2
LeftMouseDoubleClickAction=[!CommandMeasure mIndex2Name "FollowPath"][!UpdateMeasure mPath][!UpdateMeasureGroup Children][!UpdateMeter *][!Redraw]

[Index2Icon]
Meter=Image
MeasureName=mIndex2Icon
MeterStyle=IconStyle
Group=Index2

[Index2Info]
Meter=String
MeasureName=mIndex2Name
MeterStyle=TextStyle | InfoStyle
Group=Index2
RightMouseUpAction=[!DisableMouseAction Background "MouseLeaveAction"][!CommandMeasure "mIndex2Name" "ContextMenu"]

[Index3]
Meter=Image
MeterStyle=HighlightStyle
Group=Index3
LeftMouseDoubleClickAction=[!CommandMeasure mIndex3Name "FollowPath"][!UpdateMeasure mPath][!UpdateMeasureGroup Children][!UpdateMeter *][!Redraw]

[Index3Icon]
Meter=Image
MeasureName=mIndex3Icon
MeterStyle=IconStyle
Group=Index3

[Index3Info]
Meter=String
MeasureName=mIndex3Name
MeterStyle=TextStyle | InfoStyle
Group=Index3
RightMouseUpAction=[!DisableMouseAction Background "MouseLeaveAction"][!CommandMeasure "mIndex3Name" "ContextMenu"]

[Index4]
Meter=Image
MeterStyle=HighlightStyle
Group=Index4
LeftMouseDoubleClickAction=[!CommandMeasure mIndex4Name "FollowPath"][!UpdateMeasure mPath][!UpdateMeasureGroup Children][!UpdateMeter *][!Redraw]

[Index4Icon]
Meter=Image
MeasureName=mIndex4Icon
MeterStyle=IconStyle
Group=Index4

[Index4Info]
Meter=String
MeasureName=mIndex4Name
MeterStyle=TextStyle | InfoStyle
Group=Index4
RightMouseUpAction=[!DisableMouseAction Background "MouseLeaveAction"][!CommandMeasure "mIndex4Name" "ContextMenu"]

[Index5]
Meter=Image
MeterStyle=HighlightStyle
Group=Index5
LeftMouseDoubleClickAction=[!CommandMeasure mIndex5Name "FollowPath"][!UpdateMeasure mPath][!UpdateMeasureGroup Children][!UpdateMeter *][!Redraw]

[Index5Icon]
Meter=Image
MeasureName=mIndex5Icon
MeterStyle=IconStyle
Group=Index5

[Index5Info]
Meter=String
MeasureName=mIndex5Name
MeterStyle=TextStyle | InfoStyle
Group=Index5
RightMouseUpAction=[!DisableMouseAction Background "MouseLeaveAction"][!CommandMeasure "mIndex5Name" "ContextMenu"]

[Index6]
Meter=Image
MeterStyle=HighlightStyle
Group=Index6
LeftMouseDoubleClickAction=[!CommandMeasure mIndex6Name "FollowPath"][!UpdateMeasure mPath][!UpdateMeasureGroup Children][!UpdateMeter *][!Redraw]

[Index6Icon]
Meter=Image
MeasureName=mIndex6Icon
MeterStyle=IconStyle
Group=Index6

[Index6Info]
Meter=String
MeasureName=mIndex6Name
MeterStyle=TextStyle | InfoStyle
Group=Index6
RightMouseUpAction=[!DisableMouseAction Background "MouseLeaveAction"][!CommandMeasure "mIndex6Name" "ContextMenu"]

[Index7]
Meter=Image
MeterStyle=HighlightStyle
Group=Index7
LeftMouseDoubleClickAction=[!CommandMeasure mIndex7Name "FollowPath"][!UpdateMeasure mPath][!UpdateMeasureGroup Children][!UpdateMeter *][!Redraw]

[Index7Icon]
Meter=Image
MeasureName=mIndex7Icon
MeterStyle=IconStyle
Group=Index7

[Index7Info]
Meter=String
MeasureName=mIndex7Name
MeterStyle=TextStyle | InfoStyle
Group=Index7
RightMouseUpAction=[!DisableMouseAction Background "MouseLeaveAction"][!CommandMeasure "mIndex7Name" "ContextMenu"]

[Index8]
Meter=Image
MeterStyle=HighlightStyle
Group=Index8
LeftMouseDoubleClickAction=[!CommandMeasure mIndex8Name "FollowPath"][!UpdateMeasure mPath][!UpdateMeasureGroup Children][!UpdateMeter *][!Redraw]

[Index8Icon]
Meter=Image
MeasureName=mIndex8Icon
MeterStyle=IconStyle
Group=Index8

[Index8Info]
Meter=String
MeasureName=mIndex8Name
MeterStyle=TextStyle | InfoStyle
Group=Index8
RightMouseUpAction=[!DisableMouseAction Background "MouseLeaveAction"][!CommandMeasure "mIndex8Name" "ContextMenu"]

