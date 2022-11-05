[Variables]
;@About| Name vOS | Description Change colors, settings and update HWiNFO values. | Icon [\xE897]

;=====================|   6 MAIN COLORS   |=====================
;@Topic | Name Colors | Icon [\xE713]
;@ | Name Bar/Gadget Colors | Icon [\xE73E]
;?Color | Name Color 1 | Bar/Gadget Color / Gradient Color 2
COLOR1=07182D
;SysBarColor
;GradColor2
;?Color | Name Color 2 | Bar/Gadget Color / Gradient Color 2
COLOR2=A2EBF3
;StrokeMainColor
;PaletteColor2
;TEXTSMALLCOLOR
;?Color | Name Color 3 | Bar/Gadget Color / Gradient Color 2
COLOR3=352442
;GradColor1
;?Color | Name Color 4 | Bar/Gadget Color / Gradient Color 2
COLOR4=CC2D65
;LineColor1
;HDDcolorused
;PaletteColor1
;TEXTMAINDARK
;?Color | Name Color 5 | Bar/Gadget Color / Gradient Color 2
COLOR5=9E9DE4
;LineColor2
;HDDcolorfree
;PaletteColor3
;TEXTMAINLIGHT
;TEXTMISC
;?Color | Name Color 6 | Bar/Gadget Color / Gradient Color 2
COLOR6=1E3078
;HistColor


;=====================|   PRESET COLOR EXAMPLE |=====================
;@ | Name Preset Colors | Icon [\xE73E]
;?Info | Name Color 1 | Bar/Gadget Color / Gradient Color 2
EXAMPLEPRESET1COLOR1=2E3440

@include4=#@#\PresetColors\PresetColors.inc

;=====================|   Text Colors |=====================
;@ | Name Text Colors | Icon [\xE73E]
;?Color | Name Color 1 | Main Large Dark
TEXTCHANGE1=#TEXTMAINDARK#
;?Color | Name Color 2 | Main Large Light
TEXTCHANGE2=#TEXTMAINLIGHT#
;?Color | Name Color 3 | misc
TEXTCHANGE3=#TEXTMISC#
;?Color | Name Color 4 | misc small
TEXTCHANGE4=#TEXTSMALLCOLOR#

TEXTCOLOR1=255,109,226
TEXTCOLOR2=192,193,0
TEXTCOLOR3=255,39,220
TEXTCOLOR4=0,190,178






;=====================|   WEATHER   |=====================

LocationCode=

TempSymbol=C
MeasureName2=MeasureTempCelsius

;=====================|   CALENDAR   |=====================
DefaultCalStyle=Default3

;=====================|   APPBAR/GADGET   |=====================
;@Topic | Name Skin Settings | Icon [\xE713]
;@ | Name AppBar | Icon [\xE73E]
;?String | Name Application Path 1 | Description Path to shortcut directory
AppPath1=C:\Users\steve\Documents\Shortcuts\Applications\
;?String | Name Application Path 2 | Description Path to shortcut directory
AppPath2=C:\Users\steve\Documents\Shortcuts\Games\
;?String | Name Application Path 3 | Description Path to shortcut directory
AppPath3=C:\Users\steve\Downloads\
;?String | Name AppBar Scale | Description Size scaling. 0.5 increments
APPBARSCALE=1.5

;@ | Name AppGadget | Icon [\xE73E]
;?String | Name Application Path 1 | Description Path to shortcut directory
AppPath4=C:\Users\steve\Documents\Shortcuts\Games
;?String | Name Application Path 2 | Description Path to shortcut directory
AppPath5=C:\Users\steve\Documents\Shortcuts\Applications\
;?String | Name Application Path 3 | Description Path to shortcut directory
AppPath6=
;?String | Name AppGadget Scale| Description Size scaling. 0.5 increments
APPGADGETSCALE=1.5



APPGADGETTINT1=#LINECOLOR1#
APPGADGETTINT2=#LINECOLOR1#
APPGADGETTINT3=#LINECOLOR1#


;?Toggle | Name AppGadget 1 Icon Tint
EnableGS1=0
APPGADGETGS1=(#EnableGS1# - 1)
;?Toggle | Name AppGadget 2 Icon Tint
EnableGS2=0
APPGADGETGS2=(#EnableGS2# - 1)
;?Toggle | Name AppGadget 3 Icon Tint
EnableGS3=0
APPGADGETGS3=(#EnableGS3# - 1)




;=====================|   HDDS   |====================
;@ | Name DriveBar/Gadget | Icon [\xE73E]
;?String | Name Number of Drives | Description Choose how many drives you want displayed. (7 Max)
NumberOfDrives=7
;?String | Name Drive 1 | Description Input the drive letter you want shown
Drive1=C
;?String | Name Drive 2 | Description Input the drive letter you want shown
Drive2=D
;?String | Name Drive 3 | Description Input the drive letter you want shown
Drive3=E
;?String | Name Drive 4 | Description Input the drive letter you want shown
Drive4=F
;?String | Name Drive 5 | Description Input the drive letter you want shown
Drive5=G
;?String | Name Drive 6 | Description Input the drive letter you want shown
Drive6=B
;?String | Name Drive 7 | Description Input the drive letter you want shown
Drive7=S


;=====================|   NET   |====================

;MaxDownloadMbits=100
;MaxUploadMbits=7

;Interface=Best

;=====================|   MUSIC PLAYER   |====================
;@ | Name MusicBar | Icon [\xE73E]
;?String | Name Player name | Description Select which player you are using
PLAYERNAME=Spotify
;?Info | Name Click for list of players | Link 1
List of players=https://github.com/version-au/vOS/blob/1/%40resources/mediaplayers.txt


;=====================|   FANS   |====================
;@ | Name FanBar | Icon [\xE73E]
;?String | Name Output Fans Max RPM | Description Input maximum RPM of output fans
FAN1=2000
;?String | Name Input Fans Max RPM | Description Input maximum RPM of input fans
FAN2=1500
;?String | Name CPU Fans Max RPM | Description Input maximum RPM of CPU fans
FAN3=2000
;?String | Name GPU Fans Max RPM | Description Input maximum RPM of GPU fans
FAN4=2000
;?String | Name AIO Pump Max RPM | Description Input maximum RPM of AIO pump
FAN5=2000

;=====================|   SCALING   |====================
ScrollMouseIncrement=0.5


;=====================|   HWINFO   |====================
;@Topic | Name HWiNFO Settings | Icon [\xE713]
;@ | Name Index Values | Description Right click and select 'Display Sensors' | Icon [\xE73E]
;?String | Name CPU Avg Clock
HWINFO1=Value0
;?String | Name CPU Temperature
HWINFO2=ValueRaw1
;?String | Name CPU Voltage
HWINFO3=Value2
;?String | Name CPU TDC
HWINFO4=Value3
;?String | Name CPU Wattage
HWINFO15=Value4
;?String | Name Fan 1
HWINFO5=ValueRaw5
;?String | Name CPU Fan
HWINFO6=ValueRaw6
;?String | Name Fan 2
HWINFO7=ValueRaw7
;?String | Name Fan 3
HWINFO8=ValueRaw8
;?String | Name AIO Pump
HWINFO9=ValueRaw6
;?String | Name Ram Stick 1 Temp
HWINFO10=ValueRaw9
;?String | Name Ram Stick 2 Temp
HWINFO11=ValueRaw10
;?String | Name Ram Stick 3 Temp
HWINFO12=ValueRaw11
;?String | Name Ram Stick 4 Temp
HWINFO13=ValueRaw12
;?String | Name GPU Temperature
HWINFO14=ValueRaw13
;?String | Name GPU Amps
HWINFO16=Value14
;?String | Name GPU Wattage
HWINFO17=Value15
;?String | Name GPU Clock
HWINFO18=Value16
;?String | Name GPU Memory Clock
HWINFO19=ValueRaw17
;?String | Name GPU Memory Usage
HWINFO20=Value19
;?String | Name Network Download Total
HWINFO21=Value21
;?String | Name Network Upload Total
HWINFO22=Value22
;?String | Name RTSS FPS
HWINFO23=ValueRaw20




FONT=Roboto Medium
