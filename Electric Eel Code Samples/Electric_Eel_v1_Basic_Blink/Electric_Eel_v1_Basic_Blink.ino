/*
The current commercial prototypes of the electric eel use a 

Lilypad USB


There are 4 laser-cut concentric pads which are connected to
the 4 PWM ports on the lilypad. From base of shaft to the tip they are


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
 
 
  This example code is in the public domain.
   {♥} COMINGLE
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;
float speedtopulse= 10;
float sensorValue = 0;
int sensorPin = A1;
// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
for(int j=0; j<14;j++){
  pinMode(j, OUTPUT);

}  
  Serial.begin(9600);
  
}

// the loop routine runs over and over again forever:
void loop() {
  sensorValue = analogRead(sensorPin);
  speedtopulse = ((sensorValue/200)*100);
Serial.println(speedtopulse);
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(speedtopulse);               // wait for a second
  digitalWrite(led, LOW);    // taurn the LED off by making the voltage LOW
  delay(speedtopulse);               // wait for a second
  
  
    digitalWrite(led-1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(speedtopulse);               // wait for a second
  digitalWrite(led-1, LOW);    // turn the LED off by making the voltage LOW
  delay(speedtopulse);               // wait for a second
  
led++;
  if(led >13){led=0;}

}
