[debug1]
Meter=String

DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontSize=20
Text=变周一
X=610
Y=10
Hidden=1
LeftMouseDownAction=[!SetVariable "daynow" "1"][!SetOption ClassInfoViewMeasure Path "#@#class\#daynow#" ][!CommandMeasure ClassInfoViewMeasure Update][!UpdateMeterGroup MyMeterGroup][!SetOption wzxInfoViewMeasure Path "#@#class\wzx\#wzxblock#\#daynow#" ][!CommandMeasure wzxInfoViewMeasure Update]
[debug2]
Meter=String

DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontSize=20
Text=变周六
X=610
Y=50
Hidden=1
LeftMouseDownAction=[!SetVariable "daynow" "6"][!SetOption ClassInfoViewMeasure Path "#@#class\p6\#6block#" ][!CommandMeasure ClassInfoViewMeasure Update][!UpdateMeterGroup MyMeterGroup][!SetOption wzxInfoViewMeasure Path "#@#class\wzx\#wzxblock#\#daynow#" ][!CommandMeasure wzxInfoViewMeasure Update]

[debug3]
Meter=String

DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontSize=20
Text=更新
X=610
Y=90
Hidden=1
LeftMouseDownAction=[!UpdateMeter ClassStatus10colorMeter][!SetVariable Cscolor 255,157,0,#csbgalpha#]

[辅助线]
Meter=Shape
Hidden=1
AntiAlias=1
shape=Rectangle 659,0,32.5,800 | StrokeWidth 1 | Fill LinearGradient MyFillGradient1
MyFillGradient1= 180 | 255,255,255,0 ; 0.0 | 255,255,255,0 ; 0.5
[辅助线2]
Meter=Shape
AntiAlias=1
Hidden=1
shape=Rectangle 600,600,24,250,5,5 | StrokeWidth 1 | Fill LinearGradient MyFillGradient1
MyFillGradient1= 180 | 255,255,255,0 ; 0.0 | 255,255,255,0 ; 0.5