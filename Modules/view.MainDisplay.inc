;主界面显示

[BgMask]
Meter=Shape
AntiAlias=1
shape=Rectangle 660,0,65,790

[Bg2Meter]
Meter=Shape
AntiAlias=1
shape=Rectangle 660,0,85,790,15,15 | StrokeWidth 0 | Fill LinearGradient MyFillGradient1
MyFillGradient1= 180 | 255,255,255,#bgalpha# ; 0.0 | 255,255,255,#bgalpha# ; 0.5
Container=BgMask

[ClassStatusbgMeter]
Meter=Shape
AntiAlias=1
shape=Rectangle 664,87,57,30,5,5 | StrokeWidth 0 | Fill Color 255,255,255,

;文本
[DateMeter1]
;年月日
Meter=String
MeterStyle=TextStyle
FontFace=MiSans Semibold
FontSize=8
Text=[Date0Measure]
X=676
Y=7
Group=Init

[DateMeter2]
;星期
Meter=String
MeterStyle=TextStyle
FontFace=MiSans Medium
FontSize=11
Text=[Date2Measure]
X=668
Y=20

[IntervalMeter]
;间隔1
Meter=String
MeterStyle=TextStyle
FontFace=MiSans Medium
FontSize=7
Text=___________
X=667
Y=32

[DateMeter3]
;小时分钟
UpdateDivider=1
DynamicVariables=1
Meter=String
MeterStyle=TextStyle
FontFace=MiSans Semibold
FontSize=10
Text=[Date3Measure]
X=673
Y=50

[Interval2Meter]
;间隔2
Meter=String
MeterStyle=TextStyle
FontFace=MiSans Medium
FontSize=7
Text=___________
X=667
Y=115

;3.0.0 美化课程显示
[S1ShadowMeter]
Meter=Image
ImageName=#@#img\Shadow1.png
W=66
X=660
Y=176
Group=csbg1
Hidden=1

[S2ShadowMeter]
Meter=Image
ImageName=#@#img\Shadow1.png
W=66
X=660
Y=217
Group=csbg2
Hidden=1

[S3ShadowMeter]
Meter=Image
ImageName=#@#img\Shadow1.png
W=66
X=660
Y=257
Group=csbg3
Hidden=1

[S4ShadowMeter]
Meter=Image
ImageName=#@#img\Shadow1.png
W=66
X=660
Y=297
Group=csbg4
Hidden=1

[S5ShadowMeter]
Meter=Image
ImageName=#@#img\Shadow1.png
W=66
X=660
Y=337
Group=csbg5
Hidden=1

[S6ShadowMeter]
Meter=Image
ImageName=#@#img\Shadow1.png
W=66
X=660
Y=([#xcl]+426)
Group=csbg6
Hidden=1
DynamicVariables=1

[S7ShadowMeter]
Meter=Image
ImageName=#@#img\Shadow1.png
W=66
X=660
Y=([#xcl]+466)
Group=csbg7
Hidden=1
DynamicVariables=1

[S8ShadowMeter]
Meter=Image
ImageName=#@#img\Shadow1.png
W=66
X=660
Y=([#xcl]+506)
Group=csbg8
Hidden=1
DynamicVariables=1

[S9ShadowMeter]
Meter=Image
ImageName=#@#img\Shadow1.png
W=66
X=660
Y=([#xcl]+547)
Group=csbg9
Hidden=1
DynamicVariables=1

[S10ShadowMeter]
Meter=Image
ImageName=#@#img\Shadow1.png
W=66
X=660
Y=([#xcl]+631)
Group=csbg10
Hidden=1
DynamicVariables=1










;白天课表显示
;1.2.0 Status Background 状态背景
[ClassStatus1bgMeter]
Meter=Shape
AntiAlias=1
shape=Rectangle 660,180,65,34 | StrokeWidth 0 | Fill Color 255,255,255,#csbgalpha#
Hidden=1
Group=csbg1
DynamicVariables=1

[ClassStatus2bgMeter]
Meter=Shape
AntiAlias=1
shape=Rectangle 660,221,65,34 | StrokeWidth 0 | Fill Color 255,255,255,#csbgalpha#
Hidden=1
Group=csbg2
DynamicVariables=1

[ClassStatus3bgMeter]
Meter=Shape
AntiAlias=1
shape=Rectangle 660,261,65,34 | StrokeWidth 0 | Fill Color 255,255,255,#csbgalpha#
Hidden=1
Group=csbg3
DynamicVariables=1

[ClassStatus4bgMeter]
Meter=Shape
AntiAlias=1
shape=Rectangle 660,301,65,34 | StrokeWidth 0 | Fill Color 255,255,255,#csbgalpha#
Hidden=1
Group=csbg4
DynamicVariables=1

[ClassStatus5bgMeter]
Meter=Shape
AntiAlias=1
shape=Rectangle 660,341,65,34 | StrokeWidth 0 | Fill Color 255,255,255,#csbgalpha#
Hidden=1
Group=csbg5
DynamicVariables=1

[ClassStatus6bgMeter]
Meter=Shape
AntiAlias=1
shape=Rectangle 660,([#xcl]+430),65,34 | StrokeWidth 0 | Fill Color 255,255,255,#csbgalpha#
Hidden=1
Group=csbg6
DynamicVariables=1

[ClassStatus7bgMeter]
Meter=Shape
AntiAlias=1
shape=Rectangle 660,([#xcl]+470),65,34 | StrokeWidth 0 | Fill Color 255,255,255,#csbgalpha#
Hidden=1
Group=csbg7
DynamicVariables=1

[ClassStatus8bgMeter]
Meter=Shape
AntiAlias=1
shape=Rectangle 660,([#xcl]+510),65,34 | StrokeWidth 0 | Fill Color 255,255,255,#csbgalpha#
Hidden=1
Group=csbg8
DynamicVariables=1

[ClassStatus9bgMeter]
Meter=Shape
AntiAlias=1
shape=Rectangle 660,([#xcl]+551),65,34 | StrokeWidth 0 | Fill Color 255,255,255,#csbgalpha#
Hidden=1
Group=csbg9
DynamicVariables=1

[ClassStatus10bgMeter]
Meter=Shape
AntiAlias=1
shape=Rectangle 660,([#xcl]+635),65,34 | StrokeWidth 0 | Fill Color 255,255,255,#csbgalpha#
Hidden=1
Group=csbg10
DynamicVariables=1

;----
[ClassStatus1colorMeter]
Meter=Shape
AntiAlias=1
shape=Rectangle 660,180,3,34 | StrokeWidth 0 | Fill Color #Cscolor#
Hidden=1
Group=csbg1
DynamicVariables=1

[ClassStatus2colorMeter]
Meter=Shape
AntiAlias=1
shape=Rectangle 660,221,3,34 | StrokeWidth 0 | Fill Color #Cscolor#
Hidden=1
Group=csbg2
DynamicVariables=1

[ClassStatus3colorMeter]
Meter=Shape
AntiAlias=1
shape=Rectangle 660,261,3,34 | StrokeWidth 0 | Fill Color #Cscolor#
Hidden=1
Group=csbg3
DynamicVariables=1

[ClassStatus4colorMeter]
Meter=Shape
AntiAlias=1
shape=Rectangle 660,301,3,34 | StrokeWidth 0 | Fill Color #Cscolor#
Hidden=1
Group=csbg4
DynamicVariables=1

[ClassStatus5colorMeter]
Meter=Shape
AntiAlias=1
shape=Rectangle 660,341,3,34 | StrokeWidth 0 | Fill Color #Cscolor#
Hidden=1
Group=csbg5
DynamicVariables=1

[ClassStatus6colorMeter]
Meter=Shape
AntiAlias=1
shape=Rectangle 660,([#xcl]+430),3,34 | StrokeWidth 0 | Fill Color #Cscolor#
Hidden=1
Group=csbg6
DynamicVariables=1

[ClassStatus7colorMeter]
Meter=Shape
AntiAlias=1
shape=Rectangle 660,([#xcl]+470),3,34 | StrokeWidth 0 | Fill Color #Cscolor#
Hidden=1
Group=csbg7
DynamicVariables=1

[ClassStatus8colorMeter]
Meter=Shape
AntiAlias=1
shape=Rectangle 660,([#xcl]+510),3,34 | StrokeWidth 0 | Fill Color #Cscolor#
Hidden=1
Group=csbg8
DynamicVariables=1

[ClassStatus9colorMeter]
Meter=Shape
AntiAlias=1
shape=Rectangle 660,([#xcl]+551),3,34 | StrokeWidth 0 | Fill Color #Cscolor#
Hidden=1
Group=csbg9
DynamicVariables=1

[ClassStatus10colorMeter]
Meter=Shape
AntiAlias=1
shape=Rectangle 660,([#xcl]+635),3,34 | StrokeWidth 0 | Fill Color #Cscolor#
Hidden=1
Group=csbg10
DynamicVariables=1

;课程显示
[classMeter0]
Meter=String
Group=csinfo
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontColor=0,0,0
FontSize=20
Text=[cif0]
X=674
Y=130

Hidden=1

[Interval0Meter]
;间隔3
Meter=String
MeterStyle=TextStyle
FontFace=MiSans Medium
FontSize=7
Text=___________
X=667
Y=160

[classMeter1]
Meter=String
Group=csinfo
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontColor=0,0,0
FontSize=20
Text=[cif1]
X=674
Y=180

Hidden=1

[classMeter2]
Meter=String
Group=csinfo
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontColor=0,0,0
FontSize=20
Text=[cif2]
X=674
Y=220

Hidden=1

[classMeter3]
Meter=String
Group=csinfo
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontColor=0,0,0
FontSize=20
Text=[cif3]
X=674
Y=260

Hidden=1

[classMeter4]
Meter=String
Group=csinfo
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontColor=0,0,0
FontSize=20
Text=[cif4]
X=674
Y=300

Hidden=1

[classMeter5]
Meter=String
Group=csinfo
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontColor=0,0,0
FontSize=20
Text=[cif5]
X=674
Y=340

Hidden=1

[Interval3Meter]
;间隔3
Meter=String
MeterStyle=TextStyle
FontFace=MiSans Medium
DynamicVariables=1
FontSize=7
Text=___________
X=667
Y=([#xcl]+375)

[LunchMeter]
;午休
Meter=String
MeterStyle=TextStyle
FontFace=MiSans Medium
DynamicVariables=1
FontSize=12
Text=午休
X=673
Y=([#xcl]+393)

[Interval4Meter]
;间隔4
Meter=String
MeterStyle=TextStyle
FontFace=MiSans Medium
DynamicVariables=1
FontSize=7
Text=___________
X=667
Y=([#xcl]+410)

[classMeter6]
Meter=String
Group=csinfo
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontColor=0,0,0
FontSize=20
Text=[cif6]
X=674
Y=([#xcl]+430)

Hidden=1

[classMeter7]
Meter=String
Group=csinfo
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontColor=0,0,0
FontSize=20
Text=[cif7]
X=674
Y=([#xcl]+470)

Hidden=1

[classMeter8]
Meter=String
Group=csinfo
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontColor=0,0,0
FontSize=20
Text=[cif8]
X=674
Y=([#xcl]+510)

Hidden=1

[classMeter9]
Meter=String
Group=csinfo
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontColor=0,0,0
FontSize=20
Text=[cif9]
X=674
Y=([#xcl]+550)

Hidden=1

[Interval5Meter]
;间隔5
Meter=String
MeterStyle=TextStyle
FontFace=MiSans Medium
DynamicVariables=1
FontSize=7
Text=___________
X=667
Y=([#xcl]+580)

[DinnerMeter]
Meter=String
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontSize=12
Text=晚餐
X=673
Y=([#xcl]+598)

[Interval6Meter]
;间隔6
Meter=String
MeterStyle=TextStyle
FontFace=MiSans Medium
DynamicVariables=1
FontSize=7
Text=___________
X=667
Y=([#xcl]+616)

[classMeter10]
Meter=String
Group=csinfo
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontColor=0,0,0
FontSize=20
Text=[cif10]
X=674
Y=([#xcl]+634)

Hidden=1

[Interval7Meter]
;间隔7
Meter=String
MeterStyle=TextStyle
FontFace=MiSans Medium
DynamicVariables=1
FontSize=7
Text=___________
X=667
Y=([#xcl]+665)

[alphaMeter]
Meter=String
MeterStyle=TextStyle
FontFace=MiSans Medium
FontSize=6
FontColor=255,0,0,160
Text=Alpha测试版
X=669
Y=712
[alpha1Meter]
Meter=String
MeterStyle=TextStyle
FontFace=MiSans Medium
FontSize=6
FontColor=255,0,0,160
Text=不代表最终品质
X=664
Y=722

;3.0.0 Menu
[MenuicoMeter]
Meter=Image
ImageName=#@#img\menu.png
ToolTipText=菜单
W=23
X=680
Y=750
LeftMouseDownAction=[!ShowMeterGroup "Menu"]
