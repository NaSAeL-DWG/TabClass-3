;Menu-临时课表更改
[ChangeMenuGroup]
Group=ChangeMenu

[ChangeStatusGroup]
Group=ChangeStatus

[ChangeMenuBackgroudMeter]
Meter=Shape
AntiAlias=1
shape=Rectangle 100,300,400,300,5,5 | StrokeWidth 0 | Fill LinearGradient MyFillGradient1
MyFillGradient1= 180 | 255,255,255,#bgalpha# ; 0.0 | 255,255,255,#bgalpha# ; 0.5
Group=ChangeMenu
Hidden=1

[ChangeMenuTopMeter]
Meter=Shape
AntiAlias=1
shape=Rectangle 100,300,400,35,5,5 | StrokeWidth 0 | Fill LinearGradient MyFillGradient1
MyFillGradient1= 180 | 255,255,255,#bgalpha# ; 0.0 | 255,255,255,#bgalpha# ; 0.5
Group=ChangeMenu
Hidden=1

[ChangeMenuCloseMeter]
Meter=Image
ImageName=#@#img\cl.png
ToolTipText=关闭
W=26
X=465
Y=305
LeftMouseDownAction=[!HideMeterGroup "ChangeMenu"][!HideMeterGroup "ChangeStatus"]
Group=ChangeMenu
Hidden=1

[ChangeMenuTopiconMeter]
Meter=Image
ImageName=#@#img\ch.png
W=25
X=105
Y=305
LeftMouseDownAction=
Group=ChangeMenu
Hidden=1

[ChangeMenuTopWordMeter]
Meter=String
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontSize=13
Text=临时课表更改 
X=130
Y=306
Hidden=1
Group=ChangeMenu

[Changeinput1]
Measure=Plugin
Plugin=InputText
Hidden=1
InputLimit=2
InputNumber=1
AntiAlias=1
X=130
Y=380
W=170
H=25
SolidColor=245,245,245
FontColor=0 , 0 , 0
FontFace=MiSans Normal
FontSize=12
StringAlign=Left
FocusDismiss=1
OnDismissAction=[!ShowMeter "Changeinputstatus1Meter"][!HideMeter "Changeinputstatus2Meter"]
Command1=[!SetVariable change "$UserInput$"]
Command2=[!HideMeter "Changeinputstatus1Meter"]
Command3=[!ShowMeter "Changeinputstatus2Meter"]
Group=ChangeMenu

[ChangeMenuInput1IntroduceMeter]
Meter=String
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontSize=11
Text=在下方键入要更改的课的节数, 按"Enter"确认
X=120
Y=350
Hidden=1
Group=ChangeMenu

[ChangeinputensureshadowMeter]
Meter=Shape
AntiAlias=1
shape=Rectangle 130,374,170,25 | StrokeWidth 0 | Fill LinearGradient MyGradient1
MyGradient1=90 | 150,150,150,255 ; 0.5 | 150,150,150,0 ; 1.0
Group=ChangeMenu
Hidden=1

[Changeinputensureshadow2Meter]
Meter=Shape
AntiAlias=1
shape=Rectangle 124,380,170,25 | StrokeWidth 0 | Fill LinearGradient MyGradient1
MyGradient1=0 | 150,150,150,255 ; 0.9 | 150,150,150,0 ; 1.0
Group=ChangeMenu
Hidden=1

[Changeinputensureshadow3Meter]
Meter=Shape
AntiAlias=1
shape=Rectangle 136,380,170,25 | StrokeWidth 0 | Fill LinearGradient MyGradient1
MyGradient1=180 | 150,150,150,255 ; 0.9 | 150,150,150,0 ; 1.0
Group=ChangeMenu
Hidden=1

[Changeinputensureshadow4Meter]
Meter=Shape
AntiAlias=1
shape=Rectangle 130,386,170,25 | StrokeWidth 0 | Fill LinearGradient MyGradient1
MyGradient1=270 | 150,150,150,255 ; 0.5 | 150,150,150,0 ; 1.0
Group=ChangeMenu
Hidden=1

[ChangeinputensureMeter]
Meter=Shape
AntiAlias=0
shape=Rectangle 130,380,170,25 | StrokeWidth 0 | Fill Color 255,255,255 | Stroke Color 255,255,255,255
Group=ChangeMenu
LeftMouseUpAction=[!CommandMeasure Changeinput1 "ExecuteBatch ALL"]
Hidden=1

[Changeinputstatus1Meter]
Meter=String
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Normal
FontSize=10
Text=× 未应用更改
X=320
Y=384
Hidden=1
FontColor=100,100,100
Group=ChangeStatus

[Changeinputstatus2Meter]
Meter=String
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Normal
FontSize=10
Text=↓ 请完成下一步操作
X=320
Y=384
Hidden=1
FontColor=40,211,89
Group=ChangeStatus

;input2
[Changeinput2ensureshadowMeter]
Meter=Shape
AntiAlias=1
shape=Rectangle 130,444,170,25 | StrokeWidth 0 | Fill LinearGradient MyGradient1
MyGradient1=90 | 150,150,150,255 ; 0.5 | 150,150,150,0 ; 1.0
Group=ChangeMenu
Hidden=1

[Changeinput2ensureshadow2Meter]
Meter=Shape
AntiAlias=1
shape=Rectangle 124,450,170,25 | StrokeWidth 0 | Fill LinearGradient MyGradient1
MyGradient1=0 | 150,150,150,255 ; 0.9 | 150,150,150,0 ; 1.0
Group=ChangeMenu
Hidden=1

[Changeinput2ensureshadow3Meter]
Meter=Shape
AntiAlias=1
shape=Rectangle 136,450,170,25 | StrokeWidth 0 | Fill LinearGradient MyGradient1
MyGradient1=180 | 150,150,150,255 ; 0.9 | 150,150,150,0 ; 1.0
Group=ChangeMenu
Hidden=1

[Changeinput2ensureshadow4Meter]
Meter=Shape
AntiAlias=1
shape=Rectangle 130,456,170,25 | StrokeWidth 0 | Fill LinearGradient MyGradient1
MyGradient1=270 | 150,150,150,255 ; 0.5 | 150,150,150,0 ; 1.0
Group=ChangeMenu
Hidden=1

[Changeinput2]
Measure=Plugin
Plugin=InputText
Hidden=1
InputLimit=1
AntiAlias=1
X=130
Y=450
W=170
H=25
SolidColor=245,245,245
FontColor=0 , 0 , 0
FontFace=MiSans Normal
FontSize=12
StringAlign=Left
FocusDismiss=1
OnDismissAction=[!ShowMeter "Changeinput2status1Meter"][!HideMeter "Changeinput2status2Meter"]
Command1=[!SetOption classMeter[#change] "Text" "$UserInput$"]
Command2=[!HideMeter "Changeinput2status1Meter"]
Command3=[!ShowMeter "Changeinput2status2Meter"]
Group=ChangeMenu

[ChangeMenuInput2IntroduceMeter]
Meter=String
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontSize=11
Text=在下方键入要更改的课的内容, 按"Enter"确认
X=120
Y=420
Hidden=1
Group=ChangeMenu

[Changeinput2ensureMeter]
Meter=Shape
AntiAlias=1
shape=Rectangle 130,450,170,25 | StrokeWidth 0 | Fill Color 255,255,255 | Stroke Color 255,255,255,255
Group=ChangeMenu
LeftMouseUpAction=[!CommandMeasure Changeinput2 "ExecuteBatch ALL"]
Hidden=1

[Changeinput2status1Meter]
Meter=String
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Normal
FontSize=10
Text=! 未应用更改
X=320
Y=454
Hidden=1
FontColor=100,100,100
Group=ChangeStatus

[Changeinput2status2Meter]
Meter=String
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Normal
FontSize=10
Text=√ 设置成功
X=320
Y=454
Hidden=1
FontColor=40,211,89
Group=ChangeStatus

[ChangeMenutipsMeter]
Meter=String
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontSize=10
Text=Tips:  早自习为第0节课，后续依次顺推                          确认输入内容后，需按下回车键，否则改动不会应用       刷新组件后，此处的配置会失效                                                               请不要输入无关内容！
ClipString=2
W=350
X=120
Y=490
Hidden=1
Group=ChangeMenu
