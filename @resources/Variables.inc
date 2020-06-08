[Variables]

;=====================|   WEATHER   |=====================

LocationCode=6a4333491655b599fccfb2e722ac263975b874d0b47e35c1324e0c2100612563


URL=https://weather.com/#Language#/weather/today/l/#LocationCode#

LanginUse=EnglishGB °C

Language=en-GB

DateFormat=%#d %h
TimeFormat=


SpeedUnit=Mph
PressureUnit=Mb
VisibilityUnit=Km

;=====================|   APPBAR VIEW   |=====================

AppPath1=C:\Users\steve\Documents\Shortcuts\Applications\
AppPath2=C:\Users\steve\Documents\Shortcuts\Games\
AppPath3=C:\Users\steve\Downloads\

;=====================|   FOLDER VIEW   |=====================

; Set by context menu selection
CustomTitle=0
; Your custom title
MenuTitle=#Path#
MenuTitle2=#Path2#

; Initial path to parse and display
Path=C:\Users\steve\Documents\Shortcuts\Games\
Path2=C:\Users\steve\Documents\Shortcuts\Applications\
; Menu Types via Context menu selection
; Sets value to 'SmallIcons' for Small Icon and Text List
; Sets value to 'TextOnly' for Text Only List
; Sets Value to 'LargeIcons' for Icons Only List
MenuType=SmallIcons

; Theme colors
HeaderColor=0,0,0,100
; Set the border, highlight, light, and dark color to modify appearance
BorderColor=100,100,100,100
HighlightColor=127,127,127,90
; Used as colors for text and back in Light/Dark themes
LightColor=255,255,255,255
DarkColor=24,24,24,217
; These will be changed by theme selection from the context menu
BackColor=0,0,0,16
TextColor=#TEXTDARKGREY#

;Dimensions
; Note: Scaling above 3x will require you to modify the [Slider] section Repeat multiplier to the value of 26 times your scaler
; So if your scaler is 4, the Repeat number should be 92
; This will expand the menu down enough to show all items
Scaler=1
Width=270

; Don't edit unless you know what these do
ContainerH=280
; Stationary :: (280*#Scaler#)
; RollDown :: (23*#Scaler#)
TextSize=(12*#Scaler#)
U=[!UpdateMeasure Slider][!UpdateMeter *][!Redraw]


;=====================|   FONTS   |=====================
FONT=Roboto Medium
;;;;;;TITLE TEXT;;;;;;
TEXTGREY=ED254E
TITLESIZE=12
;;;;;;LOAD TEXT;;;;;;
TEXTDARKGREY=C5D86D
LOADSIZE=14
;;;;;;FAN RPM TEXT;;;;;;
FANRPMTEXT=C5D86D
FANRPMSIZE=7

;=====================|   COLORS   |=====================

SysBarColor=1B2432
StrokeMainColor=CFD4DD
GradColor1=403F4C
GradColor2=1B2432
LineColor1=ED254E
LineColor2=C5D86D
HistColor=2C2B3C
HDDcolorused=ED254E
HDDcolorfree=C5D86D
MeterGradient=90 | #GradColor1# ; 0.0 | #GradColor2# ; 1.0

;=====================|   GADGET COLORS   |====================

; background
BgAlpha=0
BgStyle=2

; appearance
HideGraph=1

; maximum number of processes (1 - 10)
MaxProcesses=3

; font appearance
ColorFontTitle=4c566a
ColorFontSubtitle=78,127,191
ColorFontSubtitle2=255,246,42
ColorInfoText1=237,231,216
ColorInfoText2=201,205,209
FontName=Roboto Medium
FontSize1=8
FontSize2=9
FontSizeS=7
FontWtBold=700

; color palette
PaletteColor1=ED254E
PaletteColor2=CFD4DD
PaletteColor3=C5D86D


; positioning
GridPosX=8
TextPosX=10

; scale factor
Scale=0.85

;=====================|   vOS Menu   |=====================

 BColor=#SysBarColor#
 IColor=#TEXTGREY#
 FColor=#TEXTDARKGREY#
 SColor=00000000

 ; MeterButton.BG
 ;---------------
   X=0
   Y=0
 ; MeterMenu.BG
 ;-------------
   X2=10R
 ; MeterMenu.Arrow
 ;----------------
   X3=-13r
   Y3=5
   Flip=180

 StyleColor=Dark
 StyleLocation=TopLeft
 StyleAction=OnHover
;=====================|   HDDS   |====================

Drive1=C:
Drive2=D:
Drive3=E:
Drive4=F:
Drive5=G:
Drive6=H:
Drive7=I:

;=====================|   NET   |====================

MaxDownloadMbits=90
MaxUploadMbits=7

Interface=Best

;=====================|   STYLES   |=====================

[cpucoremeterstyle]
SolidColor=0,0,0,0		; This is the background colour of the graph
AntiAlias=1
LineWidth=2
GraphOrientation=Vertical

[styleGreyBoldText]
FontColor=#TEXTGREY#
FontSize=#TITLESIZE#
FontFace=#FONT#
StringAlign=RIGHT
AntiAlias=1
StringStyle=BOLD
StringEffect=Shadow
FontEffectColor=0,0,0,80

[styleLoadBoldText]
FontColor=#TEXTDARKGREY#
FontSize=#LOADSIZE#
FontFace=#FONT#
StringAlign=RIGHT
AntiAlias=1
StringStyle=BOLD
StringEffect=Shadow
FontEffectColor=0,0,0,80

[styleFanBoldText]
FontColor=#FANRPMTEXT#
FontSize=#FANRPMSIZE#
FontFace=#FONT#
StringAlign=RIGHT
AntiAlias=1
StringStyle=BOLD
StringEffect=Shadow
FontEffectColor=0,0,0,80
