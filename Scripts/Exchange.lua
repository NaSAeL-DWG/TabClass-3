function Exchangeclass(first, second)
--判断数据合法性
    if first == 12 or second == 12 then
        return "[!ShowMeter \"Changeinputstatus1Meter\"][!HideMeter \"Changeinputstatus2Meter\"][!HideMeter \"ChangeMenuInput4IntroduceMeter\"][!HideMeter \"ChangeMenuInput3IntroduceMeter\"]"
    end
    --交换
    local fclass = "classMeter" .. first
    local sclass = "classMeter" .. second
    local ftext = SKIN:GetMeter(fclass):GetOption("Text")
    local stext = SKIN:GetMeter(sclass):GetOption("Text")
   -- print("[!SetOption " .. fclass .. " Text " .. stext .. "][!SetOption " .. sclass .. " Text " .. ftext .. "][!SetVariable change1 12][!SetVariable change2 12][!HideMeter \"ChangeMenuInput4IntroduceMeter\"][!HideMeter \"ChangeMenuInput3IntroduceMeter\"][!ShowMeter \"Changeinputstatus2Meter\"][!HideMeter \"Changeinputstatus1Meter\"]")
    return "[!SetOption " .. fclass .. " Text " .. stext .. "][!SetOption " .. sclass .. " Text " .. ftext .. "][!SetVariable change1 12][!SetVariable change2 12][!HideMeter \"ChangeMenuInput4IntroduceMeter\"][!HideMeter \"ChangeMenuInput3IntroduceMeter\"][!ShowMeter \"Changeinputstatus2Meter\"][!HideMeter \"Changeinputstatus1Meter\"]"
end

function Initialize()
    scale = tonumber(SKIN:GetVariable("scale"))
 end