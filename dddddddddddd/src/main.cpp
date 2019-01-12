#include <Arduino.h>
#define RED A4
#define BLUE A0
#define GREEN A2
#define BUTTON_RED 2
#define BUTTON_GREEN 0
#define BUTTON_BLUE 4

int buttonState_RED = 0;         // current state of the button
int buttonState_GREEN = 0;         // current state of the button
int buttonState_BLUE = 0;         // current state of the button

int lastButtonState = 0;     // previous state of the button


void setup() {

  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(BUTTON_RED, INPUT);
  pinMode(BUTTON_GREEN, INPUT);
  pinMode(BUTTON_BLUE, INPUT);
  Serial.begin(9600);
}

void loop() {


buttonState_RED = digitalRead(BUTTON_RED);
buttonState_GREEN = digitalRead(BUTTON_GREEN);
buttonState_BLUE = digitalRead(BUTTON_BLUE);

if (buttonState_RED == HIGH) {
  digitalWrite(RED, HIGH);
  buttonState_RED++ ;
}

if (buttonState_GREEN == HIGH) {
  digitalWrite(GREEN, HIGH);
}

if (buttonState_BLUE == HIGH) {
  digitalWrite(BLUE, HIGH);
}
Serial.println(buttonState_RED);
delay(100);

digitalWrite(RED, LOW);
digitalWrite(GREEN, LOW);
digitalWrite(BLUE, LOW);
}
