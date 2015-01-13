// Ultrasonic - Library for HR-SC04 Ultrasonic Ranging Module.
// Rev.4 (06/2012)
// J.Rodrigo ( http://www.jra.so )
// more info at http://www.ardublog.com
// Wiki: https://github.com/elrodri/Ultrasonic-HC-SR04/wiki/Plug-&-Play

#include <Ultrasonic.h>
#include <VarSpeedServo.h> 

Ultrasonic ultrasonic(12, 11); // (Trig PIN,Echo PIN)
VarSpeedServo myservo;    // create servo object to control a servo 

const int servoPin = 9;  // the digital pin used for the servo

int val;                 // variable to read the value from the analog pin


void setup() {
  Serial.begin(115200);
  
  myservo.attach(servoPin);  // attaches the servo on pin 9 to the servo object 
  
}

void loop()
{
  val = ultrasonic.Ranging(CM);
  Serial.print(val); // CM or INC
  Serial.println(" cm" );
  
  delay(100);
}
