classTimes = {}

function Update()
    currentTime = os.date("*t")
    currentHour = currentTime.hour
    currentMinute = currentTime.min
	days = currentTime.wday - 1
	--进行独立时间判断
    if ifenableindividualtime == 1 then
        --为ClassTime数组按照独立设置赋值
        if ifenableindividualtimeMon == 1 and days == 1 then
            AssignClassTime1()
        elseif days == 1 then
            AssignClassTimeGlobal()
        end
        
        if ifenableindividualtimeTue == 1 and days == 2 then
            AssignClassTime2()
        elseif days == 2 then
            AssignClassTimeGlobal()
        end 
        if ifenableindividualtimeWed == 1 and days == 3 then
            AssignClassTime3()
        elseif days == 3 then
            AssignClassTimeGlobal()
        end
        if ifenableindividualtimeThu == 1 and days == 4 then
            AssignClassTime4()
        elseif days == 4 then
            AssignClassTimeGlobal()
        end
        if ifenableindividualtimeFri == 1 and days == 5 then
            AssignClassTime5()
        elseif days == 5 then
            AssignClassTimeGlobal()
        end
        if ifenableindividualtimeSat == 1 and days == 6 then
            AssignClassTime6()
        elseif days == 6 then
            AssignClassTimeGlobal()
        end
        --送去判断
        return CommandOutput()

    else
        --未启用独立时间则直接按全局时间赋值
        AssignClassTimeGlobal()
        return CommandOutput()
    end
end

function CommandOutput()
    -- 遍历每节课的时间
    for i, class in ipairs(classTimes) do
	--此处判断是哪一节课 是否上课
        if currentHour == class.h and currentMinute == class.m then 
            return "[!ShowMeter ClassStatusMeter3][!HideMeter ClassStatusMeter2][!HideMeter ClassStatusMeter1][!ZPos -2][!WriteKeyValue Variables laststatus 0 Modules\\module.recovery.inc][!WriteKeyValue Variables lastclass ".. i-1 .." Modules\\module.recovery.inc][!UnpauseMeasure TimingScript]"
        end
		--即将上课
		local will_hour = class.h
        local will_minute = class.m - noticeclasstime
        -- 如果分钟数小于0，调整小时和分钟
        if will_minute < 0 then
            will_minute = will_minute + 60
            will_hour = will_hour - 1
        end
		if currentHour == will_hour and currentMinute == will_minute then
		    output = "[!ShowMeter ClassStatusMeter2][!HideMeter ClassStatusMeter1][!HideMeter ClassStatusMeter3][!ShowMeterGroup csbg".. i .."][!SetOption classMeter".. i .." FontColor [#onclasscolor]][!WriteKeyValue Variables laststatus 2 Modules\\module.recovery.inc][!WriteKeyValue Variables lastclass ".. i-1 .." Modules\\module.recovery.inc][!UnpauseMeasure TimingScript]"
            if i == 1 then
                output = output .. "[!SetOption classMeter0 FontColor [#finishedclasscolor]]"
            end
            return output
        
        end
		--是否下课
		local end_hour = class.h
        local end_minute = class.m + classtime
        -- 如果分钟数大于60，调整小时和分钟
        if end_minute >= 60 then
            end_minute = end_minute - 60
            end_hour = end_hour + 1
        end
		if currentHour == end_hour and currentMinute == end_minute then
				return "[!ShowMeter ClassStatusMeter1][!HideMeter ClassStatusMeter2][!HideMeter ClassStatusMeter3][!HideMeterGroup csbg".. i .."][!ShowMeterGroup csbg".. i+1 .."][!SetOption classMeter".. i .." FontColor [#finishedclasscolor]][!SetOption classMeter".. i+1 .." FontColor [#readyclasscolor]][!ZPos 1][!WriteKeyValue Variables laststatus 1 Modules\\module.recovery.inc][!WriteKeyValue Variables lastclass ".. i .." Modules\\module.recovery.inc][!UnpauseMeasure TimingScript]" 
	    --11.24 本来想要让下课的时候下节课的那个侧边提示条变成黄色的，失败，遂放弃以后再说
        --3.4 现在可以了，但不想搞了zzz
		end	
    end

    return "No Command Output"
end

function Initialize()
    --获取设置项
    classtime = tonumber(SKIN:GetVariable("classtime"))
	noticeclasstime = tonumber(SKIN:GetVariable("noticeclasstime"))
    ifenableindividualtime = tonumber(SKIN:GetVariable("ifenableindividualtime"))
    ifenableindividualtimeMon = tonumber(SKIN:GetVariable("ifenableindividualtimeMon"))
    ifenableindividualtimeTue = tonumber(SKIN:GetVariable("ifenableindividualtimeTue"))
    ifenableindividualtimeWed = tonumber(SKIN:GetVariable("ifenableindividualtimeWed"))
    ifenableindividualtimeThu = tonumber(SKIN:GetVariable("ifenableindividualtimeThu"))
    ifenableindividualtimeFri = tonumber(SKIN:GetVariable("ifenableindividualtimeFri"))
    ifenableindividualtimeSat = tonumber(SKIN:GetVariable("ifenableindividualtimeSat"))

end

function AssignClassTime1()
    classTimes = {
        {h = tonumber(SKIN:GetVariable("1c1h")), m = tonumber(SKIN:GetVariable("1c1m"))},
        {h = tonumber(SKIN:GetVariable("1c2h")), m = tonumber(SKIN:GetVariable("1c2m"))},
        {h = tonumber(SKIN:GetVariable("1c3h")), m = tonumber(SKIN:GetVariable("1c3m"))},
        {h = tonumber(SKIN:GetVariable("1c4h")), m = tonumber(SKIN:GetVariable("1c4m"))},
        {h = tonumber(SKIN:GetVariable("1c5h")), m = tonumber(SKIN:GetVariable("1c5m"))},
        {h = tonumber(SKIN:GetVariable("1c6h")), m = tonumber(SKIN:GetVariable("1c6m"))},
        {h = tonumber(SKIN:GetVariable("1c7h")), m = tonumber(SKIN:GetVariable("1c7m"))},
        {h = tonumber(SKIN:GetVariable("1c8h")), m = tonumber(SKIN:GetVariable("1c8m"))},
        {h = tonumber(SKIN:GetVariable("1c9h")), m = tonumber(SKIN:GetVariable("1c9m"))}
    }
end

function AssignClassTime2()
    classTimes = {
        {h = tonumber(SKIN:GetVariable("2c1h")), m = tonumber(SKIN:GetVariable("2c1m"))},
        {h = tonumber(SKIN:GetVariable("2c2h")), m = tonumber(SKIN:GetVariable("2c2m"))},
        {h = tonumber(SKIN:GetVariable("2c3h")), m = tonumber(SKIN:GetVariable("2c3m"))},
        {h = tonumber(SKIN:GetVariable("2c4h")), m = tonumber(SKIN:GetVariable("2c4m"))},
        {h = tonumber(SKIN:GetVariable("2c5h")), m = tonumber(SKIN:GetVariable("2c5m"))},
        {h = tonumber(SKIN:GetVariable("2c6h")), m = tonumber(SKIN:GetVariable("2c6m"))},
        {h = tonumber(SKIN:GetVariable("2c7h")), m = tonumber(SKIN:GetVariable("2c7m"))},
        {h = tonumber(SKIN:GetVariable("2c8h")), m = tonumber(SKIN:GetVariable("2c8m"))},
        {h = tonumber(SKIN:GetVariable("2c9h")), m = tonumber(SKIN:GetVariable("2c9m"))}
    }
end

function AssignClassTime3()
    classTimes = {
        {h = tonumber(SKIN:GetVariable("3c1h")), m = tonumber(SKIN:GetVariable("3c1m"))},
        {h = tonumber(SKIN:GetVariable("3c2h")), m = tonumber(SKIN:GetVariable("3c2m"))},
        {h = tonumber(SKIN:GetVariable("3c3h")), m = tonumber(SKIN:GetVariable("3c3m"))},
        {h = tonumber(SKIN:GetVariable("3c4h")), m = tonumber(SKIN:GetVariable("3c4m"))},
        {h = tonumber(SKIN:GetVariable("3c5h")), m = tonumber(SKIN:GetVariable("3c5m"))},
        {h = tonumber(SKIN:GetVariable("3c6h")), m = tonumber(SKIN:GetVariable("3c6m"))},
        {h = tonumber(SKIN:GetVariable("3c7h")), m = tonumber(SKIN:GetVariable("3c7m"))},
        {h = tonumber(SKIN:GetVariable("3c8h")), m = tonumber(SKIN:GetVariable("3c8m"))},
        {h = tonumber(SKIN:GetVariable("3c9h")), m = tonumber(SKIN:GetVariable("3c9m"))}
    }
end

function AssignClassTime4()
    classTimes = {
        {h = tonumber(SKIN:GetVariable("4c1h")), m = tonumber(SKIN:GetVariable("4c1m"))},
        {h = tonumber(SKIN:GetVariable("4c2h")), m = tonumber(SKIN:GetVariable("4c2m"))},
        {h = tonumber(SKIN:GetVariable("4c3h")), m = tonumber(SKIN:GetVariable("4c3m"))},
        {h = tonumber(SKIN:GetVariable("4c4h")), m = tonumber(SKIN:GetVariable("4c4m"))},
        {h = tonumber(SKIN:GetVariable("4c5h")), m = tonumber(SKIN:GetVariable("4c5m"))},
        {h = tonumber(SKIN:GetVariable("4c6h")), m = tonumber(SKIN:GetVariable("4c6m"))},
        {h = tonumber(SKIN:GetVariable("4c7h")), m = tonumber(SKIN:GetVariable("4c7m"))},
        {h = tonumber(SKIN:GetVariable("4c8h")), m = tonumber(SKIN:GetVariable("4c8m"))},
        {h = tonumber(SKIN:GetVariable("4c9h")), m = tonumber(SKIN:GetVariable("4c9m"))}
    }
end

function AssignClassTime5()
    classTimes = {
        {h = tonumber(SKIN:GetVariable("5c1h")), m = tonumber(SKIN:GetVariable("5c1m"))},
        {h = tonumber(SKIN:GetVariable("5c2h")), m = tonumber(SKIN:GetVariable("5c2m"))},
        {h = tonumber(SKIN:GetVariable("5c3h")), m = tonumber(SKIN:GetVariable("5c3m"))},
        {h = tonumber(SKIN:GetVariable("5c4h")), m = tonumber(SKIN:GetVariable("5c4m"))},
        {h = tonumber(SKIN:GetVariable("5c5h")), m = tonumber(SKIN:GetVariable("5c5m"))},
        {h = tonumber(SKIN:GetVariable("5c6h")), m = tonumber(SKIN:GetVariable("5c6m"))},
        {h = tonumber(SKIN:GetVariable("5c7h")), m = tonumber(SKIN:GetVariable("5c7m"))},
        {h = tonumber(SKIN:GetVariable("5c8h")), m = tonumber(SKIN:GetVariable("5c8m"))},
        {h = tonumber(SKIN:GetVariable("5c9h")), m = tonumber(SKIN:GetVariable("5c9m"))}
    }
end

function AssignClassTime6()
    classTimes = {
        {h = tonumber(SKIN:GetVariable("6c1h")), m = tonumber(SKIN:GetVariable("6c1m"))},
        {h = tonumber(SKIN:GetVariable("6c2h")), m = tonumber(SKIN:GetVariable("6c2m"))},
        {h = tonumber(SKIN:GetVariable("6c3h")), m = tonumber(SKIN:GetVariable("6c3m"))},
        {h = tonumber(SKIN:GetVariable("6c4h")), m = tonumber(SKIN:GetVariable("6c4m"))},
        {h = tonumber(SKIN:GetVariable("6c5h")), m = tonumber(SKIN:GetVariable("6c5m"))},
        {h = tonumber(SKIN:GetVariable("6c6h")), m = tonumber(SKIN:GetVariable("6c6m"))},
        {h = tonumber(SKIN:GetVariable("6c7h")), m = tonumber(SKIN:GetVariable("6c7m"))},
        {h = tonumber(SKIN:GetVariable("6c8h")), m = tonumber(SKIN:GetVariable("6c8m"))},
        {h = tonumber(SKIN:GetVariable("6c9h")), m = tonumber(SKIN:GetVariable("6c9m"))}
    }
end

function AssignClassTimeGlobal()
    classTimes = {
        {h = tonumber(SKIN:GetVariable("c1h")), m = tonumber(SKIN:GetVariable("c1m"))},
        {h = tonumber(SKIN:GetVariable("c2h")), m = tonumber(SKIN:GetVariable("c2m"))},
        {h = tonumber(SKIN:GetVariable("c3h")), m = tonumber(SKIN:GetVariable("c3m"))},
        {h = tonumber(SKIN:GetVariable("c4h")), m = tonumber(SKIN:GetVariable("c4m"))},
        {h = tonumber(SKIN:GetVariable("c5h")), m = tonumber(SKIN:GetVariable("c5m"))},
        {h = tonumber(SKIN:GetVariable("c6h")), m = tonumber(SKIN:GetVariable("c6m"))},
        {h = tonumber(SKIN:GetVariable("c7h")), m = tonumber(SKIN:GetVariable("c7m"))},
        {h = tonumber(SKIN:GetVariable("c8h")), m = tonumber(SKIN:GetVariable("c8m"))},
        {h = tonumber(SKIN:GetVariable("c9h")), m = tonumber(SKIN:GetVariable("c9m"))}
    }
end