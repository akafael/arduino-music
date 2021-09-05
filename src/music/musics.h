/**
 * Arduino Songs Collection from @robsoncouto 
 * 
 * @author akafael
 * @ref https://github.com/akafael/arduino-music
 */

#define TONE_USE_INT
#define TONE_PITCH 440
#include <Pitch.h> // Required for NOTE_XX 

#define REST 0

// notes of the melody followed by the duration.
// a 4 means a quarter note, 8 an eighteenth , 16 sixteenth, so on
// !!negative numbers are used to represent dotted notes,
// so -4 means a dotted quarter note, that is, a quarter plus an eighteenth!!

/**
 * Pulo da gaita - Auto da Compadecida 
 *  - Score available at https://musescore.com/user/196039/scores/250206
 *  - Arduino version at https://github.com/robsoncouto/arduino-songs/blob/master/pulodagaita/pulodagaita.ino
 */
#define PULO_DA_GAITA_MELODY { \
  NOTE_C5,4, NOTE_G4,8, NOTE_AS4,4, NOTE_A4,8,\
  NOTE_G4,16, NOTE_C4,8, NOTE_C4,16, NOTE_G4,16, NOTE_G4,8, NOTE_G4,16,\
  NOTE_C5,4, NOTE_G4,8, NOTE_AS4,4, NOTE_A4,8,\
  NOTE_G4,2,\
\
  NOTE_C5,4, NOTE_G4,8, NOTE_AS4,4, NOTE_A4,8,\
  NOTE_G4,16, NOTE_C4,8, NOTE_C4,16, NOTE_G4,16, NOTE_G4,8, NOTE_G4,16,\
  NOTE_F4,8, NOTE_E4,8, NOTE_D4,8, NOTE_C4,8,\
  NOTE_C4,2,\
\
  NOTE_C5,4, NOTE_G4,8, NOTE_AS4,4, NOTE_A4,8,\
  NOTE_G4,16, NOTE_C4,8, NOTE_C4,16, NOTE_G4,16, NOTE_G4,8, NOTE_G4,16,\
  NOTE_C5,4, NOTE_G4,8, NOTE_AS4,4, NOTE_A4,8,\
  NOTE_G4,2,\
\
  NOTE_C5,4, NOTE_G4,8, NOTE_AS4,4, NOTE_A4,8,\
  NOTE_G4,16, NOTE_C4,8, NOTE_C4,16, NOTE_G4,16, NOTE_G4,8, NOTE_G4,16,\
  NOTE_F4,8, NOTE_E4,8, NOTE_D4,8, NOTE_C4,8,\
  NOTE_C4,16, NOTE_D5,8, NOTE_D5,16, NOTE_D5,16, NOTE_D5,8, NOTE_D5,16,\
\
  NOTE_D5,16, NOTE_D5,8, NOTE_D5,16, NOTE_C5,8, NOTE_E5,-8,\
  NOTE_C5,8, NOTE_C5,16, NOTE_E5,16, NOTE_E5,8, NOTE_C5,16,\
  NOTE_F5,8, NOTE_D5,8, NOTE_D5,8, NOTE_E5,-8,\
  NOTE_C5,8, NOTE_D5,16, NOTE_E5,16, NOTE_D5,8, NOTE_C5,16,\
\
  NOTE_F5,8, NOTE_F5,8, NOTE_A5,8, NOTE_G5,-8,\
  NOTE_G5,8, NOTE_C5,16, NOTE_C5,16, NOTE_C5,8, NOTE_C5,16,\
  NOTE_F5,-8, NOTE_E5,16, NOTE_D5,8, NOTE_C5,4,\
  NOTE_C5,16, NOTE_C5,16, NOTE_C5,16, NOTE_C5,16,\
\
  NOTE_F5,8, NOTE_F5,16, NOTE_A5,8, NOTE_G5,-8,\
  NOTE_G5,8, NOTE_C5,16, NOTE_C5,16, NOTE_C5,8, NOTE_C5,16,\
  NOTE_F5,16, NOTE_E5,8, NOTE_D5,16, NOTE_C5,8, NOTE_E5,-8,\
  NOTE_C5,8, NOTE_D5,16, NOTE_E5,16, NOTE_D5,8, NOTE_C5,16,\
\
  NOTE_F5,8, NOTE_F5,16, NOTE_A5,8, NOTE_G5,-8,\
  NOTE_G5,8, NOTE_C5,16, NOTE_C5,16, NOTE_C5,8, NOTE_C5,16,\
  NOTE_F5,8, NOTE_E5,16, NOTE_D5,8, NOTE_C5,8,\
  NOTE_C5,4, NOTE_G4,8, NOTE_AS4,4, NOTE_A4,8,\
\
  NOTE_G4,16, NOTE_C4,8, NOTE_C4,16, NOTE_G4,16, NOTE_G4,8, NOTE_G4,16,\
  NOTE_C5,4, NOTE_G4,8, NOTE_AS4,4, NOTE_A4,8,\
  NOTE_G4,2,\
  NOTE_C5,4, NOTE_G4,8, NOTE_AS4,4, NOTE_A4,8,\
\
  NOTE_G4,16, NOTE_C4,8, NOTE_C4,16, NOTE_G4,16, NOTE_G4,8, NOTE_G4,16,\
  NOTE_F4,8, NOTE_E4,8, NOTE_D4,8, NOTE_C4,-2,\
  NOTE_C5,4, NOTE_G4,8, NOTE_AS4,4, NOTE_A4,8,\
\
  NOTE_G4,16, NOTE_C4,8, NOTE_C4,16, NOTE_G4,16, NOTE_G4,8, NOTE_G4,16,\
  NOTE_C5,4, NOTE_G4,8, NOTE_AS4,4, NOTE_A4,8,\
  NOTE_G4,2,\
  NOTE_C5,4, NOTE_G4,8, NOTE_AS4,4, NOTE_A4,8,\
\
  NOTE_G4,16, NOTE_C4,8, NOTE_C4,16, NOTE_G4,16, NOTE_G4,8, NOTE_G4,16,\
  NOTE_F4,8, NOTE_E4,8, NOTE_D4,8, NOTE_C4,-2,\
  NOTE_C4,16, NOTE_C4,8, NOTE_C4,16, NOTE_E4,16, NOTE_E4,8, NOTE_E4,16,\
  NOTE_F4,16, NOTE_F4,8, NOTE_F4,16, NOTE_FS4,16, NOTE_FS4,8, NOTE_FS4,16,\
\
  NOTE_G4,8, REST,8, NOTE_AS4,8, NOTE_C5,1,\
}
#define PULO_DA_GAITA_TEMPO 122

/**
 * Asa branca - Luiz Gonzaga
 * Score available at https://musescore.com/user/190926/scores/181370
 * Arduino Version available at https://github.com/robsoncouto/arduino-songs/blob/master/asabranca/asabranca.ino
 */
#define ASA_BRANCA_MELODY {\
  NOTE_G4,8, NOTE_A4,8, NOTE_B4,4, NOTE_D5,4, NOTE_D5,4, NOTE_B4,4,\
  NOTE_C5,4, NOTE_C5,2, NOTE_G4,8, NOTE_A4,8,\
  NOTE_B4,4, NOTE_D5,4, NOTE_D5,4, NOTE_C5,4,\
\
  NOTE_B4,2, REST,8, NOTE_G4,8, NOTE_G4,8, NOTE_A4,8,\
  NOTE_B4,4, NOTE_D5,4, REST,8, NOTE_D5,8, NOTE_C5,8, NOTE_B4,8,\
  NOTE_G4,4, NOTE_C5,4, REST,8, NOTE_C5,8, NOTE_B4,8, NOTE_A4,8,\
\
  NOTE_A4,4, NOTE_B4,4, REST,8, NOTE_B4,8, NOTE_A4,8, NOTE_G4,8,\
  NOTE_G4,2, REST,8, NOTE_G4,8, NOTE_G4,8, NOTE_A4,8,\
  NOTE_B4,4, NOTE_D5,4, REST,8, NOTE_D5,8, NOTE_C5,8, NOTE_B4,8,\
\
  NOTE_G4,4, NOTE_C5,4, REST,8, NOTE_C5,8, NOTE_B4,8, NOTE_A4,8,\
  NOTE_A4,4, NOTE_B4,4, REST,8, NOTE_B4,8, NOTE_A4,8, NOTE_G4,8,\
  NOTE_G4,4, NOTE_F5,8, NOTE_D5,8, NOTE_E5,8, NOTE_C5,8, NOTE_D5,8, NOTE_B4,8,\
\
  NOTE_C5,8, NOTE_A4,8, NOTE_B4,8, NOTE_G4,8, NOTE_A4,8, NOTE_G4,8, NOTE_E4,8, NOTE_G4,8,\
  NOTE_G4,4, NOTE_F5,8, NOTE_D5,8, NOTE_E5,8, NOTE_C5,8, NOTE_D5,8, NOTE_B4,8,\
  NOTE_C5,8, NOTE_A4,8, NOTE_B4,8, NOTE_G4,8, NOTE_A4,8, NOTE_G4,8, NOTE_E4,8, NOTE_G4,8,\
  NOTE_G4,-2, REST,4\
}
#define ASA_BRANCA_TEMPO 120

/**
 * Play Music Score
 * @author 
 */
void playMusic( int currentNote, const int *melodySong, const int wholenote, int buzzer_pin )
{
  // sizeof gives the number of bytes, each int value is composed of two bytes (16 bits)
  // there are two values per note (pitch and duration), so for each note there are four bytes
  const int notes = sizeof(melodySong) / sizeof(melodySong[0]) / 2;
  
  // iterate over the notes of the melody.
  // Remember, the array is twice the number of notes (notes + durations)
  int thisNote = (currentNote < notes * 2)? currentNote + 2 : 0;

  // calculates the duration of each note
  const int divider = melodySong[thisNote + 1];

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
