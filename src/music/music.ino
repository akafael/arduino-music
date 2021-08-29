/**
 * 
 * 
 * @author akafael
 * @ref https://github.com/akafael/arduino-music
 */


#define TONE_USE_INT
#define TONE_PITCH 440
#include <Pitch.h> // Required for tone()

#include "musics.h"

// Two things need to be created: the array for the notes of the melody (in order)
// and the duration of each (think of it like sheet music in two parts)

// BOTH ARRAYS MUST BE THE SAME SIZE!

const int melody[] = AHA_MELODY;
const int durations[] = AHA_DURATION;

// determine the length of the arrays to use in the loop iteration
const int songLength = sizeof(melody)/sizeof(melody[0]);
const int durationsLength = sizeof(durations)/sizeof(durations[0]);
int thisNote = 0;

void setup() {
 //We don't need anything here
}

void loop() {

  // determine the duration of the notes that the computer understands
  // divide 1000 by the value, so the first note lasts for 1000/8 milliseconds
  thisNote = (thisNote < songLength)? thisNote+1 : 0;
  int duration = 1000/ durations[thisNote];
  tone(8, melody[thisNote], duration);
  // pause between notes
  int pause = duration * 1.3;
  delay(pause);
  // stop the tone
  noTone(8);

}
