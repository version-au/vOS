[Rainmeter]
BackgroundMode=2
SolidColor=0,0,0,1
MouseOverAction=[!ToggleMeterGroup Controls][!Redraw]
MouseLeaveAction=[!ToggleMeterGroup Controls][!Redraw]


; --------------------------------------------------------------------------------
; ---------- SHAPES --------------------------------------------------------------
; --------------------------------------------------------------------------------

[BarShape]
Meter=Shape
;dropshadow
Shape=Rectangle (1*#Scale#),(1*#Scale#),(200*#Scale#),(105*#Scale#),(2*#Scale#) | Fill Color #SysBarColor#80 | Stroke Color 0,0,0,0
;bar
Shape2=Rectangle (0*#Scale#),(0*#Scale#),(200*#Scale#),(105*#Scale#),(2*#Scale#) | Fill Color #SysBarColor# | Stroke Color 0,0,0,0

[CPUcoreShape17DS]
Meter=Shape
X=(20*#Scale#)
Y=(10*#Scale#)
ShadowGradient=90 | #GradColor1#80 ; 0.0 | #GradColor2#80 ; 1.0
Shape=Rectangle (1*#Scale#),(1*#Scale#),(170*#Scale#),(85*#Scale#),(1*#Scale#) | StrokeWidth  0 | Stroke Color #StrokeMainColor# | Fill LinearGradient ShadowGradient
Group=MainBG

[CPUShape]
Meter=Shape
X=(*#Scale#)r
Y=(*#Scale#)r
MeterGradient=#MeterGradient#
Shape=Rectangle 0,0,(170*#Scale#),(85*#Scale#),(1*#Scale#) | StrokeWidth  (1*#Scale#) | Stroke Color #StrokeMainColor# | Fill LinearGradient MeterGradient
Group=MainBG


;------------------THROBBER-----------------------------
@includeMeters=#@#throbber.inc

;------------------HIDETHROBBER-----------------------------
[HideThrobber]
Meter=Shape
Shape=Rectangle (0*#Scale#),(1*#Scale#),(10*#Scale#),(34*#Scale#),(2*#Scale#) | Fill Color #CALENDARGADGET# | Stroke Color 0,0,0,0
X=(0*#Scale#)
Y=(0*#Scale#)




;;Day Label Styles
[LblTxtSty]
H=#C.h#
W=#C.w#
X=#Space.X#R
Y=r
FontFace=Trebuchet MS
FontColor=#TEXTMAINDARK#
FontSize=(7*#Scale#)
stringAlign=center
AntiAlias=1
Group=Controls

[LblTxtStart]
X=(#Bumper.x#+#C.w#/2)
Y=(#Bumper.top#+2)

[LblCurrSty]

;Main Calendar Styles
[TextStyle]
H=#C.h#
W=#C.w#
X=#Space.X#R
Y=r
FontColor=#StrokeMainColor#
FontFace=Trebuchet MS
FontSize=(7*#Scale#)
stringAlign=center
AntiAlias=1
StringEffect=Shadow
FontEffectColor=#SysBarColor#

[FirstDay]
Y=(#Bumper.top#+#C.h#+#Space.y#)
X=(#Bumper.x#+#C.w#/2)

[NewWk]
Y=#Space.y#R
X=(#Bumper.x#+#C.w#/2)

[CurrentDay]
StringStyle=Bold

[LastWeek]
FontColor=0,0,0,0

[PreviousMonth]
FontColor=#HistColor#

[NextMonth]
FontColor=#HDDcolorfree#

[HolidayStyle]
FontColor=170,170,170,100

[WeekendStyle]

;========== METERS ==========
[mLabel]
Meter=String
Text=#MonthLabel#
W=(#C.w#*7+#Space.x#*6)
Y=(#C.h#*7+#Space.y#*6+#Bumper.top#)
X=10
H=0
FontColor=#TEXTMAINDARK#
FontFace=Trebuchet MS
FontSize=(7*#Scale#)
stringAlign=Left
AntiAlias=1
Angle=-1.57
DynamicVariables=1

;Day Label BG
[lBG]
Meter=image
H=#C.h#
W=(#C.W#*7+#Space.x#*6)
SolidColor=#SysBarColor#
X=#Bumper.x#
Y=#Bumper.top#

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

[ControlBack]
Meter=String
MeterStyle=TextStyle|ControlForward
Text="3"
X=#Bumper.x#
LeftMouseUpAction=[!CommandMeasure "Lua" "Move(-1)"][!Update]

[ControlHome]
Meter=String
MeterStyle=TextStyle|ControlForward
Text="="
X=R
LeftMouseUpAction=[!CommandMeasure "Lua" "Move()"][!Update]

;Date Indicator
[vLine1]
Meter=Image
SolidColor=#Clr.VLine#
W=#C.w#
H=((#C.h#+#Space.y#)*(#ThisWeek#-1)+#Space.y#)
Y=(#Bumper.top#+#C.h#)
X=(#Bumper.x#+(#C.w#+#Space.x#)*#Week#)
DynamicVariables=1
Hidden=#NotCurrentMonth#

[hLine]
Meter=Image
SolidColor=#Clr.HLine#
H=#C.h#
W=((#C.w#+#Space.x#)*6+#C.w#)
X=#Bumper.x#
Y=R
DynamicVariables=1
Hidden=#NotCurrentMonth#

[vLine2]
Meter=Image
MeterStyle=vLine1
H=((#C.h#+#Space.y#)*(6-#LastWkHidden#-#ThisWeek#))
Y=R

[Ghost]
Meter=Image
SolidColor=0,0,0,1
H=1
W=1
X=(#C.w#*7+#Space.x#*6+#Bumper.x#*2-1)
Y=(#Bumper.top#+#Bumper.bottom#+(#C.h#+#Space.y#)*7+#C.h#+1)




; -------------------------------------------------------------------------------
; ---------- Bar Meter Gradients -----------------------------------------------------------
; -------------------------------------------------------------------------------


[CPUcoreBar17Grad]
Meter=Shape
X=(20*#Scale#)
Y=(10*#Scale#)
MeterGradient=#BarGradient#
Shape=Rectangle 0,0,(170*#Scale#),(85*#Scale#),(1*#Scale#) | StrokeWidth  0 | Stroke Color #StrokeMainColor# | Fill LinearGradient MeterGradient
Group=MainBG