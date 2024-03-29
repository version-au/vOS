[MeasureWeather]
Measure=Plugin
Plugin=WebParser
URL=https://www.yahoo.com/news/weather
RegExp=(?siU)<h1 class="city.*data-reactid="7">(.*)</h1>.*<div class="My\(2px\).*60x60\/(.*)@2x.png.*data-reactid=".*">(.*)<.*<span class="Va\(t\)" data-reactid=".*">(.*)</span> 
UpdateRate=900


;-------------------------------------------------------------
;-------------------------------------------------------------

[MeasureLocation]
Measure=Plugin
Plugin=WebParser
URL=[MeasureWeather]
StringIndex=1
DynamicVariables=1

[MeasureWeatherIcons]
Measure=Plugin
Plugin=WebParser
URL=[MeasureWeather]
StringIndex=2
DynamicVariables=1
Substitute="rain_day_night":"rain","scattered_showers_day_night":"rain","windy_day_night":"wind","mostly_cloudy_day_night":"cloudy","cloudy_day_night":"cloudy","snow_rain_mix_day_night":"sleet","fair_day":"clear_day","fair_night":"clear_night","flurries_day_night":"snow","snow_day_night":"snow","thundershowers_day_night":"rain","fog_day_night":"fog"

[MeasureWeatherCond]
Measure=Plugin
Plugin=WebParser
URL=[MeasureWeather]
StringIndex=3
DynamicVariables=1
;Substitute=#Conditions#

[MeasureTempFahrenheit]
Measure=Plugin
Plugin=WebParser
URL=[MeasureWeather]
StringIndex=4
DynamicVariables=1

[MeasureTempCelsius]
Measure=Calc
Formula=Round((MeasureTempFahrenheit-32)*5/9)
Substitute="-18":""
