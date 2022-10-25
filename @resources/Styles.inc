[Variables]

;=====================|   FONTS   |=====================
FONT=Roboto Medium
;;;;;;DARK TEXT;;;;;;
TEXTMAINDARK=#COLOR4#
TEXTMAINDARKSIZE=12
;;;;;;LIGHT TEXT;;;;;;
TEXTMAINLIGHT=#COLOR5#
TEXTMAINLIGHTSIZE=14
;;;;;;MISC TEXT;;;;;;
TEXTMISC=#COLOR5#
TEXTMISCSIZE=7
;;;;;;SMALL TEXT;;;;;;
TEXTSMALLCOLOR=#COLOR2#
TEXTSMALLSIZE=10
TEXTSUPERSMALLSIZE=8
TEXTSETTINGSMALLSIZE=7

;------------------------
TEXTCOLOR1=CFCF21
TEXTCOLOR2=E64B17
TEXTCOLOR3=E026DA
TEXTCOLOR4=00FF59

TEXTCHANGE1=#TEXTMAINDARK#
TEXTCHANGE2=#TEXTMAINLIGHT#
TEXTCHANGE3=#TEXTMISC#
TEXTCHANGE4=#TEXTSMALLCOLOR#
;=====================|   6 MAIN COLORS   |=====================

COLOR1=14041E
;SysBarColor
;GradColor2

COLOR2=4D3691
;StrokeMainColor
;PaletteColor2
;TEXTSMALLCOLOR

COLOR3=301F7F
;GradColor1

COLOR4=499EBA
;LineColor1
;HDDcolorused
;PaletteColor1
;TEXTMAINDARK

COLOR5=D6A465
;LineColor2
;HDDcolorfree
;PaletteColor3
;TEXTMAINLIGHT
;TEXTMISC

COLOR6=CC6662
;HistColor

;=====================|   DISTRIBUTE COLORS   |=====================

GradColorPopup1=#COLOR3#
GradColorPopup2=#COLOR1#
SysBarColor=#COLOR1#
StrokeMainColor=#COLOR2#
GradColor1=#COLOR3#
GradColor2=#COLOR1#
LineColor1=#COLOR4#
LineColor2=#COLOR5#
HistColor=#COLOR6#
HDDcolorused=#COLOR4#
HDDcolorfree=#COLOR5#
MeterGradient=90 | #GradColor1# ; 0.0 | #GradColor2# ; 1.0
MeterGradientPopup=90 | #GradColorPopup1#CC ; 0.0 | #GradColorPopup2#CC ; 1.0
MeterGradientBox=90 | #GradColor1#33 ; 0.0 | #GradColor2#4D ; 1.0
BarGradient=90 | #GradColor1#CC ; 0.0 | #GradColor2#00 ; 1.0
CircleGradient=0,0 | #GradColor1#CC ; -0.2 | #GradColor2#00 ; 1.5
BarHideGradient=0,0 | #GradColor1# ; 0.3 | #GradColor2# ; 1.3
MeterStrokeGradient=0 | #GradColor2# ; 0.0 | #GradColor1# ; 1.0
PopoutSepGrad=0,0 | #TEXTMAINLIGHT# ; 0.5 | #TEXTMAINLIGHT#4D ; 1.5


;Group Indicator Gradients
Group1Indicator=0,0 | #PaletteColor1# ; -0.1 | #PaletteColor1#1A ; 0.5
Group2Indicator=0,0 | #PaletteColor2# ; -0. | #PaletteColor2#1A ; 0.5
Group3Indicator=0,0 | #PaletteColor3# ; -0. | #PaletteColor3#1A ; 0.5
;=====================|   THROBBER HIDING   |=====================
CALENDARGADGET=#SysBarColor#
DRIVEGADGET=#SysBarColor#
APPGADGET1=#SysBarColor#
APPGADGET2=#SysBarColor#
APPGADGET3=
NETGADGET=#SysBarColor#
RAMGADGET=#SysBarColor#
CPUGADGET=#SysBarColor#
GPUGADGET=#SysBarColor#
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
KITTEHBAR=#SysBarColor#00
RECYCLEBAR=#SysBarColor#00
WEATHERBAR=#SysBarColor#
APPBAR=#SysBarColor#00
APPSLIDE1=#SysBarColor#00
APPSLIDE2=#SysBarColor#
APPSLIDE3=#SysBarColor#
NETBAR=#SysBarColor#00
DRIVEBARAUTO=#SysBarColor#00
DRIVEBAR1=#SysBarColor#00
DRIVEBAR2=#SysBarColor#00
DRIVEBAR3=#SysBarColor#00
DRIVEBAR4=#SysBarColor#00
DRIVEBAR5=#SysBarColor#00
VISUALIZERBAR=#SysBarColor#
;=====================|   GADGET COLORS   |====================

; font appearance
ColorFontTitle=4c566a
ColorFontSubtitle=78,127,191
ColorFontSubtitle2=255,246,42
ColorInfoText1=237,231,216
ColorInfoText2=201,205,209
FontName=Arial
FontSize1=6
FontSize2=9
FontSizeS=7

; color palette
PaletteColor1=#TEXTCHANGE1#
PaletteColor2=#TEXTCHANGE4#
PaletteColor3=#TEXTCHANGE2#

;=====================|   STYLES   |=====================

[cpucoremeterstyle]
SolidColor=0,0,0,0		; This is the background colour of the graph
AntiAlias=1
LineWidth=2
GraphOrientation=Vertical

[styleMAINDARKText]
FontColor=#TEXTCHANGE1#
FontSize=#TEXTMAINDARKSIZE#
FontFace=#FONT#
StringAlign=RIGHT
AntiAlias=1
StringStyle=BOLD
StringEffect=Shadow
FontEffectColor=0,0,0,80

[styleMAINLIGHTText]
FontColor=#TEXTCHANGE2#
FontSize=#TEXTMAINLIGHTSIZE#
FontFace=#FONT#
StringAlign=RIGHT
AntiAlias=1
StringStyle=BOLD
StringEffect=Shadow
FontEffectColor=0,0,0,80

[styleMISCText]
FontColor=#TEXTCHANGE3#
FontSize=#TEXTMISCSIZE#
FontFace=#FONT#
StringAlign=RIGHT
AntiAlias=1
StringStyle=BOLD
StringEffect=Shadow
FontEffectColor=0,0,0,80

[styleSmallText]
FontColor=#TEXTCHANGE4#
FontSize=#TEXTSMALLSIZE#
FontFace=#FONT#
StringAlign=LEFT
AntiAlias=1
StringStyle=Normal
StringEffect=Shadow
FontEffectColor=0,0,0,80

[styleSettingSmallText]
FontColor=#TEXTCHANGE4#
FontSize=#TEXTSETTINGSMALLSIZE#
FontFace=#FONT#
StringAlign=LEFT
AntiAlias=1
StringStyle=Normal
StringEffect=Shadow
FontEffectColor=0,0,0,80

[styleSmallLightText]
FontColor=#TEXTCHANGE2#
FontSize=#TEXTSUPERSMALLSIZE#
FontFace=Roboto
StringAlign=LEFT
AntiAlias=1
StringStyle=Normal
StringEffect=Shadow
FontEffectColor=0,0,0,80

[styleSmallDarkText]
FontColor=#TEXTCHANGE1#
FontSize=#TEXTSUPERSMALLSIZE#
FontFace=Roboto
StringAlign=LEFT
AntiAlias=1
StringStyle=Normal
StringEffect=Shadow
FontEffectColor=0,0,0,80
