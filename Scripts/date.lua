function changewzxblocks(week, lastweek, block)
    if week ~= lastweek then
	    local lastweek = week
		if block + 1 > 6 then
		   local block = 1
		   return "[!SetVariable wzxblock " .. block .. " ][!WriteKeyValue Variables blockd " .. block .. " @Resources\\date.inc][!WriteKeyValue Variables lastweek " .. lastweek .. " @Resources\\date.inc]"
		else
		   local block = block + 1
		   return "[!SetVariable wzxblock " .. block .. " ][!WriteKeyValue Variables blockd " .. block .. " @Resources\\date.inc][!WriteKeyValue Variables lastweek " .. lastweek .. " @Resources\\date.inc]"
		end
    else
	return "[!SetVariable wzxblock " .. block .. " ]"
	end
end

function change6blocks(week, lastweek, block)
    if week ~= lastweek then
	    local lastweek = week
		if block + 1 > 6 then
		   local block = 1
		   return "[!SetVariable 6block " .. block .. " ][!WriteKeyValue Variables blockc " .. block .. " @Resources\\date.inc][!WriteKeyValue Variables lastweek2 " .. lastweek .. " @Resources\\date.inc]"
		else
		   local block = block + 1
		   return "[!SetVariable 6block " .. block .. " ][!WriteKeyValue Variables blockc " .. block .. " @Resources\\date.inc][!WriteKeyValue Variables lastweek2 " .. lastweek .. " @Resources\\date.inc]"
		end
    else
	return "[!SetVariable 6block " .. block .. " ]"
    end
end