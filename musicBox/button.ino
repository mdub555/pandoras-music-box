//button press changes the value of ledVal, and turns on the LED built into pin 13 accordingly.
boolean button(){
  unsigned long currentMillis = millis();
  if(analogRead(buttonPin) > 900){
    previousMillis = currentMillis;
    ledVal = !ledVal;
    delay(250);
  };
  digitalWrite(ledPin, ledVal);
  if(ledVal == HIGH){
    if(currentMillis - previousMillis >= playTime){
      previousMillis = currentMillis;
      ledVal = LOW;
    };
  };
  return ledVal; //gives ledVal to the rest of the program to run while it is HIGH
};
