void lidMotor(boolean play){
  int lidClosed = 90;  //tell the arduino where open and closed is
  int lidOpen = 170;

  if(play == HIGH){   //opens of closes the lid based on the given value of play
    lidServo.write(lidOpen);
  }
  else{
    lidServo.write(lidClosed);
  };
};
