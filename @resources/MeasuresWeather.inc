; © 2020 by xxenium

; ========================================
;                 LOCATION
; ========================================

[MeasureLocation]
Measure=WebParser
Url=#URL#
UserAgent=Mozilla/5.0 (Linux; Android 10; Pixel 4) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/83.0.4103.61 Mobile Safari/537.36
;ForceReload=1
RegExp=#Location#
UpdateRate=600
LogSubstringErrors=0
DecodeCharacterReference=1
FinishAction=[!EnableMeasureGroup Location][!UpdateMeasureGroup Location]

[MeasureCountry]
Measure=WebParser
Url=[MeasureLocation]
StringIndex=5
Substitute="null":"",'"':""
Group=Location
Disabled=1

[MeasureCity]
Measure=WebParser
Url=[MeasureLocation]
StringIndex=7
Substitute="null":"",'"':""
Group=Location
Disabled=1


; ========================================
;             CURRENT WEATHER
; ========================================

[MeasureCurrentObservations]
Measure=WebParser
Url=#URL#
UserAgent=Mozilla/5.0 (Linux; Android 10; Pixel 4) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/83.0.4103.61 Mobile Safari/537.36
;ForceReload=1
RegExp=#CurrentObservations#
UpdateRate=600
LogSubstringErrors=0
FinishAction=[!EnableMeasureGroup Current][!UpdateMeasureGroup Current]

[MeasureHumidity]
Measure=WebParser
Url=[MeasureCurrentObservations]
StringIndex=5
Group=Current
Disabled=1

[MeasureTemperature]
Measure=WebParser
Url=[MeasureCurrentObservations]
StringIndex=8
Group=Current
Disabled=1

[MeasureUpdate]
Measure=WebParser
Url=[MeasureCurrentObservations]
StringIndex=13
RegExpSubstitute=1
Substitute="^.*T(.*):.*$":"\1"
Group=Current
Disabled=1

[MeasureCondition]
Measure=WebParser
Url=[MeasureCurrentObservations]
StringIndex=18
DecodeCharacterReference=1
Substitute="\u002F":"/"
Group=Current
Disabled=1

; ========================================
;         WEATHER PARAMETERS LABELS
; ========================================


[MeasureWeatherParametersLabels]
Measure=WebParser
Url=#URL#
UserAgent=Mozilla/5.0 (Linux; Android 10; Pixel 4) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/83.0.4103.61 Mobile Safari/537.36
;ForceReload=1
RegExp=#WeatherParametersLabels#
UpdateRate=600
LogSubstringErrors=0
FinishAction=[!EnableMeasureGroup Labels][!UpdateMeasureGroup Labels]

[MeasureHumidityLabels]
Measure=WebParser
Url=[MeasureWeatherParametersLabels]
StringIndex=4
Group=Labels
Disabled=1

; ========================================
;          WEATHER PARAMETERS UNITS
; ========================================


[MeasureWeatherParametersUnits]
Measure=WebParser
Url=#URL#
UserAgent=Mozilla/5.0 (Linux; Android 10; Pixel 4) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/83.0.4103.61 Mobile Safari/537.36
;ForceReload=1
RegExp=#WeatherParametersUnits#
UpdateRate=600
LogSubstringErrors=0
FinishAction=[!EnableMeasureGroup Units][!UpdateMeasureGroup Units]

[MeasureMph]
Measure=WebParser
Url=[MeasureWeatherParametersUnits]
StringIndex=1
Substitute="\u002F":"/"
Group=Units
Disabled=1

[MeasureKmh]
Measure=WebParser
Url=[MeasureWeatherParametersUnits]
StringIndex=2
Substitute="\u002F":"/"
Group=Units
Disabled=1

[MeasureIn]
Measure=WebParser
Url=[MeasureWeatherParametersUnits]
StringIndex=3
Group=Units
Disabled=1

[MeasureMb]
Measure=WebParser
Url=[MeasureWeatherParametersUnits]
StringIndex=4
Group=Units
Disabled=1

[MeasureMile]
Measure=WebParser
Url=[MeasureWeatherParametersUnits]
StringIndex=5
Group=Units
Disabled=1

[MeasureKm]
Measure=WebParser
Url=[MeasureWeatherParametersUnits]
StringIndex=6
Group=Units
Disabled=1




; © 2020 by xxenium
