function weather(daynow, last)
	if daynow ~= last then
	     return "[!WriteKeyValue Variables lastweatherday " .. daynow .. " @Resources\\date.inc][!ShowMeterGroup firstweather]"
	end
end	
    