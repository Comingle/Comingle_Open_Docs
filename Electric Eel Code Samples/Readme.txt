The current commercial prototypes of the electric eel use a 

Lilypad USB


There are 4 laser-cut concentric pads which are connected to the 4 PWM ports on the lilypad. From base of shaft to the tip they are


BASE
3
9
10
11
Tip End


to make current pass through a particular spot, add an arduino command like

digitalWrite(11,HIGH); 

this will make the electrode on the tip start up

to turn it off you can just do

digitalWrite(11,LOW);

