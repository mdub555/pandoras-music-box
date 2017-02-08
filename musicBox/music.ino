void music(){//plays notes based on the binary input from the IR detectors
  int note[] = {
    digitalRead(sensorPin1), digitalRead(sensorPin2), digitalRead(sensorPin3), digitalRead(sensorPin4)
  };
  if(note[0] == 0 && note[1] == 0 && note[2] == 0 && note[3] == 1){
    tone(speakerPin, NOTE_F3);
  }else if(note[0] == 0 && note[1] == 0 && note[2] == 1 && note[3] == 1){
    tone(speakerPin, NOTE_G3);
  }else if(note[0] == 0 && note[1] == 0 && note[2] == 1 && note[3] == 0){
    tone(speakerPin, NOTE_A3);
  }else if(note[0] == 0 && note[1] == 1 && note[2] == 1 && note[3] == 0){
    tone(speakerPin, NOTE_B3);
  }else if(note[0] == 0 && note[1] == 1 && note[2] == 1 && note[3] == 1){
    tone(speakerPin, NOTE_C4);
  }else if(note[0] == 0 && note[1] == 1 && note[2] == 0 && note[3] == 1){
    tone(speakerPin, NOTE_D4);
  }else if(note[0] == 0 && note[1] == 1 && note[2] == 0 && note[3] == 0){
    tone(speakerPin, NOTE_E4);
  }else if(note[0] == 1 && note[1] == 1 && note[2] == 0 && note[3] == 0){
    tone(speakerPin, NOTE_F4);
  }else if(note[0] == 1 && note[1] == 1 && note[2] == 0 && note[3] == 1){
    tone(speakerPin, NOTE_G4);
  }else if(note[0] == 1 && note[1] == 1 && note[2] == 1 && note[3] == 1){
    tone(speakerPin, NOTE_A4);
  }else if(note[0] == 1 && note[1] == 1 && note[2] == 1 && note[3] == 0){
    tone(speakerPin, NOTE_B4);
  }else if(note[0] == 1 && note[1] == 0 && note[2] == 1 && note[3] == 0){
    tone(speakerPin, NOTE_C5);
  }else if(note[0] == 1 && note[1] == 0 && note[2] == 1 && note[3] == 1){
    tone(speakerPin, NOTE_D5);
  }else if(note[0] == 1 && note[1] == 0 && note[2] == 0 && note[3] == 1){
    tone(speakerPin, NOTE_E5);
  }else if(note[0] == 1 && note[1] == 0 && note[2] == 0 && note[3] == 0){
    tone(speakerPin, NOTE_F5);
  }else{
    noTone(speakerPin);
  };
}
