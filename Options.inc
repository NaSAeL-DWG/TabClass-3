[Variables]
;===TabClass设置 - 调整此处参数，改变个性化设置==
;====================
;=#Background 背景类#=
;====================

;scale:设置缩放比例，1.0为原始大小
;推荐 1080p-1.0 2k-1.5 4k-2.5
scale=1.0

;bgalpha:设置背景透明度，0-255 0为完全透明 255为不透明
bgalpha=230

;csbgalpha:设置课堂状态背景透明度，0-255 0为完全透明 255为不透明
csbgalpha=230

;FinishedClassColor:已结束课程的颜色，RGB格式，0-255, 不支持Alpha通道
finishedclasscolor=160,160,160
;ReadyClassColor:即将上课课程的颜色，RGB格式，0-255，不支持Alpha通道
readyclasscolor=255,157,0
;OnClassColor:正在上课课程的颜色，RGB格式，0-255，不支持Alpha通道
onclasscolor=255,0,0

;====================
;=#Parameter 参数类#=
;====================

;statusupdate:课堂状态检测频率，建议设置为10 默认为10 不可超过60 单位为秒 ，用于课堂状态检测
statusupdate=10

;classtime:课程持续时间，数值单位为分钟。
classtime=40

;noticeclasstime:状态切换为“即将上课”的时间，数值单位为分钟，此处数值为目标时间距离下一节课开课时间的分钟数。
noticeclasstime=3

;ProxyServerIf:更新检查服务的代理服务器设置。选项："/auto" 使用系统代理（默认），"IP:Port" 使用指定的IP和端口，"/none" 不使用代理。
ProxyServerIf=/auto

;天气系统[暂未开放]-天气地区设置，采用腾讯天气api，从上到下分别是省份、城市和区，若是直辖市则省份直接填城市名
province=
city=
county=

;====================
;=#Switch 功能开关类#=
;====================

;ifcloseautostatus:是否关闭课堂状态检测，0为不关闭，1为关闭。请注意，该选项同时会影响到课程指示器和自定义事件的开关。
ifcloseautostatus=0

;ifenablerecovery:是否开启状态恢复功能，0为不开启，1为开启(建议)。用于刷新后恢复原来的状态与课程指示
ifenablerecovery=1

;clearrecoveryconfig:当该变量为1时，将会在下次刷新时重置已保存的恢复配置，并自动归0。请注意，这会导致接下来2次的刷新内您无法使用Recovery功能。
clearrecoveryconfig=0

;ifenable1441mode:是否启用1441模式，0为不启用，1为启用。启用后，课程显示将会隐藏第五节课并自动向上缩进。请注意，启用本设置后在设置课程时，你仍需在第五节课对应的位置填写任意字符以保证课程显示正常。
ifenable1441mode=0

;==============================
;=#ClassTimeSetting 课程时间类#=
;==============================

;ifenableindividualtime:是否启用独立时间设置，0为不启用，1为启用
ifenableindividualtime=0
;以下内容仅适用于启用独立时间
;以下分别为周一到周六的独立时间启用选项，0为不启用，1为启用，不启用独立时间的日子将使用全局时间
;周一
ifenableindividualtimeMon=0
;周二
ifenableindividualtimeTue=0
;周三
ifenableindividualtimeWed=0
;周四
ifenableindividualtimeThu=0
;周五
ifenableindividualtimeFri=0
;周六
ifenableindividualtimeSat=0

;wzxblocknum:晚自习轮换块数，最高为6。若晚自习不轮换，请将其设置为1
wzxblocknum=6
;6blocknum:周六轮换块数，最高为6。若周六不轮换，请将其设置为1
6blocknum=6



