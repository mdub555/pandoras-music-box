void motors(boolean play){
  steppers.setSpeed(800); //sets the speed of the steppers. Should be <=700 based on https://arduino-info.wikispaces.com/SmallSteppers
  steppers.step(play);    //steps the motor if play is HIGH. only does one step per program cycle, so it cycles through the
                          //other programs, expecially to check for another button press
};
