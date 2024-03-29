;Category styles
[CategoryIcon]
AccurateText=1
AntiAlias=1
X=0
Y=0R
Padding=[#s_CategoryTitleXPadding],[#s_CategoryIconTopPadding],0,0
FontSize=#s_FontSize1#
FontFace=#s_IconFontFace#
SolidColor=[#s_DebugCategoryIconColor[#s_DebugColors]] 
FontColor=[#s_FontColor]

[CategoryTitle]
AccurateText=1
AntiAlias=1
Y=0r
X=0R
Padding=0,[#s_CategoryTitleTopPadding],0,0
ClipString=2
FontFace=#s_FontFace#
FontWeight=#s_CategoryTitleFontWeight#
FontSize=#s_FontSize1#
InlineSetting=CharacterSpacing | [#s_TitleIconNudge] | *
InlinePattern=^.
DynamicVariables=1
SolidColor=[#s_DebugCategoryTitleColor[#s_DebugColors]] 
FontColor=[#s_FontColor]

[ThickDescription]
FontWeight=[#s_CategoryDescriptionFontWeight]

[CategoryTitleSeparator]
X=0
Y=0R
H=[#s_CategoryTitleBottomPadding]
W=[#s_RightPanelW]
SolidColor=[#s_DebugSeparatorColor[#s_DebugColors]] 

;Variable styles
[VariableIcon]
AccurateText=1
AntiAlias=1
X=0
Y=0R
Padding=[#s_VariableXPadding],0,0,0
FontSize=[#s_FontSize1]
FontFace=[#s_IconFontFace]
SolidColor=[#s_DebugCategoryIconColor[#s_DebugColors]]
FontColor=[#s_FontColor]

[VarTitle]
AccurateText=1
AntiAlias=1
Y=0r
X=0R
W=([#s_RightPanelW] - [#s_VariableXPadding] * 2)
ClipString=2
Padding=0,0,[#s_VariableXPadding],0
FontFace=[#s_FontFace]
FontSize=[#s_FontSize2]
FontWeight=[#s_VariableTitleFontWeight]
InlineSetting=CharacterSpacing | [#s_TitleIconNudge] | *
InlinePattern=^.
SolidColor=[#s_DebugVariableTitleColor[#s_DebugColors]] 
FontColor=[#s_FontColor]

[VarDescription]
AccurateText=1
AntiAlias=1
X=[#s_VariableXPadding]
Y=0R
W=([#s_RightPanelW] - [#s_VariableXPadding] * 2)
ClipString=2
Padding=0,0,[#s_VariableXPadding],0
FontFace=[#s_FontFace]
FontSize=[#s_FontSize4]
SolidColor=[#s_DebugDescriptionColor[#s_DebugColors]] 
FontColor=[#s_FontColor]

[VarStringValue]
AccurateText=1
AntiAlias=1
Y=0R
X=0r
W=([#s_RightPanelW] - [#s_VariableXPadding] * 2)
ClipString=2
Padding=0,[#s_ValueYPadding],[#s_VariableXPadding],[#s_ValueYPadding]
FontColor=[#color5]
FontFace=[#s_FontFace]
FontSize=[#s_FontSize3]
SolidColor=[#s_DebugValueColor[#s_DebugColors]] 
MouseOverAction=[!SetOption #CURRENTSECTION# FontColor [#color6]][!SetOption #CURRENTSECTION# FontWeight [#s_SelectedFontWeight]][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FontColor [#color5]][!SetOption #CURRENTSECTION# FontWeight [#s_FontWeight]][!UpdateMeter #CURRENTSECTION#][!Redraw]

[VarColorString]
Y=0r
X=0R
FontColor=[#color5]
Padding=[#s_ColorStringLeftPadding],([#s_ColorSize] - [#s_FontSize3]),[#s_VariableXPadding],(([#s_ColorSize] - [#s_FontSize3]) + [#s_ValueYPadding])

[Link1]
MouseOverAction=[!SetOption #CURRENTSECTION# FontColor [#color6]][!SetOption #CURRENTSECTION# InlineSetting "Underline"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FontColor [#color5]][!SetOption #CURRENTSECTION# InlineSetting ""][!UpdateMeter #CURRENTSECTION#][!Redraw]

[Link0]
MouseOverAction=
MouseLeaveAction=

[Link]
FontColor=[#s_FontColor]

[VarToggleValue]
X=(([#s_ToggleSize] / 2) + [#s_VariableXPadding])
DynamicVariables=1
SolidColor=[#s_DebugToggleColor[#s_DebugColors]] 

[VarColorValue]
X=[#s_VariableXPadding]
Y=[#s_ValueYPadding]R
SolidColor=[#s_DebugColorColor[#s_DebugColors]] 
MouseOverAction=[!SetOption #CURRENTSECTION# "Outline" "Stroke Color [#color6]"][!SetVariable s_ColorStrokeWidth [#s_ColorStrokeWidthSelected]][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# "Outline" "Stroke Color [#color5]"][!SetVariable s_ColorStrokeWidth [#s_ColorStrokeWidth]][!UpdateMeter #CURRENTSECTION#][!Redraw]

