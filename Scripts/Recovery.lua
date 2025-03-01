function Initialize()
    clearrecoveryconfig = tonumber(SKIN:GetVariable("clearrecoveryconfig"))
    ifenablerecovery = tonumber(SKIN:GetVariable("ifenablerecovery"))
	profiledate = tonumber(SKIN:GetVariable("profiledate"))
    laststatus = tonumber(SKIN:GetVariable("laststatus"))
    lastclass = tonumber(SKIN:GetVariable("lastclass"))
	nowdate = os.date("*t").yday
end
function Update()
local output = 1
     if clearrecoveryconfig == 0 then
		if ifenablerecovery == 1 then
		   if profiledate == nowdate then
		   --检验数据有效性，无效则不进行恢复
		      if lastclass == -1 then
		         return "[!DisableMeasureGroup Recovery]"
			  end
		      if laststatus == 0 then
			     output = "[!ShowMeter ClassStatusMeter3][!HideMeter ClassStatusMeter2][!HideMeter ClassStatusMeter1][!ZPos -2][!ShowMeterGroup csbg".. lastclass+1 .."][!SetOption classMeter".. lastclass+1 .." FontColor [#onclasscolor]]"
			  end
              if laststatus == 1 then
			     output = "[!ShowMeter ClassStatusMeter1][!HideMeter ClassStatusMeter2][!HideMeter ClassStatusMeter3][!ZPos 1][!ShowMeterGroup csbg".. lastclass+1 .."][!SetOption classMeter".. lastclass+1 .." FontColor [#readyclasscolor]]"
		      end 
              if laststatus == 2 then
			     output = "[!ShowMeter ClassStatusMeter2][!HideMeter ClassStatusMeter1][!HideMeter ClassStatusMeter3][!ZPos 1][!ShowMeterGroup csbg".. lastclass+1 .."][!SetOption classMeter".. lastclass+1 .." FontColor [#onclasscolor]]"
              end
			  for i = 0 , lastclass do
			  output = output .. "[!SetOption classMeter".. i .." FontColor [#finishedclasscolor]][!DisableMeasureGroup Recovery]"
			  end
			  return output
		   else
		      output = "[!DisableMeasureGroup Recovery][!WriteKeyValue Variables profiledate " .. nowdate .. " Modules\\module.recovery.inc][!WriteKeyValue Variables lastclass -1 Modules\\module.recovery.inc][!WriteKeyValue Variables laststatus 1 Modules\\module.recovery.inc]"
			  return output

		   end
		   
		else
		   return "[!DisableMeasureGroup Recovery]"
		end
	 else
	    return "[!DisableMeasureGroup Recovery][!WriteKeyValue Variables profiledate 0 Modules\\module.recovery.inc][!WriteKeyValue Variables lastclass -1 Modules\\module.recovery.inc][!WriteKeyValue Variables laststatus 1 Modules\\module.recovery.inc][!WriteKeyValue Variables clearrecoveryconfig 0 Options.inc]"
     end
end