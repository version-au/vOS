[Variables]

;=====================|   FONTS   |=====================
FONT=Roboto Medium
;;;;;;DARK TEXT;;;;;;
TEXTMAINDARK=ED254E
TEXTMAINDARKSIZE=12
;;;;;;LIGHT TEXT;;;;;;
TEXTMAINLIGHT=C5D86D
TEXTMAINLIGHTSIZE=14
;;;;;;MISC TEXT;;;;;;
TEXTMISC=C5D86D
TEXTMISCSIZE=7

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

[styleMAINDARKText]
FontColor=#TEXTMAINDARK#
FontSize=#TEXTMAINDARKSIZE#
FontFace=#FONT#
StringAlign=RIGHT
AntiAlias=1
StringStyle=BOLD
StringEffect=Shadow
FontEffectColor=0,0,0,80

[styleMAINLIGHTText]
FontColor=#TEXTMAINLIGHT#
FontSize=#TEXTMAINLIGHTSIZE#
FontFace=#FONT#
StringAlign=RIGHT
AntiAlias=1
StringStyle=BOLD
StringEffect=Shadow
FontEffectColor=0,0,0,80

[styleMISCText]
FontColor=#TEXTMISC#
FontSize=#TEXTMISCSIZE#
FontFace=#FONT#
StringAlign=RIGHT
AntiAlias=1
StringStyle=BOLD
StringEffect=Shadow
FontEffectColor=0,0,0,80