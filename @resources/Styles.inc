[Variables]

;=====================|   FONTS   |=====================
FONT=Roboto Medium
;;;;;;TITLE TEXT;;;;;;
TEXTGREY=2F81BB
TITLESIZE=12
;;;;;;LOAD TEXT;;;;;;
TEXTDARKGREY=7DA0B4
LOADSIZE=14
;;;;;;FAN RPM TEXT;;;;;;
FANRPMTEXT=884682
FANRPMSIZE=7

;=====================|   COLORS   |=====================

SysBarColor=1F1F1E
StrokeMainColor=7DA0B4
GradColor1=2F81BB
GradColor2=884682
LineColor1=884682
LineColor2=7DA0B4
HistColor=5B507A
HDDcolorused=884682
HDDcolorfree=B9E28C
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
PaletteColor1=884682
PaletteColor2=7DA0B4
PaletteColor3=B9E28C

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
