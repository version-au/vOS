; Do NOT change this file unless you are sure you know what you are doing !!!
; ========================================================================

; © 2020 by xxenium

[Variables]
@Include=#@#Variables.inc

Location=(?siU)"getSunV3LocationPointUrlConfig":.*{"location":{"latitude":(.*),"longitude":(.*),.*,"adminDistrict":(.*),"adminDistrictCode":(.*),.*,"country":(.*),"countryCode":(.*),.*,"displayName":(.*),.*}

CurrentObservations=(?siU)"getSunV3CurrentObservationsUrlConfig":.*{"cloudCeiling":.*,"cloudCoverPhrase":".*","dayOfWeek":".*","dayOrNight":".*","expirationTimeUtc":.*,"iconCode":(.*),"iconCodeExtend":.*,"obsQualifierCode":.*,"obsQualifierSeverity":.*,"precip1Hour":.*,"precip6Hour":.*,"precip24Hour":.*,"pressureAltimeter":(.*),"pressureChange":(.*),"pressureMeanSeaLevel":.*"pressureTendencyCode":.*,"pressureTendencyTrend":"(.*)","relativeHumidity":(.*),"snow1Hour":.*,"snow6Hour":.*,"snow24Hour":.*,"sunriseTimeLocal":"(.*)","sunriseTimeUtc":.*"sunsetTimeLocal":"(.*)","sunsetTimeUtc":.*"temperature":(.*),"temperatureChange24Hour":.*,"temperatureDewPoint":(.*),"temperatureFeelsLike":(.*),"temperatureHeatIndex":.*"temperatureMax24Hour":.*"temperatureMaxSince7Am":.*"temperatureMin24Hour":.*"temperatureWindChill":.*"uvDescription":"(.*)","uvIndex":(.*),"validTimeLocal":"(.*)","validTimeUtc":.*"visibility":(.*),"windDirection":.*"windDirectionCardinal":"(.*)","windGust":(.*),"windSpeed":(.*),"wxPhraseLong":"(.*)","wxPhraseMedium":.*,"wxPhraseShort":.*}

UpdateTimeZone=(?siU)"getSunV3CurrentDateTimeByGeocodeUrlConfig":{"geocode:.*":{.*,"data":{"dateTime":".*","ianaTimeZone":".*","timeZoneAbbreviation":"(.*)"}

DailyForecastTempMax=(?siU)"getSunV3DailyForecastUrlConfig":.*{.*"temperatureMax":(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),.*

DailyForecastTempMin=(?siU)"getSunV3DailyForecastUrlConfig":.*{.*"temperatureMin":(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),.*

DailyForecastDate=(?siU)"getSunV3DailyForecastUrlConfig":.*{.*"validTimeLocal":.*"(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)"

DailyForecastCondition=(?siU)"getSunV3DailyForecastUrlConfig":.*{.*"wxPhraseLong":(.*),"(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)"

WeatherParametersLabels=(?siU)"wxu-today-details":{.*,"feelsLike":"(.*)","highLow":"(.*)","wind":"(.*)","humidity":"(.*)","dewPoint":"(.*)","pressure":"(.*)","uvIndex":"(.*)","visibility":"(.*)","moonPhase":"(.*)".*}

WeatherParametersUnits=(?siU)"wxu-general":{"noData":".*","mph":"(.*)","km.*h":"(.*)","in":"(.*)","mb":"(.*)","mi":"(.*)","km":"(.*)",.*}




; © 2020 by xxenium









