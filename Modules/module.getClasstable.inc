;3.0.0-周1-5课表信息读取
[ClassViewGroup]
Group=class

[cif0]
Measure=String
DynamicVariables=1
String=[#ClassDay[#daynow]]
RegExpSubstitute=1
Substitute="(.)(.*)":"\1"
Group=class

[cif1]
Measure=String
DynamicVariables=1
String=[#ClassDay[#daynow]]
RegExpSubstitute=1
Substitute="^..(.)(.*)":"\1"
Group=class

[cif2]
Measure=String
DynamicVariables=1
String=[#ClassDay[#daynow]]
RegExpSubstitute=1
Substitute="^....(.)(.*)":"\1"
Group=class

[cif3]
Measure=String
DynamicVariables=1
String=[#ClassDay[#daynow]]
RegExpSubstitute=1
Substitute="^......(.)(.*)":"\1"
Group=class

[cif4]
Measure=String
DynamicVariables=1
String=[#ClassDay[#daynow]]
RegExpSubstitute=1
Substitute="^........(.)(.*)":"\1"
Group=class

[cif5]
Measure=String
DynamicVariables=1
String=[#ClassDay[#daynow]]
RegExpSubstitute=1
Substitute="^..........(.)(.*)":"\1"
Group=class

[cif6]
Measure=String
DynamicVariables=1
String=[#ClassDay[#daynow]]
RegExpSubstitute=1
Substitute="^............(.)(.*)":"\1"
Group=class

[cif7]
Measure=String
DynamicVariables=1
String=[#ClassDay[#daynow]]
RegExpSubstitute=1
Substitute="^..............(.)(.*)":"\1"
Group=class

[cif8]
Measure=String
DynamicVariables=1
String=[#ClassDay[#daynow]]
RegExpSubstitute=1
Substitute="^................(.)(.*)":"\1"
Group=class

[cif9]
Measure=String
DynamicVariables=1
String=[#ClassDay[#daynow]]
RegExpSubstitute=1
Substitute="^..................(.)(.*)":"\1"
Group=class

;晚自习读取
[cif10]
Measure=String
DynamicVariables=1
String=[#ClassNightBlock[#wzxblock]Day[#daynow]]
