;小菜单显示
;Menu 菜单 1.1.0
[MenuGroup]
Group=Menu

[FirstMenuBackgroudMeter]
Meter=Shape
AntiAlias=1
shape=Rectangle 600,600,50,200,5,5 | StrokeWidth 0 | Fill LinearGradient MyFillGradient1
MyFillGradient1= 180 | 255,255,255,#bgalpha# ; 0.0 | 255,255,255,#bgalpha# ; 0.5
Group=Menu
Hidden=1

[closeMeter]
Meter=Image
ImageName=#@#img\cl.png
ToolTipText=关闭
W=29
X=610
Y=760
LeftMouseDownAction=[!HideMeterGroup "Menu"]
Group=Menu
Hidden=1

[infoMeter]
Meter=Image
ImageName=#@#img\in.png
ToolTipText=关于
W=24
X=612
Y=716
LeftMouseDownAction=[!ShowMeterGroup "InfoMenu"][!HideMeterGroup "Menu"]
Group=Menu
Hidden=1

[ChangeMeter]
Meter=Image
ImageName=#@#img\ch.png
ToolTipText=临时改课
W=25
X=611
Y=682
LeftMouseDownAction=[!ShowMeterGroup "ChangeMenu"][!HideMeterGroup "Menu"]
Group=Menu
Hidden=1

[refreshMeter]
Meter=Image
ImageName=#@#img\re.png
ToolTipText=刷新
W=28
X=609
Y=610
LeftMouseDownAction=[!Refresh]
Group=Menu
Hidden=1
