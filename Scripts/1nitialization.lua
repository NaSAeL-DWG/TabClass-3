local timer = 0
local executed = false
local exd = false
local ex = false
local days = os.date("*t").wday - 1
local ifcloseautostatus = 3
--命令组
local closemeasure="[!DisableMeasure wanzixiblockupdate][!DisableMeasure 6blockupdate][!DisableMeasureGroup Init]"
local update6class="[!SetOptionGroup class String [#ClassDay[#daynow]Block[#6block]]][!SetOption cif10 String \" \"]"
local show="[!ShowMeterGroup csinfo]"

function Update()
    timer = timer + 1
	SKIN:Bang('[!PauseMeasure TimingScript]')
    if days < 6 and not executed then
	    if days == 0 then
		    executed = true
	    	return "[!ZPos 1][!PauseMeasure TimingScript]"
		    --周日不显示
		    else
            executed = true
            return "[!ZPos 1][!PauseMeasure TimingScript]" .. show 
	 	    --置顶
		end
	end
	if days == 6 and not executed then
	    executed = true
		return "[!ZPos 1][!Delay 200]" .. update6class .. "[!UpdateMeasureGroup class][!UpdateMeasure cif10][!Delay 200]" .. show
		--判断周六,延迟200ms进行meter显示内容替换然后更新
    end    
	if timer >= 1 and not exd then
	    exd = true
		return closemeasure
	end
end
