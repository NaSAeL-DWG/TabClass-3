local ifcloseautostatus = 3

--命令组
local closeautostatus="[!DisableMeasure StatusScript][!DisableMeasure ExtraeventsupdateMeasure][!DisableMeasure ClassstatusupdateMeasure][!SetOption TextMeter1 FontColor 127,127,127][!HideMeterGroup status][!ShowMeter TextMeter3][!ShowMeter TextMeter2][!HideMeter ClassStatusbgMeter]"


function Initialize()
    ifcloseautostatus = tonumber(SKIN:GetVariable("ifcloseautostatus"))
	ifenablerecovery = tonumber(SKIN:GetVariable("ifenablerecovery"))
	ifenableoffomode = tonumber(SKIN:GetVariable("ifenable1441mode"))
end
function Update()
        output = "" 
		if ifcloseautostatus == 1 then
		output = output .. closeautostatus .. "[!DisableMeasureGroup Recovery]"
		end
		if ifenablerecovery == 0 then
		output = output .. "[!DisableMeasureGroup Recovery]"
		end
		if ifenableoffomode == 1 then
		output = output .. "[!HideMeter classMeter5][!SetVariable xcl -40]"
		end
		return output
end