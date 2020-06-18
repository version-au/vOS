[Rainmeter]
BackgroundMode=2
SolidColor=0,0,0,1


;===== Meter Styles=====
;All of these meter styles are required.
@include=#@#Styles.inc
;Day Label Styles
[LblTxtSty]
H=#C.h#
W=#C.w#
X=#Space.X#R
Y=r
FontFace=Roboto
FontColor=#TEXTMAINDARK#
SolidColor=0,0,0,0
FontSize=8
stringAlign=CenterCenter
AntiAlias=1
Group=Popout
Hidden=1

[LblTxtStart]
X=(#Bumper.x#+#C.w#/2)
Y=(#Bumper.top#+#C.h#*1.5+#Space.y#)
Group=Popout
Hidden=1

[LblCurrSty]
StringStyle=Bold
Group=Popout
Hidden=1

;Main Calendar Styles
[TextStyle]
H=#C.h#
W=#C.w#
X=(#Space.X#+#C.w#)r
Y=r
FontColor=#TEXTMAINLIGHT#
FontFace=Roboto
FontSize=10
stringAlign=center
AntiAlias=1
Group=Popout
Hidden=1

[FirstDay]
Y=(#C.h#/2+#Space.y#)r
X=(#Bumper.x#+#C.w#/2)
Group=Popout
Hidden=1

[NewWk]
Y=#Space.y#R
X=(#Bumper.x#+#C.w#/2)
Group=Popout
Hidden=1

[CurrentDay]
StringStyle=Bold
Group=Popout
Hidden=1

[LastWeek]
FontColor=0,0,0,0
Group=Popout
Hidden=1

[PreviousMonth]
FontColor=128,192,255,160
Group=Popout
Hidden=1

[NextMonth]
FontColor=#StrokeMainColor#
Group=Popout
Hidden=1

[HolidayStyle]
FontColor=170,170,170,100
Group=Popout
Hidden=1

[WeekendStyle]

;========== METERS ==========
;These are not required.
[mLabel]
Meter=String
Text=#MonthLabel#
W=(#C.w#*7+#Space.x#*6)
X=((#C.w#*7+#Space.x#*6)/2+#Bumper.x#)
Y=#Bumper.top#
H=#C.h#
FontColor=#TEXTMAINDARK#
FontFace=Roboto
FontSize=10
stringAlign=Center
AntiAlias=1
DynamicVariables=1
Group=Popout
Hidden=1
UpdateDivider=36

;Control Bar
[ControlForward]
Meter=String
MeterStyle=TextStyle
FontFace=Webdings
StringAlign=Left
Text="4"
Y=#Bumper.top#
X=((#C.w#*6+#Space.x#*6)+#Bumper.x#)
LeftMouseUpAction=[!CommandMeasure "Lua" "Move(1)"][!Update]
Group=Controls
Hidden=1
UpdateDivider=36

[ControlBack]
Meter=String
MeterStyle=TextStyle|ControlForward
Text="3"
X=#Bumper.x#
LeftMouseUpAction=[!CommandMeasure "Lua" "Move(-1)"][!Update]
Hidden=1

[ControlHome]
Meter=String
MeterStyle=TextStyle|ControlForward
Text="="
X=R
LeftMouseUpAction=[!CommandMeasure "Lua" "Move()"][!Update]
Hidden=1

;Date Indicator
[TodayHL]
Meter=image
X=(#Bumper.x#+(#C.w#+#Space.x#)*#Week#+2)
Y=(#Bumper.top#+(#C.h#+#Space.y#)*(#ThisWeek#+1)+#C.h#+1)
H=2
W=(#C.w#-2)
SolidColor=#Clr.Hrl#
;Hidden=#NotCurrentMonth#
DynamicVariables=1
Group=Popout
Hidden=1

[Ghost]
Meter=Image
SolidColor=0,0,0,1
H=1
W=1
X=(#C.w#*7+#Space.x#*6+#Bumper.x#*2-1)
Y=(#Bumper.top#+#Bumper.bottom#+(#C.h#+#Space.y#)*7+#C.h#+1)
Group=Popout
Hidden=1
