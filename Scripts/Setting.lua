local ifcloseautostatus = 3

--命令组
local closeautostatus="[!DisableMeasure StatusScript][!DisableMeasure ExtraeventsupdateMeasure][!DisableMeasure ClassstatusupdateMeasure][!SetOption TextMeter1 FontColor 127,127,127][!HideMeterGroup status][!ShowMeter TextMeter3][!ShowMeter TextMeter2][!HideMeter ClassStatusbgMeter]"


function Initialize()
    ifcloseautostatus = tonumber(SKIN:GetVariable("ifcloseautostatus"))
	ifenablerecovery = tonumber(SKIN:GetVariable("ifenablerecovery"))
end
function Update()
        output = "" 
		if ifcloseautostatus == 1 then
		output = output .. closeautostatus
		end
		if ifenablerecovery == 0 then
		output = output .. "[!DisableMeasureGroup Recovery]"
		end
		return output
end