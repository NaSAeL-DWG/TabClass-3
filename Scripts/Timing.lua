local timep = 0

function Update()
    --防止status多次触发导致闪烁，此处计时60秒，60秒后恢复status检测以避免闪烁
    if timep >= 60 then
        timep = 0
        print(timep)
        return "[!UnpauseMeasure ClassstatusupdateMeasure][!PauseMeasure TimingScript]"
    else
        print(timep)
        timep = timep + 1
        return "[!PauseMeasure ClassstatusupdateMeasure]" 
    end
end