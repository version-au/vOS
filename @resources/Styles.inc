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
;;;;;;SMALL TEXT;;;;;;
TEXTSMALLCOLOR=#StrokeMainColor#
TEXTSMALLSIZE=10

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
BarGradient=90 | #GradColor1#CC ; 0.0 | #GradColor2#00 ; 1.0
CircleGradient=0,0 | #GradColor1#CC ; -0.2 | #GradColor2#00 ; 1.5
BarHideGradient=0,0 | #GradColor1# ; 0.3 | #GradColor2# ; 1.3
MeterStrokeGradient=0 | #GradColor2# ; 0.0 | #GradColor1# ; 1.0
;=====================|   THROBBER HIDING   |=====================

CPUBAR=#SysBarColor#00
RAMBAR=#SysBarColor#00
TOPCPU=#SysBarColor#
TOPRAM=#SysBarColor#
GPUBAR=#SysBarColor#00
TOPGPU=#SysBarColor#
CLOCKBAR=#SysBarColor#
FPSBAR=#SysBarColor#
FANBAR=#SysBarColor#00
MUSICBAR=#SysBarColor#00
KITTEHBAR=#SysBarColor#
RECYCLEBAR=#SysBarColor#
WEATHERBAR=#SysBarColor#00
APPBAR=#SysBarColor#
APPSLIDE1=#SysBarColor#00
APPSLIDE2=#SysBarColor#
APPSLIDE3=#SysBarColor#
NETBAR=#SysBarColor#
DRIVEBARAUTO=#SysBarColor#
DRIVEBAR1=#SysBarColor#00
DRIVEBAR2=#SysBarColor#00
DRIVEBAR3=#SysBarColor#00
DRIVEBAR4=#SysBarColor#00
DRIVEBAR5=#SysBarColor#00
VOLUMEBAR=#SysBarColor#
VISUALIZERBAR=#SysBarColor#00
FARBAR=#SysBarColor#00
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

[styleSmallText]
FontColor=#TEXTSMALLCOLOR#
FontSize=#TEXTSMALLSIZE#
FontFace=#FONT#
StringAlign=LEFT
AntiAlias=1
StringStyle=Normal
StringEffect=Shadow
FontEffectColor=0,0,0,80
