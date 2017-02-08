boolean ledVal = LOW;    //ledVal initializes the entire system, everything runs while it is HIGH (boolean true)
const int buttonPin = A0;
const int ledPin = 13;
unsigned long previousMillis;
const unsigned long playTime = 30000;

#include <Servo.h>  //setup the lid servo motor
Servo lidServo;
const int lidPin = 6;

#include <Stepper.h>  //setup both the figurine motor and the music motor, they run at the same speed for simplicity
#define steps_per_motor_revolution 32           //our stepper has 32 steps per motor revolution but a 1/64 gear reduction
                                                //ratio to increase steps per output rotation
#define steps_per_output_revolution 32*64
Stepper steppers(steps_per_motor_revolution, 8, 10, 9, 11);

#include "pitches.h"
int sensorPin1 = A5;
int sensorPin2 = A4;
int sensorPin3 = A3;
int sensorPin4 = A2;
int speakerPin = 5;

void setup(){
  pinMode(buttonPin, INPUT); //system starts on button press
  pinMode(ledPin, OUTPUT);   //just there to show if ledVal it "true"
  lidServo.attach(lidPin);   //tell the Arduino what pin the servo is on, not needed for the steppers
  pinMode(sensorPin1, INPUT);
  pinMode(sensorPin2, INPUT);
  pinMode(sensorPin3, INPUT);
  pinMode(sensorPin4, INPUT);
};

/*
the program runs through the button system to continuously check for a button press, then tells the
lid servo to open or close based on the value of ledVal. ledVal also controlls whether the stepper motors
are running.
*/
void loop(){
  boolean start = button();  //declares start as the returned value of button() (either HIGH or LOW)
  lidMotor(start);       //all other functions run while start is HIGH and stops while start if LOW
  motors(start);
  if(start == HIGH){
    music();
  }else{
    noTone(speakerPin);
  };
};
