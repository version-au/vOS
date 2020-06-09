[Variables]

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

; font appearance
ColorFontTitle=4c566a
ColorFontSubtitle=78,127,191
ColorFontSubtitle2=255,246,42
ColorInfoText1=237,231,216
ColorInfoText2=201,205,209
FontName=Arial
FontSize1=7
FontSize2=9
FontSizeS=7

; color palette
PaletteColor1=ED254E
PaletteColor2=CFD4DD
PaletteColor3=C5D86D

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
