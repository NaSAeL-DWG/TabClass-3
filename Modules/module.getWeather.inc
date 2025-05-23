;3.0.0 天气
[weathergroup]
Group=weather

[getWeatherMeature1]
Measure=WebParser
URL=https://wis.qq.com/weather/common?source=pc&weather_type=forecast_24h&province=[#province]&city=[#city]&county=[#county]
RegExp="1":\s*{.*?"day_weather":\s*"(.*?)".*?"day_weather_code":\s*"(.*?)".*?"day_wind_direction":\s*"(.*?)".*?"day_wind_power":\s*"(.*?)".*?"night_weather":\s*"(.*?)".*?"night_weather_code":\s*"(.*?)".*?"night_wind_direction":\s*"(.*?)".*?"night_wind_power":\s*"(.*?)".*?"2":\s*{.*?"day_weather":\s*"(.*?)".*?"day_weather_code":\s*"(.*?)".*?"day_wind_direction":\s*"(.*?)".*?"day_wind_power":\s*"(.*?)".*?"night_weather":\s*"(.*?)".*?"night_weather_code":\s*"(.*?)".*?"night_wind_direction":\s*"(.*?)".*?"night_wind_power":\s*"(.*?)"
;获取今明两天天气，数据顺序为 白天天气 白天天气代码 白天风向 白天风力 夜间天气 夜间天气代码 夜间风向 夜间风力 。天气代码：晴00 多云01 阴02 小雨07 中雨08 大雨09 小雪14 中雪15 大雪16 雾18
;吐槽一下：还是老老实实用普通正则吧，官方给的那个简易正则不知道什么毛病就是用不了
OnRegExpErrorAction=[!SetOption WeatherErrorInfoMeasure String "数据解析错误！请检查api返回格式是否变化！"]
OnConnectErrorAction=[!SetOption WeatherErrorInfoMeasure String "获取数据失败！请检查网络可用性！"]
Group=weather

[WeatherErrorInfoMeasure]
Measure=String
String=

; 第1天的天气数据
[DayWeather1]
Measure=WebParser
URL=[getWeatherMeature1]
StringIndex=1 ; 第1天白天天气
Group=weather

[DayWeatherCode1]
Measure=WebParser
URL=[getWeatherMeature1]
StringIndex=2 ; 第1天白天天气代码
Group=weather

[DayWindDirection1]
Measure=WebParser
URL=[getWeatherMeature1]
StringIndex=3 ; 第1天白天风向
Group=weather

[DayWindPower1]
Measure=WebParser
URL=[getWeatherMeature1]
StringIndex=4 ; 第1天白天风力
Group=weather

[NightWeather1]
Measure=WebParser
URL=[getWeatherMeature1]
StringIndex=5 ; 第1天夜间天气
Group=weather

[NightWeatherCode1]
Measure=WebParser
URL=[getWeatherMeature1]
StringIndex=6 ; 第1天夜间天气代码
Group=weather

[NightWindDirection1]
Measure=WebParser
URL=[getWeatherMeature1]
StringIndex=7 ; 第1天夜间风向
Group=weather

[NightWindPower1]
Measure=WebParser
URL=[getWeatherMeature1]
StringIndex=8 ; 第1天夜间风力
Group=weather

; 第2天的天气数据
[DayWeather2]
Measure=WebParser
URL=[getWeatherMeature1]
StringIndex=9 ; 第2天白天天气
Group=weather

[DayWeatherCode2]
Measure=WebParser
URL=[getWeatherMeature1]
StringIndex=10 ; 第2天白天天气代码
Group=weather

[DayWindDirection2]
Measure=WebParser
URL=[getWeatherMeature1]
StringIndex=11 ; 第2天白天风向
Group=weather

[DayWindPower2]
Measure=WebParser
URL=[getWeatherMeature1]
StringIndex=12 ; 第2天白天风力
Group=weather

[NightWeather2]
Measure=WebParser
URL=[getWeatherMeature1]
StringIndex=13 ; 第2天夜间天气
Group=weather

[NightWeatherCode2]
Measure=WebParser
URL=[getWeatherMeature1]
StringIndex=14 ; 第2天夜间天气代码
Group=weather

[NightWindDirection2]
Measure=WebParser
URL=[getWeatherMeature1]
StringIndex=15 ; 第2天夜间风向
Group=weather

[NightWindPower2]
Measure=WebParser
URL=[getWeatherMeature1]
StringIndex=16 ; 第2天夜间风力
Group=weather


;}用于判断是否同一天，若是同一天则不再显示窗口
[weatherrepofirstScript]
Measure=Script
ScriptFile=Scripts\weather.lua
UpdateDivider=1
Group=Init

[weatherlls]
Measure=String
String=1
OnUpdateAction=[&weatherrepofirstScript:weather([&Date5Measure], [#*lastweatherday*])]
UpdateDivider=1
Group=Init

;天气显示-当日第一次开启
[WeatherView1Group]
Group=WeatherView1

[WeatherView1BackgroudMeter]
Meter=Shape
AntiAlias=1
shape=Rectangle 0,100,550,400,5,5 | StrokeWidth 0 | Fill LinearGradient MyFillGradient1
MyFillGradient1= 180 | 255,255,255,#bgalpha# ; 0.0 | 255,255,255,#bgalpha# ; 0.5
Group=WeatherView1
Hidden=0

[WeatherView1TopMeter]
Meter=Shape
AntiAlias=1
shape=Rectangle 0,100,550,35,5,5 | StrokeWidth 0 | Fill LinearGradient MyFillGradient1
MyFillGradient1= 180 | 255,255,255,#bgalpha# ; 0.0 | 255,255,255,#bgalpha# ; 0.5
Group=WeatherView1
Hidden=0

[WeatherView1CloseMeter]
Meter=Image
ImageName=#@#img\cl.png
ToolTipText=关闭
W=26
X=515
Y=105
LeftMouseDownAction=[!HideMeterGroup "WeatherView1"]
Group=WeatherView1
Hidden=0

[WeatherView1TopiconMeter]
Meter=Image
ImageName=#@#img\ch.png
W=25
X=5
Y=105
LeftMouseDownAction=
Group=WeatherView1
Hidden=0

[WeatherView1TopWordMeter]
Meter=String
DynamicVariables=1
MeterStyle=TextStyle
FontFace=MiSans Medium
FontSize=13
Text=天气
X=255
Y=106
Hidden=0
Group=WeatherView1