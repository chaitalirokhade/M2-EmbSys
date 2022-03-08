#
TEST PLAN AND OUTPUT

|Test ID   | Description  | Input  | Output  |   
|---|---|---|---|
| TID_01  |Is person enters or exist   |switch=1   |  LED ON |   
| TID_02  |Is person not enters or exist   | switch=0  |   LED OFF|   
|  TID_03 |Temperature request	 |  Temp=0 |  Heater Off |   
| TID_04  | Temperature request   |   Temp=20  | Heater On 20degree of heat generation
| TID_05  |Temperature request	   | Temp=25  |  Heater On 25degree of heat generation |   
| TID_06  |  Temperature request | Temp=29  | Heater On 29degree of heat generation  |   
|  TID_07 | Temperature request	  |Temp=33   | Heater On 33degree of heat generation  |
| TID_09 | LED ON	Button=1 && Heater=1  | LED ON  | Voltmeter Will show 5V  |   
| TID_10  |LED ON	Button=0 && Heater=0   | LED Off  |Voltmeter Will show 0V   |   
