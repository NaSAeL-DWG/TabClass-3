lastver = -1
nowver = -1
verurl = 0
weberrcode = -1

function Initialize()
    --upr = SKIN:GetMeter("UpdateInfourlMeter")
    nowver = tonumber(SKIN:GetVariable("nversion"))
    --getUpdateMeature2 = SKIN:GetMeasure("UpdateInfourlMeasure")
    --lastver = tonumber(getUpdateMeature1:GetValue("UpdateInfoidMeasure"))
    --verurlget = upr:GetStringValue()
    --errcode出现网络无法连接时webparser替换为1，脚本显示weberr
    --我是傻逼 明明可以直接用https://github.com/NaSAeL-DWG/TabClass-3/releases/latest的
end

function UpdateCheck(x,y)
    --有问题值部分没获取
    lastver = x
    verurl = "https://github.com/NaSAeL-DWG/TabClass-3/releases/latest"
    weberrcode = tonumber(SKIN:GetVariable("weberrcode"))
    if weberrcode == 1 then
       -- print("1")
        SKIN:Bang('[!ShowMeter "updatemeter3"]')
    elseif lastver > nowver then
       -- print("2")
        SKIN:Bang('[!SetOption updatemeter1 "LeftMouseUpAction" ["https://github.com/NaSAeL-DWG/TabClass-3/releases/latest"]]')
        SKIN:Bang('[!ShowMeter updatemeter1][!ShowMeter InfoMenuWord0Meter]')
    elseif lastver == nowver then
       -- print("3")
        SKIN:Bang('[!ShowMeter "updatemeter2"]')
    end
    return "UpdateCheck：SUCCESS"
end
