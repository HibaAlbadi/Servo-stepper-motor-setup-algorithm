#include<Servo.h>
                                                                                                                                                                                                                                                    
Servo esc; 

void setup()

{

esc.attach(8); // pin 8 Arduino

esc.writeMicroseconds(1000); // signal to 1000

Serial.begin(9600);

}

void loop()

{

int val; 

val= analogRead(A0); // Pin A0 Arduino

val= map(val, 0, 1023,1000,2000); 

esc.writeMicroseconds(val); 
