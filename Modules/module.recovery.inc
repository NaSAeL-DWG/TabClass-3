;3.0.0 Recovery 恢复

[Variables]
profiledate=151
laststatus=0
lastclass=7

;status 0为上课1为下课2为即将上课 lastclass为已经上了的最后一节课

[RecoveryMeasure]
Measure=String
Text=1
DynamicVariables=1
UpdateDivider=1
OnUpdateAction=[RecoveryScript]
Group=Recovery

[RecoveryScript]
Measure=Script
ScriptFile=Scripts\Recovery.lua
UpdateDivider=1
Group=Recovery
