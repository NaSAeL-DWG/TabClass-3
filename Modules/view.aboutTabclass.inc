;Menu-关于
[InfoMenuGroup]
Group=InfoMenu

[InfoStatusGroup]
Group=InfoStatus

[InfoMenuBackgroudMeter]
Meter=Shape
AntiAlias=1
shape=Rectangle 0,100,550,550,5,5 | StrokeWidth 0 | Fill LinearGradient MyFillGradient1
MyFillGradient1= 180 | 255,255,255,240 ; 0.0 | 255,255,255,240 ; 0.5
Group=InfoMenu
Hidden=1

[InfoMenuTopMeter]
Meter=Shape
AntiAlias=1
shape=Rectangle 0,100,550,35,5,5 | StrokeWidth 0 | Fill LinearGradient MyFillGradient1
MyFillGradient1= 180 | 255,255,255,230 ; 0.0 | 255,255,255,230 ; 0.5
Group=InfoMenu
Hidden=1

[InfoMenuCloseMeter]
Meter=Image
ImageName=#@#img\cl.png
ToolTipText=关闭
W=26
X=515
Y=105
LeftMouseDownAction=[!HideMeterGroup "InfoMenu"][!HideMeterGroup "InfoStatus"]
Group=InfoMenu
Hidden=1

[InfoMenuTopiconMeter]
Meter=Image
ImageName=#@#img\tabclass\tabicon-noword.png
W=25
X=5
Y=105
LeftMouseDownAction=
Group=InfoMenu
Hidden=1

[InfoMenuTopWordMeter]
Meter=String
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontSize=13
Text=TabClass 关于
X=30
Y=106
Hidden=1
Group=InfoMenu

[InfoMenuMainiconMeter]
Meter=Image
ImageName=#@#img\tabclass\tb3.png
W=400
X=77
Y=150
LeftMouseDownAction=
Group=InfoMenu
Hidden=1

[InfoMenuWord1Meter]
Meter=String
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontSize=10
Text=TabClass 桌面课表 - 基于Rainmeter的自动化课表显示工具
X=95
Y=360
Hidden=1
Group=InfoMenu

[InfoMenuWord2Meter]
Meter=String
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Normal
FontSize=10
Text=Version：3.0.0 Alpha-4 测试版本，不代表最终品质
X=120
Y=385
Hidden=1
Group=InfoMenu

[InfoMenuWord4Meter]
Meter=String
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontSize=10
Text=课表配置方法：在本皮肤根目录找到“配置文档.txt"并阅读                   课表模式：周1-5固定，晚自习每周轮换，周六每周轮换                       问题 or 建议？通过Bilibili告诉我们-搜索用户：NaSAeL
ClipString=2
W=450
X=100
Y=415
Hidden=1
Group=InfoMenu

[InfoMenuWord5Meter]
Meter=String
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontSize=10
Text=Dynamic Wave Group. 动力波团队 制作
ClipString=2
W=450
X=155
Y=620
Hidden=1
Group=InfoMenu

[InfoMenuWord6Meter]
Meter=String
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Normal
FontSize=9
Text=本作品采用 Creative Commons Attribution-Non-Commercial-Share Alike 4.0 许可协议进行许可。3.0.0版本后,"TabClass"相关图标同样采用该许可协议许可。部分图标来自 Google Fonts，根据开源许可证使用。
ClipString=2
W=310
X=190
Y=480
Hidden=1
Group=InfoMenu

[InfoMenucciconMeter]
Meter=Image
ImageName=#@#img\cc.png
W=100
X=78
Y=505
LeftMouseDownAction=["https://creativecommons.org/licenses/by-nc-sa/4.0/"]
Group=InfoMenu
Hidden=1



