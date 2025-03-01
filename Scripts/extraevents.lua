function Update()
-- ExtraEvents 额外事件，用于在标准事件之外定义自定义事件
    local currentTime = os.date("*t")
    local currentHour = currentTime.hour
    local currentMinute = currentTime.min
	local days = tonumber(SKIN:GetVariable("daynow"))
        if currentHour == 7 and currentMinute == 25 and days ~= 6 then 
            return "[!ShowMeter ClassStatusMeter3][!HideMeter ClassStatusMeter2][!HideMeter ClassStatusMeter1][!ZPos -2]"
        end
        if currentHour == 7 and currentMinute == 45 then 
            return "[!ShowMeter ClassStatusMeter1][!HideMeter ClassStatusMeter2][!HideMeter ClassStatusMeter3][!ZPos 1][!SetOption classMeter0 FontColor [#finishedclasscolor]]"
        end
        if currentHour == 18 and currentMinute == 0 then 
            return "[!ShowMeter ClassStatusMeter3][!HideMeter ClassStatusMeter2][!HideMeter ClassStatusMeter1][!ShowMeterGroup csbg10][!SetOption classMeter10 FontColor [#onclasscolor]][!ZPos -2]"
        end
        if currentHour == 20 and currentMinute == 10 then 
            return "[!ShowMeter ClassStatusMeter1][!HideMeter ClassStatusMeter2][!HideMeter ClassStatusMeter3][!ShowMeterGroup csbg10][!SetOption classMeter10 FontColor [#finishedclasscolor]][!ZPos 1]"
        end
        if currentHour == 20 and currentMinute == 30 then 
            return "[!ShowMeter ClassStatusMeter3][!HideMeter ClassStatusMeter2][!HideMeter ClassStatusMeter1]"
        end	

	return "No Command Output"
end