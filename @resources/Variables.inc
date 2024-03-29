[Variables]
;@About| Name vOS | Description Change colors, settings and update HWiNFO values. | Icon [\xE897]

;=====================|   6 MAIN COLORS   |=====================
;@Topic | Name Colors | Icon [\xE713]
;@ | Name Bar/Gadget Colors | Icon [\xE73E]
;?Color | Name Color 1
COLOR1=2A2A2A
;SysBarColor
;GradColor2
;?Color | Name Color 2
COLOR2=220,178,166
;StrokeMainColor
;PaletteColor2
;TEXTSMALLCOLOR
;?Color | Name Color 3
COLOR3=2A2A2A
;GradColor1
;?Color | Name Color 4
COLOR4=F1EEDD
;LineColor1
;HDDcolorused
;PaletteColor1
;TEXTMAINDARK
;?Color | Name Color 5
COLOR5=EC6245
;LineColor2
;HDDcolorfree
;PaletteColor3
;TEXTMAINLIGHT
;TEXTMISC
;?Color | Name Color 6
COLOR6=3D312E
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
TEXTCOLOR4=126,0,96






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
AppPath6=C:\Users\steve\Documents\Shortcuts\Links
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
EnableGS3=1
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
HWINFO2=ValueRaw2
;?String | Name CPU Voltage
HWINFO3=Value3
;?String | Name CPU TDC
HWINFO4=Value4
;?String | Name CPU Wattage
HWINFO15=Value5
;?String | Name Output Fans
HWINFO5=ValueRaw6
;?String | Name CPU Fans
HWINFO6=ValueRaw7
;?String | Name Input Fans
HWINFO7=ValueRaw8
;?String | Name GPU Fans
HWINFO8=ValueRaw9
;?String | Name AIO Pump
HWINFO9=ValueRaw7
;?String | Name Ram Stick 1 Temp
HWINFO10=ValueRaw10
;?String | Name Ram Stick 2 Temp
HWINFO11=ValueRaw11
;?String | Name Ram Stick 3 Temp
HWINFO12=ValueRaw12
;?String | Name Ram Stick 4 Temp
HWINFO13=ValueRaw13
;?String | Name GPU Temperature
HWINFO14=ValueRaw14
;?String | Name GPU Amps
HWINFO16=Value16
;?String | Name GPU Wattage
HWINFO17=Value17
;?String | Name GPU Clock
HWINFO18=Value18
;?String | Name GPU Memory Clock
HWINFO19=Value19
;?String | Name GPU Memory Usage
HWINFO20=Value21
;?String | Name Network Download Total
HWINFO21=Value23
;?String | Name Network Upload Total
HWINFO22=Value24
;?String | Name RTSS FPS
HWINFO23=ValueRaw22




FONT=Roboto Medium
