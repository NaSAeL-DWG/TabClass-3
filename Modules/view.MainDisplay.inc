;主界面显示

;[BgMask]
;Meter=Shape
;AntiAlias=1
;shape=Rectangle [&ScaleScript:ScaleShape(660,0,65,790)]

[Bg2Meter]
Meter=Image
DynamicVariables=1
AntiAlias=1
ImageName=#@#img\Shape 3.png
DynamicVariables=1
W=[&ScaleScript:ScaleCoordinates(65)]
X=[&ScaleScript:ScaleCoordinates(660)]
Y=[&ScaleScript:ScaleCoordinates(0)]
ImageAlpha=#bgalpha#
;[ClassStatusbgMeter]
;Meter=Shape
;AntiAlias=1
;shape=Rectangle [&ScaleScript:ScaleShape(664,87,57,30)]

;文本
[DateMeter1]
;年月日
Meter=String
MeterStyle=TextStyle
FontFace=MiSans Semibold
FontSize=[&ScaleScript:ScaleCoordinates(8)]
DynamicVariables=1
Text=[Date0Measure]
X=[&ScaleScript:ScaleCoordinates(676)]
Y=[&ScaleScript:ScaleCoordinates(7)]
Group=Init

[DateMeter2]
;星期
Meter=String
MeterStyle=TextStyle
FontFace=MiSans Medium
FontSize=[&ScaleScript:ScaleCoordinates(11)]
DynamicVariables=1
Text=[Date2Measure]
X=[&ScaleScript:ScaleCoordinates(668)]
Y=[&ScaleScript:ScaleCoordinates(20)]

[IntervalMeter]
;间隔1
Meter=String
MeterStyle=TextStyle
FontFace=MiSans Medium
FontSize=[&ScaleScript:ScaleCoordinates(7)]
DynamicVariables=1
Text=___________
X=[&ScaleScript:ScaleCoordinates(667)]
Y=[&ScaleScript:ScaleCoordinates(32)]

[DateMeter3]
;小时分钟
UpdateDivider=1
DynamicVariables=1
Meter=String
MeterStyle=TextStyle
FontFace=MiSans Semibold
FontSize=[&ScaleScript:ScaleCoordinates(10)]
Text=[Date3Measure]
X=[&ScaleScript:ScaleCoordinates(673)]
Y=[&ScaleScript:ScaleCoordinates(50)]

[Interval2Meter]
;间隔2
Meter=String
MeterStyle=TextStyle
FontFace=MiSans Medium
FontSize=[&ScaleScript:ScaleCoordinates(7)]
DynamicVariables=1
Text=___________
X=[&ScaleScript:ScaleCoordinates(667)]
Y=[&ScaleScript:ScaleCoordinates(115)]

;3.0.0 美化课程显示
;白天课表显示
;1.2.0 Status Background 状态背景
[ClassStatus1bgMeter]
Meter=Image
DynamicVariables=1
AntiAlias=1
ImageName=#@#img\Shape 6.png
W=[&ScaleScript:ScaleCoordinates(65)]
X=[&ScaleScript:ScaleCoordinates(660)]
Y=[&ScaleScript:ScaleCoordinates(178)]
Hidden=1
Group=csbg1

[ClassStatus2bgMeter]
Meter=Image
DynamicVariables=1
AntiAlias=1
ImageName=#@#img\Shape 6.png
W=[&ScaleScript:ScaleCoordinates(65)]
X=[&ScaleScript:ScaleCoordinates(660)]
Y=[&ScaleScript:ScaleCoordinates(219)]
Hidden=1
Group=csbg2

[ClassStatus3bgMeter]
Meter=Image
DynamicVariables=1
AntiAlias=1
ImageName=#@#img\Shape 6.png
W=[&ScaleScript:ScaleCoordinates(65)]
X=[&ScaleScript:ScaleCoordinates(660)]
Y=[&ScaleScript:ScaleCoordinates(259)]
Hidden=1
Group=csbg3

[ClassStatus4bgMeter]
Meter=Image
DynamicVariables=1
AntiAlias=1
ImageName=#@#img\Shape 6.png
W=[&ScaleScript:ScaleCoordinates(65)]
X=[&ScaleScript:ScaleCoordinates(660)]
Y=[&ScaleScript:ScaleCoordinates(299)]
Hidden=1
Group=csbg4

[ClassStatus5bgMeter]
Meter=Image
DynamicVariables=1
AntiAlias=1
ImageName=#@#img\Shape 6.png
W=[&ScaleScript:ScaleCoordinates(65)]
X=[&ScaleScript:ScaleCoordinates(660)]
Y=[&ScaleScript:ScaleCoordinates(339)]
Hidden=1
Group=csbg5

[ClassStatus6bgMeter]
Meter=Image
DynamicVariables=1
AntiAlias=1
ImageName=#@#img\Shape 6.png
W=[&ScaleScript:ScaleCoordinatesmovemode(65)]
X=[&ScaleScript:ScaleCoordinatesmovemode(660)]
Y=[&ScaleScript:ScaleCoordinatesmovemode(428)]
Hidden=1
Group=csbg6

[ClassStatus7bgMeter]
Meter=Image
DynamicVariables=1
AntiAlias=1
ImageName=#@#img\Shape 6.png
W=[&ScaleScript:ScaleCoordinatesmovemode(65)]
X=[&ScaleScript:ScaleCoordinatesmovemode(660)]
Y=[&ScaleScript:ScaleCoordinatesmovemode(468)]
Hidden=1
Group=csbg7

[ClassStatus8bgMeter]
Meter=Image
DynamicVariables=1
AntiAlias=1
ImageName=#@#img\Shape 6.png
W=[&ScaleScript:ScaleCoordinatesmovemode(65)]
X=[&ScaleScript:ScaleCoordinatesmovemode(660)]
Y=[&ScaleScript:ScaleCoordinatesmovemode(508)]
Hidden=1
Group=csbg8

[ClassStatus9bgMeter]
Meter=Image
DynamicVariables=1
AntiAlias=1
ImageName=#@#img\Shape 6.png
W=[&ScaleScript:ScaleCoordinatesmovemode(65)]
X=[&ScaleScript:ScaleCoordinatesmovemode(660)]
Y=[&ScaleScript:ScaleCoordinatesmovemode(549)]
Hidden=1
Group=csbg9

[ClassStatus10bgMeter]
Meter=Image
DynamicVariables=1
AntiAlias=1
ImageName=#@#img\Shape 6.png
W=[&ScaleScript:ScaleCoordinatesmovemode(65)]
X=[&ScaleScript:ScaleCoordinatesmovemode(660)]
Y=[&ScaleScript:ScaleCoordinatesmovemode(633)]
Hidden=1
Group=csbg10


;课程显示
[classMeter0]
Meter=String
Group=csinfo
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontColor=0,0,0
FontSize=[&ScaleScript:ScaleCoordinates(20)]
Text=[cif0]
X=[&ScaleScript:ScaleCoordinates(674)]
Y=[&ScaleScript:ScaleCoordinates(130)]

Hidden=1

[Interval0Meter]
;间隔3
Meter=String
MeterStyle=TextStyle
FontFace=MiSans Medium
FontSize=[&ScaleScript:ScaleCoordinates(7)]
DynamicVariables=1
Text=___________
X=[&ScaleScript:ScaleCoordinates(667)]
Y=[&ScaleScript:ScaleCoordinates(160)]

[classMeter1]
Meter=String
Group=csinfo
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontColor=0,0,0
FontSize=[&ScaleScript:ScaleCoordinates(20)]
Text=[cif1]
X=[&ScaleScript:ScaleCoordinates(674)]
Y=[&ScaleScript:ScaleCoordinates(180)]

Hidden=1

[classMeter2]
Meter=String
Group=csinfo
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontColor=0,0,0
FontSize=[&ScaleScript:ScaleCoordinates(20)]
Text=[cif2]
X=[&ScaleScript:ScaleCoordinates(674)]
Y=[&ScaleScript:ScaleCoordinates(220)]

Hidden=1

[classMeter3]
Meter=String
Group=csinfo
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontColor=0,0,0
FontSize=[&ScaleScript:ScaleCoordinates(20)]
Text=[cif3]
X=[&ScaleScript:ScaleCoordinates(674)]
Y=[&ScaleScript:ScaleCoordinates(260)]

Hidden=1

[classMeter4]
Meter=String
Group=csinfo
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontColor=0,0,0
FontSize=[&ScaleScript:ScaleCoordinates(20)]
Text=[cif4]
X=[&ScaleScript:ScaleCoordinates(674)]
Y=[&ScaleScript:ScaleCoordinates(300)]

Hidden=1

[classMeter5]
Meter=String
Group=csinfo
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontColor=0,0,0
FontSize=[&ScaleScript:ScaleCoordinates(20)]
Text=[cif5]
X=[&ScaleScript:ScaleCoordinates(674)]
Y=[&ScaleScript:ScaleCoordinates(340)]

Hidden=1

[Interval3Meter]
;间隔3
Meter=String
MeterStyle=TextStyle
FontFace=MiSans Medium
DynamicVariables=1
FontSize=[&ScaleScript:ScaleCoordinates(7)]
Text=___________
X=[&ScaleScript:ScaleCoordinates(667)]
Y=[&ScaleScript:ScaleCoordinatesmovemode(375)]

[LunchMeter]
;午休
Meter=String
MeterStyle=TextStyle
FontFace=MiSans Medium
DynamicVariables=1
FontSize=[&ScaleScript:ScaleCoordinates(12)]
Text=午休
X=[&ScaleScript:ScaleCoordinates(673)]
Y=[&ScaleScript:ScaleCoordinatesmovemode(393)]

[Interval4Meter]
;间隔4
Meter=String
MeterStyle=TextStyle
FontFace=MiSans Medium
DynamicVariables=1
FontSize=[&ScaleScript:ScaleCoordinates(7)]
Text=___________
X=[&ScaleScript:ScaleCoordinates(667)]
Y=[&ScaleScript:ScaleCoordinatesmovemode(410)]

[classMeter6]
Meter=String
Group=csinfo
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontColor=0,0,0
FontSize=[&ScaleScript:ScaleCoordinates(20)]
Text=[cif6]
X=[&ScaleScript:ScaleCoordinates(674)]
Y=[&ScaleScript:ScaleCoordinatesmovemode(430)]

Hidden=1

[classMeter7]
Meter=String
Group=csinfo
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontColor=0,0,0
FontSize=[&ScaleScript:ScaleCoordinates(20)]
Text=[cif7]
X=[&ScaleScript:ScaleCoordinates(674)]
Y=[&ScaleScript:ScaleCoordinatesmovemode(470)]

Hidden=1

[classMeter8]
Meter=String
Group=csinfo
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontColor=0,0,0
FontSize=[&ScaleScript:ScaleCoordinates(20)]
Text=[cif8]
X=[&ScaleScript:ScaleCoordinates(674)]
Y=[&ScaleScript:ScaleCoordinatesmovemode(510)]

Hidden=1

[classMeter9]
Meter=String
Group=csinfo
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontColor=0,0,0
FontSize=[&ScaleScript:ScaleCoordinates(20)]
Text=[cif9]
X=[&ScaleScript:ScaleCoordinates(674)]
Y=[&ScaleScript:ScaleCoordinatesmovemode(550)]

Hidden=1

[Interval5Meter]
;间隔5
Meter=String
MeterStyle=TextStyle
FontFace=MiSans Medium
DynamicVariables=1
FontSize=[&ScaleScript:ScaleCoordinates(7)]
Text=___________
X=[&ScaleScript:ScaleCoordinates(667)]
Y=[&ScaleScript:ScaleCoordinatesmovemode(580)]

[DinnerMeter]
Meter=String
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontSize=[&ScaleScript:ScaleCoordinates(12)]
Text=晚餐
X=[&ScaleScript:ScaleCoordinates(673)]
Y=[&ScaleScript:ScaleCoordinatesmovemode(598)]

[Interval6Meter]
;间隔6
Meter=String
MeterStyle=TextStyle
FontFace=MiSans Medium
DynamicVariables=1
FontSize=[&ScaleScript:ScaleCoordinates(7)]
Text=___________
X=[&ScaleScript:ScaleCoordinates(667)]
Y=[&ScaleScript:ScaleCoordinatesmovemode(616)]

[classMeter10]
Meter=String
Group=csinfo
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontColor=0,0,0
FontSize=[&ScaleScript:ScaleCoordinates(20)]
Text=[cif10]
X=[&ScaleScript:ScaleCoordinates(674)]
Y=[&ScaleScript:ScaleCoordinatesmovemode(634)]

Hidden=1

[Interval7Meter]
;间隔7
Meter=String
MeterStyle=TextStyle
FontFace=MiSans Medium
DynamicVariables=1
FontSize=[&ScaleScript:ScaleCoordinates(7)]
Text=___________
X=[&ScaleScript:ScaleCoordinates(667)]
Y=[&ScaleScript:ScaleCoordinatesmovemode(665)]

[alphaMeter]
Meter=String
MeterStyle=TextStyle
FontFace=MiSans Medium
FontSize=[&ScaleScript:ScaleCoordinates(6)]
FontColor=255,0,0,160
DynamicVariables=1
Text=Alpha测试版
X=[&ScaleScript:ScaleCoordinates(669)]
Y=[&ScaleScript:ScaleCoordinates(712)]
Hidden=1

[alpha1Meter]
Meter=String
MeterStyle=TextStyle
FontFace=MiSans Medium
FontSize=[&ScaleScript:ScaleCoordinates(6)]
FontColor=255,0,0,160
DynamicVariables=1
Text=不代表最终品质
X=[&ScaleScript:ScaleCoordinates(664)]
Y=[&ScaleScript:ScaleCoordinates(722)]
Hidden=1

;3.0.0 Menu
[MenuicoMeter]
Meter=Image
ImageName=#@#img\menu.png
ToolTipText=菜单
DynamicVariables=1
W=[&ScaleScript:ScaleCoordinates(23)]
X=[&ScaleScript:ScaleCoordinates(680)]
Y=[&ScaleScript:ScaleCoordinates(750)]
LeftMouseDownAction=[!ShowMeterGroup "Menu"]
