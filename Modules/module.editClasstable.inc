;Menu-临时课表更改
[ChangeMenuGroup]
Group=ChangeMenu

[ChangeStatusGroup]
Group=ChangeStatus

[ChangeMenuBackgroudMeter]
Meter=Image
DynamicVariables=1
AntiAlias=1
ImageName=#@#img\Shape 5.png
DynamicVariables=1
W=[&ScaleScript:ScaleCoordinates(400)]
X=[&ScaleScript:ScaleCoordinates(100)]
Y=[&ScaleScript:ScaleCoordinates(300)]
ImageAlpha=#bgalpha#
Group=ChangeMenu
Hidden=1

[ChangeMenuTopMeter]
Meter=Image
DynamicVariables=1
AntiAlias=1
ImageName=#@#img\Shape 4.png
DynamicVariables=1
W=[&ScaleScript:ScaleCoordinates(400)]
X=[&ScaleScript:ScaleCoordinates(100)]
Y=[&ScaleScript:ScaleCoordinates(300)]
ImageAlpha=#bgalpha#
Group=ChangeMenu
Hidden=1

[ChangeMenuCloseMeter]
Meter=Image
ImageName=#@#img\cl.png
ToolTipText=关闭
W=[&ScaleScript:ScaleCoordinates(26)]
X=[&ScaleScript:ScaleCoordinates(465)]
Y=[&ScaleScript:ScaleCoordinates(305)]
DynamicVariables=1
LeftMouseDownAction=[!HideMeterGroup "ChangeMenu"][!HideMeterGroup "ChangeStatus"]
Group=ChangeMenu
Hidden=1

[ChangeMenuTopiconMeter]
Meter=Image
ImageName=#@#img\ch.png
W=[&ScaleScript:ScaleCoordinates(25)]
X=[&ScaleScript:ScaleCoordinates(105)]
Y=[&ScaleScript:ScaleCoordinates(305)]
LeftMouseDownAction=
Group=ChangeMenu
Hidden=1
DynamicVariables=1

[ChangeMenuTopWordMeter]
Meter=String
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontSize=[&ScaleScript:ScaleCoordinates(13)]
Text=临时课表更改 
X=[&ScaleScript:ScaleCoordinates(130)]
Y=[&ScaleScript:ScaleCoordinates(306)]
Hidden=1
Group=ChangeMenu

[ChangeBlock1bgMeter]
Meter=Image
DynamicVariables=1
AntiAlias=1
ImageName=#@#img\changeView1.png
DynamicVariables=1
H=[&ScaleScript:ScaleCoordinates(110)]
X=[&ScaleScript:ScaleCoordinates(115)]
Y=[&ScaleScript:ScaleCoordinates(350)]
Group=ChangeMenu
Hidden=1

[ChangeMenuInput1Introduce0Meter]
Meter=String
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontSize=[&ScaleScript:ScaleCoordinates(13)]
Text=Mode: 通过序号更改显示内容 >>>
X=[&ScaleScript:ScaleCoordinates(130)]
Y=[&ScaleScript:ScaleCoordinates(360)]
Hidden=1
Group=ChangeMenu

[ChangeMenuInput1Introduce2Meter]
Meter=String
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontSize=[&ScaleScript:ScaleCoordinates(8)]
Text=点击左侧输入节数，右侧输入课程，每次操作需按下Enter键确认
X=[&ScaleScript:ScaleCoordinates(138)]
Y=[&ScaleScript:ScaleCoordinates(440)]
Hidden=1
Group=ChangeMenu

[Changeinput1]
Measure=Plugin
Plugin=InputTextC
DynamicVariables=1
Hidden=1
InputLimit=2
InputNumber=1
AntiAlias=1
X=133
Y=393
W=29
H=29
Scale=#scale#
SolidColor=245,245,245
FontColor=0,0,0
FontFace=MiSans Normal
FontSize=14
StringAlign=Left
FocusDismiss=1
OnDismissAction=[!ShowMeter "Changeinputstatus1Meter"][!HideMeter "Changeinputstatus2Meter"]
Command1=[!SetVariable change "$UserInput$"]
Command2=[!SetOption ChangeMenuInput1IntroduceMeter Text [#change]]
Command3=[!ShowMeter "ChangeMenuInput1IntroduceMeter"]
Group=ChangeMenu

[ChangeinputensureMeter]
Meter=Image
DynamicVariables=1
AntiAlias=1
ImageName=#@#img\buttom1.png
DynamicVariables=1
W=[&ScaleScript:ScaleCoordinates(35)]
X=[&ScaleScript:ScaleCoordinates(130)]
Y=[&ScaleScript:ScaleCoordinates(390)]
Group=ChangeMenu
Hidden=1
LeftMouseUpAction=[!CommandMeasure Changeinput1 "ExecuteBatch ALL"][!HideMeter "Changeinputstatus1Meter"][!HideMeter "Changeinputstatus2Meter"]

[ChangeMenuInput1IntroduceMeter]
;显示你输入的数字
Meter=String
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontColor=100,100,100
FontSize=[&ScaleScript:ScaleCoordinates(15)]
Text=0
X=[&ScaleScript:ScaleCoordinates(136)]
Y=[&ScaleScript:ScaleCoordinates(393)]
Hidden=1
Group=ChangeStatus

[Changeinputstatus0Meter]
Meter=Image
;应用未更改
DynamicVariables=1
AntiAlias=1
ImageName=#@#img\changestatus3.png
DynamicVariables=1
H=[&ScaleScript:ScaleCoordinates(15)]
X=[&ScaleScript:ScaleCoordinates(130)]
Y=[&ScaleScript:ScaleCoordinates(470)]
Hidden=1
Group=ChangeMenu

[Changeinputstatus1Meter]
Meter=Image
;应用未更改
DynamicVariables=1
AntiAlias=1
ImageName=#@#img\changestatus2.png
DynamicVariables=1
H=[&ScaleScript:ScaleCoordinates(15)]
X=[&ScaleScript:ScaleCoordinates(130)]
Y=[&ScaleScript:ScaleCoordinates(470)]
Hidden=1
Group=ChangeStatus

[Changeinputstatus2Meter]
Meter=Image
;应用已更改
DynamicVariables=1
AntiAlias=1
ImageName=#@#img\changestatus1.png
DynamicVariables=1
H=[&ScaleScript:ScaleCoordinates(15)]
X=[&ScaleScript:ScaleCoordinates(130)]
Y=[&ScaleScript:ScaleCoordinates(470)]
Hidden=1
Group=ChangeStatus

;input2
[Changeinput2]
Measure=Plugin
Plugin=InputTextC
DynamicVariables=1
Hidden=1
InputLimit=1
AntiAlias=1
X=173
Y=393
W=195
H=29
Scale=#scale#
SolidColor=245,245,245
FontColor=0,0,0
FontFace=MiSans Normal
FontSize=14
StringAlign=Left
FocusDismiss=1
OnDismissAction=[!ShowMeter "Changeinputstatus1Meter"][!HideMeter "Changeinputstatus2Meter"]
Command1=[!SetOption classMeter[#change] "Text" "$UserInput$"]
Command2=[!HideMeter "Changeinputstatus1Meter"]
Command3=[!ShowMeter "Changeinputstatus2Meter"]
Command4=[!HideMeter "ChangeMenuInput1IntroduceMeter"]
Group=ChangeMenu

[Changeinput2ensureMeter]
Meter=Image
DynamicVariables=1
AntiAlias=1
ImageName=#@#img\buttom2.png
DynamicVariables=1
H=[&ScaleScript:ScaleCoordinates(35)]
X=[&ScaleScript:ScaleCoordinates(170)]
Y=[&ScaleScript:ScaleCoordinates(390)]
Group=ChangeMenu
Hidden=1
LeftMouseUpAction=[!CommandMeasure Changeinput2 "ExecuteBatch ALL"]

;ChangeMenutipsMeter]
;Meter=String
;DynamicVariables=1
;MeterStyle=TextStyle
;FontFace=MiSans Medium
;FontSize=10
;Text=Tips:  早自习为第0节课，后续依次顺推                          确认输入内容后，需按下回车键，否则改动不会应用       刷新组件后，此处的配置会失效                                                               请不要输入无关内容！
;ClipString=2
;W=350
;X=120
;Y=490
;Hidden=1
;Group=ChangeMenu

;====mode2
[ChangeBlock2bgMeter]
Meter=Image
DynamicVariables=1
AntiAlias=1
ImageName=#@#img\changeView2.png
DynamicVariables=1
H=[&ScaleScript:ScaleCoordinates(110)]
X=[&ScaleScript:ScaleCoordinates(115)]
Y=[&ScaleScript:ScaleCoordinates(495)]
Group=ChangeMenu
Hidden=1

[Changeinput3exchangeMeter]
Meter=Image
DynamicVariables=1
AntiAlias=1
ImageName=#@#img\changebuttom1.png
DynamicVariables=1
W=[&ScaleScript:ScaleCoordinates(75)]
X=[&ScaleScript:ScaleCoordinates(250)]
Y=[&ScaleScript:ScaleCoordinates(527)]
Group=ChangeMenu
Hidden=1
LeftMouseUpAction=[&ExchangeScript:Exchangeclass([#change1],[#change2])]

[ChangeMenuInput2Introduce0Meter]
Meter=String
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontSize=[&ScaleScript:ScaleCoordinates(13)]
Text=Mode: 通过序号交换课程内容 >>>
X=[&ScaleScript:ScaleCoordinates(130)]
Y=[&ScaleScript:ScaleCoordinates(505)]
Hidden=1
Group=ChangeMenu

[ChangeMenuInput2Introduce2Meter]
Meter=String
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontSize=[&ScaleScript:ScaleCoordinates(8)]
Text=点击输入目标节数，再单击交换，每次操作需按下Enter键确认
X=[&ScaleScript:ScaleCoordinates(145)]
Y=[&ScaleScript:ScaleCoordinates(585)]
Hidden=1
Group=ChangeMenu

[Changeinput3]
Measure=Plugin
Plugin=InputTextC
DynamicVariables=1
Hidden=1
InputLimit=2
InputNumber=1
AntiAlias=1
X=203
Y=538
W=29
H=29
Scale=#scale#
SolidColor=245,245,245
FontColor=0,0,0
FontFace=MiSans Normal
FontSize=14
StringAlign=Left
FocusDismiss=1
OnDismissAction=[!ShowMeter "Changeinputstatus1Meter"][!HideMeter "Changeinputstatus2Meter"]
Command1=[!SetVariable change1 "$UserInput$"]
Command2=[!SetOption ChangeMenuInput3IntroduceMeter Text [#change1]]
Command3=[!ShowMeter "ChangeMenuInput3IntroduceMeter"]
Group=ChangeMenu

[Changeinput3ensureMeter]
Meter=Image
DynamicVariables=1
AntiAlias=1
ImageName=#@#img\buttom1.png
DynamicVariables=1
W=[&ScaleScript:ScaleCoordinates(35)]
X=[&ScaleScript:ScaleCoordinates(200)]
Y=[&ScaleScript:ScaleCoordinates(535)]
Group=ChangeMenu
Hidden=1
LeftMouseUpAction=[!CommandMeasure Changeinput3 "ExecuteBatch ALL"][!HideMeter "Changeinputstatus1Meter"][!HideMeter "Changeinputstatus2Meter"]

[ChangeMenuInput3IntroduceMeter]
;显示你输入的数字
Meter=String
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontColor=100,100,100
FontSize=[&ScaleScript:ScaleCoordinates(15)]
Text=0
X=[&ScaleScript:ScaleCoordinates(206)]
Y=[&ScaleScript:ScaleCoordinates(538)]
Hidden=1
Group=ChangeStatus

[Changeinput4]
Measure=Plugin
Plugin=InputTextC
DynamicVariables=1
Hidden=1
InputLimit=2
InputNumber=1
AntiAlias=1
X=343
Y=538
W=29
H=29
Scale=#scale#
SolidColor=245,245,245
FontColor=0,0,0
FontFace=MiSans Normal
FontSize=14
StringAlign=Left
FocusDismiss=1
OnDismissAction=[!ShowMeter "Changeinputstatus1Meter"][!HideMeter "Changeinputstatus2Meter"]
Command1=[!SetVariable change2 "$UserInput$"]
Command2=[!SetOption ChangeMenuInput4IntroduceMeter Text [#change2]]
Command3=[!ShowMeter "ChangeMenuInput4IntroduceMeter"]
Group=ChangeMenu

[Changeinput4ensureMeter]
Meter=Image
DynamicVariables=1
AntiAlias=1
ImageName=#@#img\buttom1.png
DynamicVariables=1
W=[&ScaleScript:ScaleCoordinates(35)]
X=[&ScaleScript:ScaleCoordinates(340)]
Y=[&ScaleScript:ScaleCoordinates(535)]
Group=ChangeMenu
Hidden=1
LeftMouseUpAction=[!CommandMeasure Changeinput4 "ExecuteBatch ALL"][!HideMeter "Changeinputstatus1Meter"][!HideMeter "Changeinputstatus2Meter"]

[ChangeMenuInput4IntroduceMeter]
;显示你输入的数字
Meter=String
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontColor=100,100,100
FontSize=[&ScaleScript:ScaleCoordinates(15)]
Text=0
X=[&ScaleScript:ScaleCoordinates(346)]
Y=[&ScaleScript:ScaleCoordinates(538)]
Hidden=1
Group=ChangeStatus


