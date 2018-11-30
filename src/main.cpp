#include <Arduino.h>

// Pedro Pelaez - PSF_ - <aaaaa976@gmail.com>
// 2018.11.18

// Credit:
// Midi to Arduino Converter
//     - Andy Tran (extramaster), 2015
// https://www.extramaster.net/tools/midiToArduino/
//
// Process:
// Midi -> Midi tracks -> Note mappings -> Frequency
//
// CC0

// Set this to be the pin that your buzzer resides in.
// (Note that you can only have one buzzer actively using the PWM signal at a time).
int tonePin = 11;

// 74hc595 Luces
const int latchPin = 2;  // Pin conectado al Pin 12 del 74HC595 (Latch)
const int dataPin  = 3;  // Pin conectado al Pin 14 del 74HC595 (Data)
const int clockPin = 6; // Pin conectado al Pin 11 del 74HC595 (Clock)

void setup() {
  randomSeed(analogRead(0));
  // 74hc595
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
}

void lucesUpdate() {
    byte luces1;
    byte luces2;
    for (int i=0; i < 8; i++) {
        if (random(0,100) < 30) bitSet(luces1, i); else bitClear(luces1, i);
    }
    for (int i=0; i < 8; i++) {
        if (random(0,100) < 30) bitSet(luces2, i); else bitClear(luces2, i);
    }
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, LSBFIRST, luces1);
    shiftOut(dataPin, clockPin, LSBFIRST, luces2);
    digitalWrite(latchPin, HIGH);
}

void lucesStop() {
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, LSBFIRST, 0);
    shiftOut(dataPin, clockPin, LSBFIRST, 0);
    digitalWrite(latchPin, HIGH);
}

void pdelay(float ms) {
    lucesUpdate();
    delay(ms);
}

void jingle_bells() {

    tone(tonePin, 293, 225.0);
    pdelay(250.0);
    tone(tonePin, 493, 225.0);
    pdelay(250.0);
    tone(tonePin, 440, 225.0);
    pdelay(250.0);
    tone(tonePin, 391, 225.0);
    pdelay(250.0);
    tone(tonePin, 293, 450.0);
    pdelay(500.0);
    pdelay(250.0);
    tone(tonePin, 293, 225.0);
    pdelay(250.0);
    tone(tonePin, 293, 225.0);
    pdelay(250.0);
    tone(tonePin, 493, 225.0);
    pdelay(250.0);
    tone(tonePin, 440, 225.0);
    pdelay(250.0);
    tone(tonePin, 391, 225.0);
    pdelay(250.0);
    tone(tonePin, 329, 450.0);
    pdelay(500.0);
    pdelay(250.0);
    tone(tonePin, 329, 225.0);
    pdelay(250.0);
    tone(tonePin, 329, 225.0);
    pdelay(250.0);
    tone(tonePin, 523, 225.0);
    pdelay(250.0);
    tone(tonePin, 493, 225.0);
    pdelay(250.0);
    tone(tonePin, 440, 225.0);
    pdelay(250.0);
    tone(tonePin, 587, 450.0);
    pdelay(500.0);
    pdelay(250.0);
    tone(tonePin, 587, 225.0);
    pdelay(250.0);
    tone(tonePin, 659, 225.0);
    pdelay(250.0);
    tone(tonePin, 587, 225.0);
    pdelay(250.0);
    tone(tonePin, 523, 225.0);
    pdelay(250.0);
    tone(tonePin, 440, 225.0);
    pdelay(250.0);
    tone(tonePin, 493, 675.0);
    pdelay(750.0);
    tone(tonePin, 293, 225.0);
    pdelay(250.0);
    tone(tonePin, 293, 225.0);
    pdelay(250.0);
    tone(tonePin, 493, 225.0);
    pdelay(250.0);
    tone(tonePin, 440, 225.0);
    pdelay(250.0);
    tone(tonePin, 391, 225.0);
    pdelay(250.0);
    tone(tonePin, 293, 450.0);
    pdelay(500.0);
    pdelay(250.0);
    tone(tonePin, 293, 225.0);
    pdelay(250.0);
    tone(tonePin, 293, 225.0);
    pdelay(250.0);
    tone(tonePin, 493, 225.0);
    pdelay(250.0);
    tone(tonePin, 440, 225.0);
    pdelay(250.0);
    tone(tonePin, 391, 225.0);
    pdelay(250.0);
    tone(tonePin, 329, 450.0);
    pdelay(500.0);
    pdelay(250.0);
    tone(tonePin, 329, 225.0);
    pdelay(250.0);
    tone(tonePin, 329, 225.0);
    pdelay(250.0);
    tone(tonePin, 523, 225.0);
    pdelay(250.0);
    tone(tonePin, 493, 225.0);
    pdelay(250.0);
    tone(tonePin, 440, 225.0);
    pdelay(250.0);
    tone(tonePin, 587, 225.0);
    pdelay(250.0);
    tone(tonePin, 587, 225.0);
    pdelay(250.0);
    tone(tonePin, 587, 225.0);
    pdelay(250.0);
    tone(tonePin, 587, 225.0);
    pdelay(250.0);
    tone(tonePin, 659, 225.0);
    pdelay(250.0);
    tone(tonePin, 587, 225.0);
    pdelay(250.0);
    tone(tonePin, 523, 225.0);
    pdelay(250.0);
    tone(tonePin, 440, 225.0);
    pdelay(250.0);
    tone(tonePin, 391, 450.0);
    pdelay(500.0);
    tone(tonePin, 587, 450.0);
    pdelay(500.0);
    tone(tonePin, 493, 225.0);
    pdelay(250.0);
    tone(tonePin, 493, 225.0);
    pdelay(250.0);
    tone(tonePin, 493, 450.0);
    pdelay(500.0);
    tone(tonePin, 493, 225.0);
    pdelay(250.0);
    tone(tonePin, 493, 225.0);
    pdelay(250.0);
    tone(tonePin, 493, 450.0);
    pdelay(500.0);
    tone(tonePin, 493, 225.0);
    pdelay(250.0);
    tone(tonePin, 587, 225.0);
    pdelay(250.0);
    tone(tonePin, 391, 337.5);
    pdelay(375.0);
    tone(tonePin, 440, 112.5);
    pdelay(125.0);
    tone(tonePin, 493, 450.0);
    pdelay(500.0);
    pdelay(500.0);
    tone(tonePin, 523, 225.0);
    pdelay(250.0);
    tone(tonePin, 523, 225.0);
    pdelay(250.0);
    tone(tonePin, 523, 337.5);
    pdelay(375.0);
    tone(tonePin, 523, 112.5);
    pdelay(125.0);
    tone(tonePin, 523, 225.0);
    pdelay(250.0);
    tone(tonePin, 493, 225.0);
    pdelay(250.0);
    tone(tonePin, 493, 225.0);
    pdelay(250.0);
    tone(tonePin, 493, 112.5);
    pdelay(125.0);
    tone(tonePin, 493, 112.5);
    pdelay(125.0);
    tone(tonePin, 493, 225.0);
    pdelay(250.0);
    tone(tonePin, 440, 225.0);
    pdelay(250.0);
    tone(tonePin, 440, 225.0);
    pdelay(250.0);
    tone(tonePin, 493, 225.0);
    pdelay(250.0);
    tone(tonePin, 440, 450.0);
    pdelay(500.0);
    tone(tonePin, 587, 450.0);
    pdelay(500.0);
    tone(tonePin, 493, 225.0);
    pdelay(250.0);
    tone(tonePin, 493, 225.0);
    pdelay(250.0);
    tone(tonePin, 493, 450.0);
    pdelay(500.0);
    tone(tonePin, 493, 225.0);
    pdelay(250.0);
    tone(tonePin, 493, 225.0);
    pdelay(250.0);
    tone(tonePin, 493, 450.0);
    pdelay(500.0);
    tone(tonePin, 493, 225.0);
    pdelay(250.0);
    tone(tonePin, 587, 225.0);
    pdelay(250.0);
    tone(tonePin, 391, 337.5);
    pdelay(375.0);
    tone(tonePin, 440, 112.5);
    pdelay(125.0);
    tone(tonePin, 493, 450.0);
    pdelay(500.0);
    pdelay(500.0);
    tone(tonePin, 523, 225.0);
    pdelay(250.0);
    tone(tonePin, 523, 225.0);
    pdelay(250.0);
    tone(tonePin, 523, 337.5);
    pdelay(375.0);
    tone(tonePin, 523, 112.5);
    pdelay(125.0);
    tone(tonePin, 523, 225.0);
    pdelay(250.0);
    tone(tonePin, 493, 225.0);
    pdelay(250.0);
    tone(tonePin, 493, 225.0);
    pdelay(250.0);
    tone(tonePin, 493, 112.5);
    pdelay(125.0);
    tone(tonePin, 493, 112.5);
    pdelay(125.0);
    tone(tonePin, 587, 225.0);
    pdelay(250.0);
    tone(tonePin, 587, 225.0);
    pdelay(250.0);
    tone(tonePin, 523, 225.0);
    pdelay(250.0);
    tone(tonePin, 440, 225.0);
    pdelay(250.0);
    tone(tonePin, 391, 675.0);
    pdelay(750.0);

}

void silent_night_pnt() {

    tone(tonePin, 587, 675.0);
    pdelay(750.0);
    tone(tonePin, 659, 225.0);
    pdelay(250.0);
    tone(tonePin, 587, 450.0);
    pdelay(500.0);
    tone(tonePin, 493, 1350.0);
    pdelay(1500.0);
    tone(tonePin, 587, 675.0);
    pdelay(750.0);
    tone(tonePin, 659, 225.0);
    pdelay(250.0);
    tone(tonePin, 587, 450.0);
    pdelay(500.0);
    tone(tonePin, 493, 1350.0);
    pdelay(1500.0);
    tone(tonePin, 880, 900.0);
    pdelay(1000.0);
    tone(tonePin, 880, 450.0);
    pdelay(500.0);
    tone(tonePin, 739, 1350.0);
    pdelay(1500.0);
    tone(tonePin, 783, 900.0);
    pdelay(1000.0);
    tone(tonePin, 783, 450.0);
    pdelay(500.0);
    tone(tonePin, 587, 1350.0);
    pdelay(1500.0);
    tone(tonePin, 659, 900.0);
    pdelay(1000.0);
    tone(tonePin, 659, 450.0);
    pdelay(500.0);
    tone(tonePin, 783, 675.0);
    pdelay(750.0);
    tone(tonePin, 739, 225.0);
    pdelay(250.0);
    tone(tonePin, 659, 450.0);
    pdelay(500.0);
    tone(tonePin, 587, 675.0);
    pdelay(750.0);
    tone(tonePin, 659, 225.0);
    pdelay(250.0);
    tone(tonePin, 587, 450.0);
    pdelay(500.0);
    tone(tonePin, 493, 1350.0);
    pdelay(1500.0);
    tone(tonePin, 659, 900.0);
    pdelay(1000.0);
    tone(tonePin, 659, 450.0);
    pdelay(500.0);
    tone(tonePin, 783, 675.0);
    pdelay(750.0);
    tone(tonePin, 739, 225.0);
    pdelay(250.0);
    tone(tonePin, 659, 450.0);
    pdelay(500.0);
    tone(tonePin, 587, 675.0);
    pdelay(750.0);
    tone(tonePin, 659, 225.0);
    pdelay(250.0);
    tone(tonePin, 587, 450.0);
    pdelay(500.0);
    tone(tonePin, 493, 1350.0);
    pdelay(1500.0);
    tone(tonePin, 880, 900.0);
    pdelay(1000.0);
    tone(tonePin, 880, 450.0);
    pdelay(500.0);
    tone(tonePin, 1046, 675.0);
    pdelay(750.0);
    tone(tonePin, 880, 225.0);
    pdelay(250.0);
    tone(tonePin, 739, 450.0);
    pdelay(500.0);
    tone(tonePin, 783, 1350.0);
    pdelay(1500.0);
    tone(tonePin, 987, 1350.0);
    pdelay(1500.0);
    tone(tonePin, 783, 450.0);
    pdelay(500.0);
    tone(tonePin, 587, 450.0);
    pdelay(500.0);
    tone(tonePin, 493, 450.0);
    pdelay(500.0);
    tone(tonePin, 587, 675.0);
    pdelay(750.0);
    tone(tonePin, 523, 225.0);
    pdelay(250.0);
    tone(tonePin, 440, 450.0);
    pdelay(500.0);
    tone(tonePin, 391, 2700.0);
    pdelay(3000.0);

}

void we_wish_you_a_merry_christmas() {

    tone(tonePin, 261, 415.8);
    pdelay(462.0);
    pdelay(50.0);
    tone(tonePin, 349, 415.8);
    pdelay(462.0);
    pdelay(50.0);
    tone(tonePin, 349, 208.8);
    pdelay(232.0);
    pdelay(24.0);
    tone(tonePin, 391, 208.8);
    pdelay(232.0);
    pdelay(24.0);
    tone(tonePin, 349, 208.8);
    pdelay(232.0);
    pdelay(24.0);
    tone(tonePin, 220, 140.4);
    pdelay(156.0);
    tone(tonePin, 329, 68.4);
    pdelay(76.0);
    pdelay(24.0);
    tone(tonePin, 293, 415.8);
    pdelay(462.0);
    pdelay(50.0);
    tone(tonePin, 293, 415.8);
    pdelay(462.0);
    pdelay(50.0);
    tone(tonePin, 174, 370.8);
    pdelay(412.0);
    tone(tonePin, 293, 45.0);
    pdelay(50.0);
    pdelay(50.0);
    tone(tonePin, 391, 415.8);
    pdelay(462.0);
    pdelay(50.0);
    tone(tonePin, 391, 208.8);
    pdelay(232.0);
    pdelay(24.0);
    tone(tonePin, 440, 208.8);
    pdelay(232.0);
    pdelay(24.0);
    tone(tonePin, 391, 208.8);
    pdelay(232.0);
    pdelay(24.0);
    tone(tonePin, 195, 140.4);
    pdelay(156.0);
    tone(tonePin, 349, 68.4);
    pdelay(76.0);
    pdelay(24.0);
    tone(tonePin, 329, 415.8);
    pdelay(462.0);
    pdelay(50.0);
    tone(tonePin, 329, 415.8);
    pdelay(462.0);
    pdelay(50.0);
    tone(tonePin, 261, 370.8);
    pdelay(412.0);
    tone(tonePin, 329, 45.0);
    pdelay(50.0);
    pdelay(50.0);
    tone(tonePin, 440, 415.8);
    pdelay(462.0);
    pdelay(50.0);
    tone(tonePin, 440, 208.8);
    pdelay(232.0);
    pdelay(24.0);
    tone(tonePin, 466, 208.8);
    pdelay(232.0);
    pdelay(24.0);
    tone(tonePin, 440, 208.8);
    pdelay(232.0);
    pdelay(24.0);
    tone(tonePin, 277, 140.4);
    pdelay(156.0);
    tone(tonePin, 391, 68.4);
    pdelay(76.0);
    pdelay(24.0);
    tone(tonePin, 349, 415.8);
    pdelay(462.0);
    pdelay(50.0);
    tone(tonePin, 293, 415.8);
    pdelay(462.0);
    pdelay(50.0);
    tone(tonePin, 261, 208.8);
    pdelay(232.0);
    pdelay(24.0);
    tone(tonePin, 261, 208.8);
    pdelay(232.0);
    pdelay(24.0);
    tone(tonePin, 293, 415.8);
    pdelay(462.0);
    pdelay(50.0);
    tone(tonePin, 233, 370.8);
    pdelay(412.0);
    tone(tonePin, 391, 45.0);
    pdelay(50.0);
    pdelay(50.0);
    tone(tonePin, 329, 415.8);
    pdelay(462.0);
    pdelay(50.0);
    tone(tonePin, 349, 831.6);
    pdelay(924.0);
    pdelay(100.0);
    tone(tonePin, 261, 415.8);
    pdelay(462.0);
    pdelay(50.0);
    tone(tonePin, 349, 415.8);
    pdelay(462.0);
    pdelay(50.0);
    tone(tonePin, 349, 415.8);
    pdelay(462.0);
    pdelay(50.0);
    tone(tonePin, 174, 370.8);
    pdelay(412.0);
    tone(tonePin, 349, 45.0);
    pdelay(50.0);
    pdelay(50.0);
    tone(tonePin, 329, 831.6);
    pdelay(924.0);
    pdelay(100.0);
    tone(tonePin, 233, 370.8);
    pdelay(412.0);
    tone(tonePin, 329, 45.0);
    pdelay(50.0);
    pdelay(50.0);
    tone(tonePin, 349, 415.8);
    pdelay(462.0);
    pdelay(50.0);
    tone(tonePin, 329, 415.8);
    pdelay(462.0);
    pdelay(50.0);
    tone(tonePin, 195, 370.8);
    pdelay(412.0);
    tone(tonePin, 293, 45.0);
    pdelay(50.0);
    pdelay(50.0);
    tone(tonePin, 261, 831.6);
    pdelay(924.0);
    pdelay(100.0);
    tone(tonePin, 391, 415.8);
    pdelay(462.0);
    pdelay(50.0);
    tone(tonePin, 440, 415.8);
    pdelay(462.0);
    pdelay(50.0);
    tone(tonePin, 391, 208.8);
    pdelay(232.0);
    pdelay(24.0);
    tone(tonePin, 391, 208.8);
    pdelay(232.0);
    pdelay(24.0);
    tone(tonePin, 349, 208.8);
    pdelay(232.0);
    pdelay(24.0);
    tone(tonePin, 220, 140.4);
    pdelay(156.0);
    tone(tonePin, 349, 68.4);
    pdelay(76.0);
    pdelay(24.0);
    tone(tonePin, 523, 415.8);
    pdelay(462.0);
    pdelay(50.0);
    tone(tonePin, 261, 415.8);
    pdelay(462.0);
    pdelay(50.0);
    tone(tonePin, 261, 208.8);
    pdelay(232.0);
    pdelay(24.0);
    tone(tonePin, 174, 140.4);
    pdelay(156.0);
    tone(tonePin, 261, 68.4);
    pdelay(76.0);
    pdelay(24.0);
    tone(tonePin, 293, 415.8);
    pdelay(462.0);
    pdelay(50.0);
    tone(tonePin, 195, 370.8);
    pdelay(412.0);
    tone(tonePin, 391, 45.0);
    pdelay(50.0);
    pdelay(50.0);
    tone(tonePin, 329, 415.8);
    pdelay(462.0);
    pdelay(50.0);
    tone(tonePin, 349, 831.6);
    pdelay(924.0);

}

void loop() {
    jingle_bells();
    lucesStop();
    delay(2000);
    silent_night_pnt();
    lucesStop();
    delay(2000);
    we_wish_you_a_merry_christmas();
    lucesStop();
    delay(2000);
}

