/**
 * 
 * 
 * @author akafael
 * @ref https://github.com/akafael/arduino-music
 */


#define TONE_USE_INT
#define TONE_PITCH 440
#include <Pitch.h> // Required for tone()


// The melody array 
#define AHA_MELODY { \
  NOTE_FS5, NOTE_FS5, NOTE_D5, NOTE_B4, NOTE_B4, NOTE_E5, \
  NOTE_E5, NOTE_E5, NOTE_GS5, NOTE_GS5, NOTE_A5, NOTE_B5, \
  NOTE_A5, NOTE_A5, NOTE_A5, NOTE_E5, NOTE_D5, NOTE_FS5, \
  NOTE_FS5, NOTE_FS5, NOTE_E5, NOTE_E5, NOTE_FS5, NOTE_E5\
}

// The note duration, 8 = 8th note, 4 = quarter note, etc.
#define AHA_DURATION { \
  8, 8, 8, 4, 4, 4, \
  4, 5, 8, 8, 8, 8, \
  8, 8, 8, 4, 4, 4, \
  4, 5, 8, 8, 8, 8 \
}
