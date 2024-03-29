[FirstRightPanel]
Meter=String
Text=First
FontColor=0,0,0,0
MeterStyle=FirstItem | RightPanel
Y=[#s_ScrollRightPanel]
[CategoryIcon0]
Meter=String
Text=[\xE897]
MeterStyle=CategoryIcon | RightPanel

[Title0]
Meter=String
Text=vOS 
MeterStyle=CategoryTitle | RightPanel
W=([#s_RightPanelW] - [CategoryIcon0:W])

[CategoryDescription0]
Meter=String
Text=Change colors, settings and update HWiNFO values.                               ✔ Bar/Gadget Colors - Customize the color of the skin                          ✔ Preset Colors - Choose from a selection of preset color profiles.              ✔ Text Colors - Choose a different color for the text elements.              ✔ AppBar - Choose the path for the Appbars. Input a scale size.                      ✔ AppGadget - Choose the path for the AppGadgets. Input a scale size. Turn icon tinting on or off.                                                                         ✔ DriveBar/Gadget - Select number of drives to display. Choose the drive letter for each drive.                                                                            ✔ MusicBar - Specify the media player you are using.                                             ✔ FanBar - Specify the maximum rpm of your fans.                                ✔ Index Values - Input the HWiNFO index values. Right click to display a list of the sensors available.
MeterStyle=VarDescription | ThickDescription | RightPanel
InlineSetting=Weight | 700
InlinePattern=Bar/Gadget Colors -
InlineSetting2=Weight | 700
InlinePattern2=Preset Colors -
InlineSetting3=Weight | 700
InlinePattern3=Text Colors -
InlineSetting4=Weight | 700
InlinePattern4=AppBar -
InlineSetting5=Weight | 700
InlinePattern5=AppGadget -
InlineSetting6=Weight | 700
InlinePattern6=DriveBar/Gadget -
InlineSetting7=Weight | 700
InlinePattern7=MusicBar -
InlineSetting8=Weight | 700
InlinePattern8=FanBar -
InlineSetting9=Weight | 700
InlinePattern9=Index Values -

[CategoryTitleSeparator0]
Meter=Image
MeterStyle=CategoryTitleSeparator | RightPanel

[LastRightPanel]
Meter=String
Text=Last
FontColor=255,0,0,0
MeterStyle=LastItem | RightPanel

[ScrollDownRightPanel]
Measure=Calc
Formula=[#s_ScrollRightPanel] - [#s_ScrollSpeed]
IfCondition=([LastRightPanel:Y] > [#s_ScrollTreshold])
IfTrueAction=[!SetVariable "s_ScrollRightPanel" "[&ScrollDownRightPanel]"][!DisableMeasure "ScrollDownRightPanel"][!Update][!Redraw]
IfFalseAction=[!DisableMeasure "ScrollDownRightPanel"]
IfConditionMode=1
Disabled=1
DynamicVariables=1

[ScrollUpRightPanel]
Measure=Calc
Formula=[#s_ScrollRightPanel] + [#s_ScrollSpeed]
IfCondition=([FirstRightPanel:Y] < 0)
IfTrueAction=[!SetVariable "s_ScrollRightPanel" "[&ScrollUpRightPanel]"][!DisableMeasure "ScrollUpRightPanel"][!Update][!Redraw]
IfFalseAction=[!DisableMeasure "ScrollUpRightPanel"]
IfConditionMode=1
Disabled=1
DynamicVariables=1


