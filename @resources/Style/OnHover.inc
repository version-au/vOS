[Rainmeter]
 MouseOverAction=[!DisableMeasure MeasureTimeToHide]
 MouseLeaveAction=[!EnableMeasure MeasureTimeToHide]

[MeasureTimeToHide]
 Measure=Calc
 Formula=MeasureTimeToHide + (MeasureTimeToHide <= 25)
 IfEqualValue=25
 IfEqualAction=[!HideMeterGroup Menu]#BtnLeave#[!DisableMeasure #CURRENTSECTION#]
 Disabled=1

[MeterButton.BG]
 MouseOverAction=[!CommandMeasure MeasureTransition "FadeIn('MeterButton.Fade')"][!ShowMeterGroup Menu][!UpdateMeterGroup Menu][!Redraw]