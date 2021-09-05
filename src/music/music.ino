/**
 * Play Songs
 * 
 * @author akafael
 * @ref https://github.com/akafael/arduino-music
 */

#include "musics.h"

const int buzzer_pin = 8;

//const int tempo = ASA_BRANCA_TEMPO;
//const int melody[] = ASA_BRANCA_MELODY;
const int tempo = PULO_DA_GAITA_TEMPO;
const int melody[] = PULO_DA_GAITA_MELODY;

// this calculates the duration of a whole note in ms
const int noteTempo = (60000 * 4) / tempo;

int noteIndex = 0;

void setup() {
  // do nothing
}

void loop() {
  playMusic( noteIndex, melody, noteTempo, buzzer_pin );
}
