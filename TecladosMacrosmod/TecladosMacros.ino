#include <Keyboard.h>
void setup() {

  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);

  Serial.begin(9600);
}

void loop() {

  Keyboard.begin();
  if (digitalRead(2) == 0){
    Keyboard.print("Insert text here");
    delay(200);
  }
  else if (digitalRead(3) == 0){
    Keyboard.print("Insert text here");
    delay(200);
  }
  if (digitalRead(4) == 0){
    Keyboard.print("Insert text here");
    delay(200);
  }
  else if (digitalRead(5) == 0){
    Keyboard.print("Insert text here");
    delay(200);
  }
  if (digitalRead(6) == 0){
    Keyboard.print("Insert text here");
    delay(200);
  }
  if (digitalRead(7) == 0){
    Keyboard.print("Insert text here");
    delay(200);
  }

  if (digitalRead(8) == 0) {
    Keyboard.print("Insert text here");
    delay(200);
  }

  if (digitalRead(9) == 0) {
    Keyboard.print("Insert text here");
    delay(200);
  }
  if (digitalRead(10) == 0){
    Keyboard.print("Insert text here");
    delay(200);
  }
  if (digitalRead(11) == 0){
    Keyboard.print("Insert text here");
    delay(200);
  }
  Keyboard.end();
}
