// PURPOSE : MacOS open up "THuG Crew Logo" song and play at full volume
// AUTHOR  : 7ANG0N1N3 
// DATE    : MAY 08, 2023

#include "DigiKeyboard.h"

void setup() {
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
}

void hold(int hSec) {
  DigiKeyboard.delay(hSec);
}
void startrun() {
  for(int i = 0; i < 3; i++){
  // 1
  digitalWrite(0,HIGH);
  digitalWrite(1, HIGH);
  delay(50);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  delay(50);
  digitalWrite(0,HIGH);
  digitalWrite(1, HIGH);
  delay(50);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  delay(50);
  }
}

void stoprun() {
  for(int i = 0; i < 6; i++){
  // 1
  digitalWrite(0,HIGH);
  digitalWrite(1, HIGH);
  delay(100);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  delay(100);
  }
}
void loop() {
  startrun();
  digitalWrite(0,HIGH);
  digitalWrite(1, HIGH);
  DigiKeyboard.sendKeyStroke(0);
  hold(200);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_GUI_LEFT);
  hold(250);
  DigiKeyboard.print("Terminal.app");
  hold(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  hold(300);
  DigiKeyboard.print("screen -S THUGCREW_SESSION_ONE -dm bash -c 'sleep 10 && open -a /Applications/Safari.app  --url https://www.youtube.com/embed/8FBHsRX2Z6g?autoplay=1 -F' && osascript -e 'set volume output volume 50 without output muted'");
  hold(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  hold(200);
  DigiKeyboard.sendKeyStroke(KEY_Q, MOD_GUI_LEFT);
  hold(200);
  stoprun();
 for (;;) {
 /*empty*/
}
}