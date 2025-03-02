function changewzxblocks(week, lastweek, block)
    if week ~= lastweek then
	    local lastweek = week
		if block + 1 > wzxblocknum then
		   local block = 1
		   return "[!SetVariable wzxblock " .. block .. " ][!WriteKeyValue Variables blockd " .. block .. " ClassTime.inc][!WriteKeyValue Variables lastweek " .. lastweek .. " ClassTime.inc]"
		else
		   local block = block + 1
		   return "[!SetVariable wzxblock " .. block .. " ][!WriteKeyValue Variables blockd " .. block .. " ClassTime.inc][!WriteKeyValue Variables lastweek " .. lastweek .. " ClassTime.inc]"
		end
    else
	return "[!SetVariable wzxblock " .. block .. " ]"
	end
end

function change6blocks(week, lastweek, block)
    if week ~= lastweek then
	    local lastweek = week
		if block + 1 > sixblovknum then
		   local block = 1
		   return "[!SetVariable 6block " .. block .. " ][!WriteKeyValue Variables blockc " .. block .. " ClassTime.inc][!WriteKeyValue Variables lastweek2 " .. lastweek .. " ClassTime.inc]"
		else
		   local block = block + 1
		   return "[!SetVariable 6block " .. block .. " ][!WriteKeyValue Variables blockc " .. block .. " ClassTime.inc][!WriteKeyValue Variables lastweek2 " .. lastweek .. " ClassTime.inc]"
		end
    else
	return "[!SetVariable 6block " .. block .. " ]"
    end
end

function Initialize()
    --获取设置项
    wzxblocknum = tonumber(SKIN:GetVariable('wzxblocknum'))
	sixblovknum = tonumber(SKIN:GetVariable('6blocknum'))
end