#include <Arduino.h>
#include "USB.h"
#include "USBHIDKeyboard.h"

USBHIDKeyboard Keyboard;

const int PIN_SLIDER_1  = RX;
const int PIN_SLIDER_2  = TX;

const int PIN_ENCODER_A = 1;
const int PIN_ENCODER_B = 2;

const int PIN_SWITCH_1  = 4;
const int PIN_SWITCH_2  = 5;
const int PIN_SWITCH_3  = 6;

const int TOUCH_PINS[7] = {13, 12, 11, 10, 9, 8, 7};

int currentBpm = 120;
int lastStateA;
int volume = 0;
int touchThreshold = 40000;

void setup() {
  Serial.begin(115200);
  delay(1000);

  Keyboard.begin();
  USB.begin();

  pinMode(PIN_ENCODER_A, INPUT_PULLUP);
  pinMode(PIN_ENCODER_B, INPUT_PULLUP);
  lastStateA = digitalRead(PIN_ENCODER_A);

  pinMode(PIN_SWITCH_1, INPUT_PULLUP);
  pinMode(PIN_SWITCH_2, INPUT_PULLUP);
  pinMode(PIN_SWITCH_3, INPUT_PULLUP);

  Serial.println("Hello World!");
}

void loop() {
  int currentStateA = digitalRead(PIN_ENCODER_A);
  if (currentStateA != lastStateA && currentStateA == LOW) {
    if (digitalRead(PIN_ENCODER_B) != currentStateA) {
      currentBpm++;
    } else {
      currentBpm--;
    }
    currentBpm = constrain(currentBpm, 40, 240);
    Serial.print("(BPM): ");
    Serial.println(currentBpm);
  }
  lastStateA = currentStateA;

  if (digitalRead(PIN_SWITCH_1) == LOW) {
    Keyboard.press(KEY_F1);
    delay(50);
    Keyboard.releaseAll();
    Serial.println("Switch 1 -> F1");
    delay(200);
  }
  
  if (digitalRead(PIN_SWITCH_2) == LOW) {
    Keyboard.press(KEY_F2);
    delay(50);
    Keyboard.releaseAll();
    Serial.println("Switch 2 -> F2");
    delay(200);
  }
  
  if (digitalRead(PIN_SWITCH_3) == LOW) {
    Keyboard.press(KEY_F3);
    delay(50);
    Keyboard.releaseAll();
    Serial.println("Switch -> F3");
    delay(200);
  }

  int slider1Val = analogRead(PIN_SLIDER_1);
  int mappedVolume = map(slider1Val, 0, 4095, 0, 127);
  
  if (abs(mappedVolume - volume) > 2) {
    volume = mappedVolume;
    Serial.print("Volume (Slider 1): ");
    Serial.println(volume);
  }

  for (int i = 0; i < 7; i++) {
    int touchValue = touchRead(TOUCH_PINS[i]);
    
    if (touchValue < touchThreshold) {
      Serial.println(i + 1);
      delay(150);
    }
  }

  delay(10);
}