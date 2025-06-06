;1.2.0 Status 状态显示
;2.1.0 Extraevents 自定义事件

[StatusGroup]
Group=status
[TimingGroup]
Group=Timing

[StatusScript]
Measure=Script
ScriptFile=Scripts\status.lua
UpdateDivider=1
[ExtraeventsScript]
Measure=Script
ScriptFile=Scripts\extraevents.lua
UpdateDivider=1

[TimingMeasure]
Measure=String
Text=1
DynamicVariables=1
UpdateDivider=2
OnUpdateAction=[TimingScript]
[TimingScript]
Measure=Script
ScriptFile=Scripts\Timing.lua
UpdateDivider=1

[TextMeter1]
Meter=String
MeterStyle=TextStyle
FontFace=MiSans Medium
FontSize=[&ScaleScript:ScaleCoordinates(8)]
FontColor=0,0,0
Text=当前状态
X=[&ScaleScript:ScaleCoordinates(670)]
Y=[&ScaleScript:ScaleCoordinates(70)]
Group=status
DynamicVariables=1

[TextMeter2]
Meter=String
MeterStyle=TextStyle
FontFace=MiSans Medium
FontSize=[&ScaleScript:ScaleCoordinates(8)]
FontColor=0,0,0
Text=状态显示
X=[&ScaleScript:ScaleCoordinates(670)]
Y=[&ScaleScript:ScaleCoordinates(75)]
Hidden=1
DynamicVariables=1

[TextMeter3]
Meter=String
MeterStyle=TextStyle
FontFace=MiSans Medium
FontSize=[&ScaleScript:ScaleCoordinates(8)]
FontColor=0,0,0
Text=已关闭
X=[&ScaleScript:ScaleCoordinates(676)]
Y=[&ScaleScript:ScaleCoordinates(87)]
Hidden=1
DynamicVariables=1

[ClassstatusupdateMeasure]
;课程状态更新
Measure=String
Text=1
DynamicVariables=1
UpdateDivider=#statusupdate#
OnUpdateAction=[StatusScript]
Group=status

[ExtraeventsupdateMeasure]
;自定义状态更新
Measure=String
Text=1
DynamicVariables=1
UpdateDivider=#statusupdate#
OnUpdateAction=[ExtraeventsScript]
Group=status

[ClassStatusMeter1]
;下课状态
Meter=String
MeterStyle=TextStyle
FontFace=MiSans Demibold
Fontcolor=0,255,0
FontSize=[&ScaleScript:ScaleCoordinates(13)]
InlineSetting=Shadow | 0 | 0 | 1.1 | 0,0,0,250
Text=下课
X=[&ScaleScript:ScaleCoordinates(672)]
Y=[&ScaleScript:ScaleCoordinates(90)]
Hidden=0
Group=status
DynamicVariables=1

[ClassStatusMeter2]
;即将上课状态
Meter=String
MeterStyle=TextStyle
FontFace=MiSans Demibold
Fontcolor=255,255,0
FontSize=[&ScaleScript:ScaleCoordinates(9.5)]
InlineSetting=Shadow | 0 | 0 | 1.7 | 0,0,0,250
Text=即将上课
X=[&ScaleScript:ScaleCoordinates(664)]
Y=[&ScaleScript:ScaleCoordinates(93)]
Hidden=1
Group=status
DynamicVariables=1

[ClassStatusMeter3]
;上课状态
Meter=String
MeterStyle=TextStyle
FontFace=MiSans Demibold
Fontcolor=255,0,0
FontSize=[&ScaleScript:ScaleCoordinates(13)]
;InlineSetting=Shadow | 0 | 0 | 1 | 0,0,0,150
Text=上课
X=[&ScaleScript:ScaleCoordinates(672)]
Y=[&ScaleScript:ScaleCoordinates(90)]
Hidden=1
Group=status
DynamicVariables=1
