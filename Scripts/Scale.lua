function Initialize()
   scale = tonumber(SKIN:GetVariable("scale"))
end

-- 缩放函数，接受参数 并返回缩放后的结果
function ScaleCoordinates(x)
    local scaledX = x * scale
        return scaledX
end

function ScaleCoordinatesmovemode(x)
    local xcl = tonumber(SKIN:GetVariable("xcl"))
    local scaledX = (x + xcl) * scale

        return scaledX
end

function ScaleShape(x, y, w, h)
    local scaledX = x * scale
    local scaledY = y * scale
    local scaledW = w * scale
    local scaledH = h * scale
    return scaledX ..",".. scaledY ..",".. scaledW ..",".. scaledH
end

function ScaleShapemovemode(x, y, w, h)
    local xcl = tonumber(SKIN:GetVariable("xcl"))
    local scaledX = x * scale
    local scaledY = (y + xcl) * scale
    local scaledW = w * scale
    local scaledH = h * scale
    --print("ScaleShapemovemode Result: " .. scaledX ..",".. scaledY ..",".. scaledW ..",".. scaledH)
    return scaledX ..",".. scaledY ..",".. scaledW ..",".. scaledH
end