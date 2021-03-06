;-----------------------
;DOTS
;-----------------------


[MeterSecBlock]
Meter=Roundline
X=#SecStartX#+(#Size#/10)
Y=#SecStartY#+(#Size#/10)
W=10
H=10
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/12)
LineColor=#Seccolor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterMinBlock]
Meter=Roundline
X=#MinStartX#+(#Size#/10)
Y=#MinStartY#+(#Size#/10)
W=10
H=10
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/11)
LineColor=#mincolor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterHourBlock]
Meter=Roundline
X=#HourStartX#+(#Size#/10)
Y=#HourStartY#+(#Size#/10)
W=10
H=10
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/10)
LineColor=#Hourcolor#
Solid=1
AntiAlias=1
DynamicVariables=1

;-----------------------
;LINES
;-----------------------

[MeterSecLine]
Meter=ROUNDLINE
MeasureName=MeasureSecAngle
X=(#SecStartX#-[MeasureSecLine])+((#Size#/100)*15)
Y=(#SecStartY#-[MeasureSecLine])+((#Size#/100)*15)
W=(2 * [MeasureSecLine])
H=(2 * [MeasureSecLine])
LineWidth=#LineWidth#
LineLength=([MeasureSecLine])
LineStart=0
StartAngle=(-PI/2)
RotationAngle=(PI * 2)
LineColor=#Linecolor#
Solid=0
AntiAlias=1
DynamicVariables=1

[MeterMinLine]
Meter=ROUNDLINE
MeasureName=MeasureMinAngle
X=(#MinStartX#-[MeasureMinLine])+((#Size#/100)*15)
Y=(#MinStartY#-[MeasureMinLine])+((#Size#/100)*15)
W=(2 * [MeasureMinLine])
H=(2 * [MeasureMinLine])
LineWidth=#LineWidth#
LineLength=([MeasureMinLine])
LineStart=0
StartAngle=(-PI/2)
RotationAngle=(PI * 2)
LineColor=#Linecolor#
Solid=0
AntiAlias=1
DynamicVariables=1

[MeterHourLine]
Meter=ROUNDLINE
MeasureName=MeasureHourAngle
X=(#HourStartX#-[MeasureHourLine])+((#Size#/100)*15)
Y=(#HourStartY#-[MeasureHourLine])+((#Size#/100)*15)
W=(2 * [MeasureHourLine])
H=(2 * [MeasureHourLine])
LineWidth=#LineWidth#
LineLength=([MeasureHourLine])
LineStart=0
StartAngle=(-PI/2)
RotationAngle=(PI * 2)
LineColor=#Linecolor#
Solid=0
AntiAlias=1
DynamicVariables=1

;------
;Round
;------

[MeterD1]
Meter=Roundline
X=#D1X#+(#Size#/10)
Y=#D1Y#+(#Size#/10)
W=10
H=10
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/30)
LineColor=#Dotcolor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterD2]
Meter=Roundline
X=#D2X#+(#Size#/10)
Y=#D2Y#+(#Size#/10)
W=10
H=10
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/30)
LineColor=#Dotcolor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterD3]
Meter=Roundline
X=#D3X#+(#Size#/10)
Y=#D3Y#+(#Size#/10)
W=10
H=10
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/30)
LineColor=#Dotcolor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterD4]
Meter=Roundline
X=#D4X#+(#Size#/10)
Y=#D4Y#+(#Size#/10)
W=10
H=10
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/30)
LineColor=#Dotcolor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterD5]
Meter=Roundline
X=#D5X#+(#Size#/10)
Y=#D5Y#+(#Size#/10)
W=10
H=10
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/30)
LineColor=#Dotcolor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterD6]
Meter=Roundline
X=#D6X#+(#Size#/10)
Y=#D6Y#+(#Size#/10)
W=10
H=10
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/30)
LineColor=#Dotcolor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterD7]
Meter=Roundline
X=#D7X#+(#Size#/10)
Y=#D7Y#+(#Size#/10)
W=10
H=10
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/30)
LineColor=#Dotcolor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterD8]
Meter=Roundline
X=#D8X#+(#Size#/10)
Y=#D8Y#+(#Size#/10)
W=10
H=10
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/30)
LineColor=#Dotcolor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterD9]
Meter=Roundline
X=#D9X#+(#Size#/10)
Y=#D9Y#+(#Size#/10)
W=10
H=10
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/30)
LineColor=#Dotcolor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterD10]
Meter=Roundline
X=#D10X#+(#Size#/10)
Y=#D10Y#+(#Size#/10)
W=10
H=10
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/30)
LineColor=#Dotcolor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterD11]
Meter=Roundline
X=#D11X#+(#Size#/10)
Y=#D11Y#+(#Size#/10)
W=10
H=10
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/30)
LineColor=#Dotcolor#
Solid=1
AntiAlias=1
DynamicVariables=1

[MeterD12]
Meter=Roundline
X=#D12X#+(#Size#/10)
Y=#D12Y#+(#Size#/10)
W=10
H=10
StartAngle=4.712
RotationAngle=6.283
LineLength=(#Size#/30)
LineColor=#Dotcolor#
Solid=1
AntiAlias=1
DynamicVariables=1




