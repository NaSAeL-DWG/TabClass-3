function weather(daynow, last)
	if daynow ~= last then
	     return "[!WriteKeyValue Variables lastweatherday " .. daynow .. " ClassTime.inc][!ShowMeterGroup firstweather]"
	end
end	
    