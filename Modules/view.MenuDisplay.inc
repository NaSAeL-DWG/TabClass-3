;小菜单显示
;Menu 菜单 1.1.0
[MenuGroup]
Group=Menu

[FirstMenuBackgroudMeter]
Meter=Image
DynamicVariables=1
AntiAlias=1
ImageName=#@#img\Shape 2.png
DynamicVariables=1
W=[&ScaleScript:ScaleCoordinates(50)]
X=[&ScaleScript:ScaleCoordinates(600)]
Y=[&ScaleScript:ScaleCoordinates(590)]
ImageAlpha=#bgalpha#
Group=Menu
Hidden=1

[closeMeter]
Meter=Image
ImageName=#@#img\cl.png
ToolTipText=关闭
DynamicVariables=1
W=[&ScaleScript:ScaleCoordinates(29)]
X=[&ScaleScript:ScaleCoordinates(610)]
Y=[&ScaleScript:ScaleCoordinates(750)]
LeftMouseDownAction=[!HideMeterGroup "Menu"]
Group=Menu
Hidden=1

[infoMeter]
Meter=Image
ImageName=#@#img\in.png
ToolTipText=关于
DynamicVariables=1
W=[&ScaleScript:ScaleCoordinates(24)]
X=[&ScaleScript:ScaleCoordinates(612)]
Y=[&ScaleScript:ScaleCoordinates(704)]
LeftMouseDownAction=[!ShowMeterGroup "InfoMenu"][!HideMeterGroup "Menu"][&UpdateScript:UpdateCheck([&UpdateInfoidMeasure],[&UpdateInfourlMeasure])]
Group=Menu
Hidden=1

[ChangeMeter]
Meter=Image
ImageName=#@#img\ch.png
ToolTipText=临时改课
DynamicVariables=1
W=[&ScaleScript:ScaleCoordinates(25)]
X=[&ScaleScript:ScaleCoordinates(611)]
Y=[&ScaleScript:ScaleCoordinates(652)]
LeftMouseDownAction=[!ShowMeterGroup "ChangeMenu"][!HideMeterGroup "Menu"]
Group=Menu
Hidden=1

[refreshMeter]
Meter=Image
ImageName=#@#img\re.png
ToolTipText=刷新
DynamicVariables=1
W=[&ScaleScript:ScaleCoordinates(28)]
X=[&ScaleScript:ScaleCoordinates(610)]
Y=[&ScaleScript:ScaleCoordinates(600)]
LeftMouseDownAction=[!Refresh]
Group=Menu
Hidden=1
