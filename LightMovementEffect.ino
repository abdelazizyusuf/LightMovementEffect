
// These constants won't change. They're used to give names to the pins used:
const int lowestPin = 2;
const int highestPin = 13;
const int delayTime = 50;


void setup() {
  // set pins 2 through 13 as outputs:
  for (int thisPin = lowestPin; thisPin <= highestPin; thisPin++) {
    pinMode(thisPin, OUTPUT);
  }
}

void loop() {
  // iterate over the pins:
  for (int thisPin = lowestPin; thisPin <= highestPin; thisPin++) {
    

      digitalWrite(thisPin, HIGH);
      delay(delayTime);
      digitalWrite(thisPin, LOW);
      delay(delayTime);
    
  
  }

  for (int thisPin = highestPin; lowestPin <= thisPin; thisPin--) {
    
      digitalWrite(thisPin, HIGH);
      delay(delayTime);
      digitalWrite(thisPin, LOW);
      delay(delayTime);
    
  
  }
  
}
