;Menu-关于
[InfoMenuGroup]
Group=InfoMenu

[UpdateInfoGroup]
Group=InfoMenu1

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
LeftMouseDownAction=[!HideMeterGroup "InfoMenu"][!HideMeterGroup "InfoMenu1"][!HideMeterGroup "InfoStatus"]
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



[downloadUpdateInfoMeature1]
Measure=WebParser
URL=https://api.github.com/repos/NaSAeL-DWG/TabClass-3/releases/latest
;RegExp=(?siU)"html_url":"(.*)",.*"id": (.*),
OnRegExpErrorAction=[!SetOption debug1 Text "数据解析错误！请检查api返回格式是否变化！"]
OnConnectErrorAction=[!SetOption debug1 Text "获取数据失败！请检查网络可用性！"]
Download=1
Debug=1
DownloadFile=updateinfotemp.txt
ProxyServer=#ProxyServerIf#
Group=InfoMenu

[getUpdateInfoMeature1]
Measure=WebParser
URL=file://#CURRENTPATH#DownloadFile\updateinfotemp.txt
RegExp=(?siU)"html_url":(.*)",.*"id":(.*),.*"tag_name":"(.*)"
Group=InfoMenu

[UpdateInfoidMeasure]
Measure=WebParser
URL=[getUpdateInfoMeature1]
StringIndex = 2
Group=InfoMenu

[UpdateInfourlMeasure]
Measure=WebParser
URL=[getUpdateInfoMeature1]
StringIndex = 1
Group=InfoMenu
[UpdateInfotagMeasure]
Measure=WebParser
URL=[getUpdateInfoMeature1]
StringIndex = 3
Group=InfoMenu



[updatemeter1]
Meter=Image
;有更新
DynamicVariables=1
AntiAlias=1
ImageName=#@#img\update1.png
DynamicVariables=1
W=500
X=25
Y=310
Group=InfoMenu1
Hidden=1
LeftMouseUpAction=

[updatemeter2]
Meter=Image
;最新版本
DynamicVariables=1
AntiAlias=1
ImageName=#@#img\update2.png
DynamicVariables=1
W=500
X=25
Y=310
Group=InfoMenu1
Hidden=1
LeftMouseUpAction=

[updatemeter3]
;网络错误
Meter=Image
DynamicVariables=1
AntiAlias=1
ImageName=#@#img\update3.png
DynamicVariables=1
W=500
X=25
Y=310
Group=InfoMenu1
Hidden=1
LeftMouseUpAction=

[InfoMenuWord0Meter]
Meter=String
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontSize=14
MeasureName=UpdateInfotagMeasure
X=310
Y=365
Hidden=1


[InfoMenuWord1Meter]
Meter=String
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontSize=10
Text=TabClass 桌面课表 - 基于Rainmeter的自动化课表显示工具
X=95
Y=420
Hidden=1
Group=InfoMenu

[InfoMenuWord2Meter]
Meter=String
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Normal
FontSize=10
Text=Version：3.0.0 Master 正式版
X=190
Y=440
Hidden=1
Group=InfoMenu

[InfoMenuWord4Meter]
Meter=String
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontSize=10
Text=
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
Text=
ClipString=2
W=310
X=190
Y=480
Hidden=1
Group=InfoMenu

[InfoMenucciconMeter]
Meter=Image
ImageName=#@#img\github-mark.png
W=35
X=255
Y=580
LeftMouseDownAction=["https://github.com/NaSAeL-DWG/TabClass-3"]
Group=InfoMenu
Hidden=1



