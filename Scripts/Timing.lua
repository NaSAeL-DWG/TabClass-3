local timep = 0

function Update()
    --防止status多次触发导致闪烁，此处计时60秒，60秒后恢复status检测以避免闪烁
    if timep >= 60 then
        timep = 0
        print(timep)
        SKIN:Bang('[!UnpauseMeasure ClassstatusupdateMeasure][!PauseMeasure TimingScript]')
        return "TimingScript：60sCountdownFinished"
    else
        print(timep)
        timep = timep + 1
        SKIN:Bang('[!PauseMeasure ClassstatusupdateMeasure]')
        return "TimingScript：60sCounting"
    end
end

--5.31 #16 发现可能出现暂停失败，之后换用其他return方式