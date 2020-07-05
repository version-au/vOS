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

;=====================|   APP VOLUME EXCLUDED   |====================

VOLUMEEXCLUDED=rainmeter.exe;Discord.exe;steam.exe

;=====================|   APPBAR VIEW   |=====================

AppPath1=C:\Users\steve\Documents\Shortcuts\Applications\
AppPath2=C:\Users\steve\Documents\Shortcuts\Games\
AppPath3=C:\Users\steve\Downloads\


;=====================|   HDDS   |====================

Drive1=C
Drive2=D
Drive3=F
Drive4=G
Drive5=
Drive6=
Drive7=
Drive8=S
Drive9=B

;=====================|   NET   |====================

MaxDownloadMbits=90
MaxUploadMbits=7

Interface=Best

;=====================|   MUSIC PLAYER   |====================

PLAYERNAME=Spotify

;=====================|   CALENDAR   |====================

;Name of the Style Sheet
Style=Default

;Custom text for Weekday labels. Uses the following format: Sun|Mon|Tue|Wed|Thu|Fri|Sat
DayLabels=

;Set to 1 to hide week 6 if not included in the current month
HideLastWeek=0

;Holidays File names
;Note: For Holiday file names, multiple sources can be used by uisng the pipe delimiter (|).
EventFile=#@#Calendars\Holidays.xml

;Custom Text formatting for Month Labels. See Readme for details.
LabelText=

;Set to 1 to add a leading zero to any number below 10.
LeadingZeroes=0

;Custom text for Month labels. Uses the following format: Jan|Feb|Mar|Apr|May|Jun|Jul|Aug|Sep|Oct|Nov|Dec
MonthLabels=January|February|March|April|May|June|July|August|September|October|November|December

;Set to 1 to have the week start on Monday
StartOnMonday=1

;The format for the list of upcoming events. {$day} and {$desc} are valid variables.
NextFormat=

;Show the Moon Phases as events
ShowMoonPhases=0

;Color to use for the Moon Phases Events
MoonColor=

;Set to 0 to hide all calendar events including the Moon Phases
ShowEvents=0

;Set to 1 to disable scroll actions for changing the month
DisableScroll=0

;Date indicator line color
Clr.Hrl=#TEXTMAINDARK#

;===== Positioning options =====
;Cell Dimensions - The dimensions of the individual string meters.
C.w=14
C.h=14
;Spacers and bumper
;Vertical space between cells
Space.x=6
;Horizontal space between cells
Space.y=2
;Space on left and right of calendar
Bumper.x=6
;Space on top of calendar
Bumper.top=40
;Space on bottom of calendar
Bumper.bottom=0
