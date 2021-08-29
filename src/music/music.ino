/**
 * Play Songs
 * 
 * @author akafael
 * @ref https://github.com/akafael/arduino-music
 */

#define TONE_USE_INT
#define TONE_PITCH 440
#include <Pitch.h> // Required for tone()

#include "musics.h"

const int buzzer_pin = 8;

//const int tempo = ASA_BRANCA_TEMPO;
//const int melody[] = ASA_BRANCA_MELODY;
const int tempo = PULO_DA_GAITA_TEMPO;
const int melody[] = PULO_DA_GAITA_MELODY;

// sizeof gives the number of bytes, each int value is composed of two bytes (16 bits)
// there are two values per note (pitch and duration), so for each note there are four bytes
const int notes = sizeof(melody) / sizeof(melody[0]) / 2;

// this calculates the duration of a whole note in ms
const int noteTempo = (60000 * 4) / tempo;

int thisNote = 0;

void setup() {
  // do nothing
}

void loop() {
  playMusic( melody, noteTempo );
}

/**
 * Play Music Score
 * @author 
 */
void playMusic( const int *melodySong, const int wholenote )
{
  // iterate over the notes of the melody.
  // Remember, the array is twice the number of notes (notes + durations)
  thisNote = (thisNote < notes * 2)? thisNote + 2 : 0;

  // calculates the duration of each note
  const int divider = melody[thisNote + 1];

  int noteDuration = (wholenote) / divider;

  if (divider < 0) {
    // dotted notes are represented with negative durations!!
    noteDuration *= -1.5; // increases the duration in half for dotted notes
  }

  // we only play the note for 90% of the duration, leaving 10% as a pause
  tone(buzzer_pin, melodySong[thisNote], noteDuration * 0.9);

  // Wait for the specief duration before playing the next note.
  delay(noteDuration);

  // stop the waveform generation before the next note.
  noTone(buzzer_pin);
}
