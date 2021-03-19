#pragma once

#ifdef AUDIO_ENABLE
    #undef MEGALOVANIA
    #undef FF_PRELUDE
    #undef RICK_ROLL
    #undef VICTORY_FANFARE_SHORT
    #undef ALL_STAR
    #undef MARIO_MUSHROOM
    #undef ZELDA_TREASURE
    #undef IMPERIAL_MARCH
    #undef LP_NUMB
    #undef MARIO_GAMEOVER
    #undef LIEBESLEID
    #undef DISNEY_SONG
    #undef NUMBER_ONE
    #define STARTUP_SONG SONG(PREONIC_SOUND)
    // #define STARTUP_SONG SONG(NO_SOUND)

    #define DEFAULT_LAYER_SONGS { SONG(QWERTY_SOUND), \
                                  SONG(COLEMAK_SOUND), \
                                  SONG(DVORAK_SOUND) \
                                }

    #define MEGALOVANIA \
        Q__NOTE(_D4), Q__NOTE(_D4), H__NOTE(_D5), HD_NOTE(_A4), H__NOTE(_AF4), H__NOTE(_G4), H__NOTE(_F4), \
        Q__NOTE(_D4), Q__NOTE(_F4), Q__NOTE(_G4), Q__NOTE(_C4), Q__NOTE(_C4), H__NOTE(_D5), HD_NOTE(_A4), \
        H__NOTE(_AF4), H__NOTE(_G4), H__NOTE(_F4), Q__NOTE(_D4), Q__NOTE(_F4), Q__NOTE(_G4), \
        Q__NOTE(_B3), Q__NOTE(_B3), H__NOTE(_D5), HD_NOTE(_A4), H__NOTE(_AF4), H__NOTE(_G4), H__NOTE(_F4), \
        Q__NOTE(_D4), Q__NOTE(_F4), Q__NOTE(_G4), Q__NOTE(_BF3), Q__NOTE(_BF3), H__NOTE(_D5), \
        HD_NOTE(_A4), H__NOTE(_AF4), H__NOTE(_G4), H__NOTE(_F4), Q__NOTE(_D4), Q__NOTE(_F4), \
        Q__NOTE(_G4)

    #define FF_PRELUDE \
        M__NOTE(_C3, 20), M__NOTE(_D3, 20), M__NOTE(_E3, 20), M__NOTE(_G3, 20), \
        M__NOTE(_C4, 20), M__NOTE(_D4, 20), M__NOTE(_E4, 20), M__NOTE(_G4, 20), \
        M__NOTE(_C5, 20), M__NOTE(_D5, 20), M__NOTE(_E5, 20), M__NOTE(_G5, 20), \
        M__NOTE(_C6, 20), M__NOTE(_D6, 20), M__NOTE(_E6, 20), M__NOTE(_G6, 20), \
        M__NOTE(_C7, 20), M__NOTE(_G6, 20), M__NOTE(_E6, 20), M__NOTE(_D6, 20), \
        M__NOTE(_C6, 20), M__NOTE(_G5, 20), M__NOTE(_E5, 20), M__NOTE(_D5, 20), \
        M__NOTE(_C5, 20), M__NOTE(_G4, 20), M__NOTE(_E4, 20), M__NOTE(_D4, 20), \
        M__NOTE(_C4, 20), M__NOTE(_G3, 20), M__NOTE(_E3, 20), M__NOTE(_D3, 20), \
        M__NOTE(_A2, 20), M__NOTE(_B2, 20), M__NOTE(_C3, 20), M__NOTE(_E3, 20), \
        M__NOTE(_A3, 20), M__NOTE(_B3, 20), M__NOTE(_C4, 20), M__NOTE(_E4, 20), \
        M__NOTE(_A4, 20), M__NOTE(_B4, 20), M__NOTE(_C5, 20), M__NOTE(_E5, 20), \
        M__NOTE(_A5, 20), M__NOTE(_B5, 20), M__NOTE(_C6, 20), M__NOTE(_E6, 20), \
        M__NOTE(_A6, 20), M__NOTE(_E6, 20), M__NOTE(_C6, 20), M__NOTE(_B5, 20), \
        M__NOTE(_A5, 20), M__NOTE(_E5, 20), M__NOTE(_C5, 20), M__NOTE(_B4, 20), \
        M__NOTE(_A4, 20), M__NOTE(_E4, 20), M__NOTE(_C4, 20), M__NOTE(_B3, 20), \
        M__NOTE(_A3, 20), M__NOTE(_E3, 20), M__NOTE(_C3, 20), M__NOTE(_B2, 20),

    #define RICK_ROLL      \
        Q__NOTE(_F4),      \
        Q__NOTE(_G4),      \
        Q__NOTE(_BF4),     \
        Q__NOTE(_G4),      \
        HD_NOTE(_D5),      \
        HD_NOTE(_D5),      \
        W__NOTE(_C5),      \
        S__NOTE(_REST),    \
        Q__NOTE(_F4),      \
        Q__NOTE(_G4),      \
        Q__NOTE(_BF4),     \
        Q__NOTE(_G4),      \
        HD_NOTE(_C5),      \
        HD_NOTE(_C5),      \
        W__NOTE(_BF4),     \
        S__NOTE(_REST),    \
        Q__NOTE(_F4),      \
        Q__NOTE(_G4),      \
        Q__NOTE(_BF4),     \
        Q__NOTE(_G4),      \
        W__NOTE(_BF4),     \
        H__NOTE(_C5),      \
        H__NOTE(_A4),      \
        H__NOTE(_A4),      \
        H__NOTE(_G4),      \
        H__NOTE(_F4),      \
        H__NOTE(_F4),      \
        W__NOTE(_C5),      \
        W__NOTE(_BF4),

    #define VICTORY_FANFARE_SHORT \
        ED_NOTE(_C6), \
        ED_NOTE(_C6), \
        ED_NOTE(_C6), \
        ED_NOTE(_C6), \
        W__NOTE(_REST), \
        QD_NOTE(_GS5), \
        QD_NOTE(_AS5), \
        Q__NOTE(_C6), \
        Q__NOTE(_AS5), \
        Q__NOTE(_C6), \

    #define ALL_STAR \
        H__NOTE(_AS4), W__NOTE(_FS4), Q__NOTE(_FS4), Q__NOTE(_DS4), H__NOTE(_FS4), W__NOTE(_FS4), Q__NOTE(_FS4), Q__NOTE(_DS4), \
        H__NOTE(_FS4), W__NOTE(_FS4), W__NOTE(_FS4), QD_NOTE(_AS4), \
        H__NOTE(_AS4), W__NOTE(_FS4), Q__NOTE(_FS4), Q__NOTE(_DS4), H__NOTE(_FS4), W__NOTE(_FS4), Q__NOTE(_FS4), Q__NOTE(_DS4), \
        H__NOTE(_FS4), W__NOTE(_FS4), W__NOTE(_FS4), W__NOTE(_AS4), H__NOTE(_REST),\
        W__NOTE(_AS4), W__NOTE(_CS5), H__NOTE(_B4),  H__NOTE(_CS5), H__NOTE(_DS5), W__NOTE(_FS5), \
        H__NOTE(_GS5), W__NOTE(_GS5), H__NOTE(_FS4), H__NOTE(_FS4), H__NOTE(_GS4), H__NOTE(_FS4), \
        H__NOTE(_AS4), W__NOTE(_GS4), W__NOTE(_GS4), W__NOTE(_FS4), W__NOTE(_GS4), \
        H__NOTE(_AS4), WD_NOTE(_DS4)


    #define MARIO_MUSHROOM \
        S__NOTE(_C5 ), \
        S__NOTE(_G4 ), \
        S__NOTE(_C5 ), \
        S__NOTE(_E5 ), \
        S__NOTE(_G5 ), \
        S__NOTE(_C6 ), \
        S__NOTE(_G5 ), \
        S__NOTE(_GS4), \
        S__NOTE(_C5 ), \
        S__NOTE(_DS5), \
        S__NOTE(_GS5), \
        S__NOTE(_DS5), \
        S__NOTE(_GS5), \
        S__NOTE(_C6 ), \
        S__NOTE(_DS6), \
        S__NOTE(_GS6), \
        S__NOTE(_DS6), \
        S__NOTE(_AS4), \
        S__NOTE(_D5 ), \
        S__NOTE(_F5 ), \
        S__NOTE(_AS5), \
        S__NOTE(_D6 ), \
        S__NOTE(_F6 ), \
        S__NOTE(_AS6), \
        S__NOTE(_F6 )

    #define MARIO_GAMEOVER \
        HD_NOTE(_C5 ), \
        HD_NOTE(_G4 ), \
        H__NOTE(_E4 ), \
        H__NOTE(_A4 ), \
        H__NOTE(_B4 ), \
        H__NOTE(_A4 ), \
        H__NOTE(_AF4), \
        H__NOTE(_BF4), \
        H__NOTE(_AF4), \
        WD_NOTE(_G4 ),

    #define ZELDA_TREASURE \
        Q__NOTE(_A4 ), \
        Q__NOTE(_AS4), \
        Q__NOTE(_B4 ), \
        HD_NOTE(_C5 ), \

    #define IMPERIAL_MARCH \
        HD_NOTE(_A4), HD_NOTE(_A4), HD_NOTE(_A4), QD_NOTE(_F4), QD_NOTE(_C5), \
        HD_NOTE(_A4), QD_NOTE(_F4),  QD_NOTE(_C5), WD_NOTE(_A4), \
        HD_NOTE(_E5), HD_NOTE(_E5), HD_NOTE(_E5), QD_NOTE(_F5), QD_NOTE(_C5), \
        HD_NOTE(_A4), QD_NOTE(_F4),  QD_NOTE(_C5), WD_NOTE(_A4)

    #define LP_NUMB	\
        H__NOTE(_CS5), H__NOTE(_E5), H__NOTE(_CS5), WD_NOTE(_FS5), \
        WD_NOTE(_A5), WD_NOTE(_GS5),   WD_NOTE(_REST),  H__NOTE(_CS5), H__NOTE(_E5), \
        H__NOTE(_CS5), WD_NOTE(_A5), WD_NOTE(_GS5), WD_NOTE(_E5),

    #define LIEBESLEID \
        Q__NOTE(_E4), Q__NOTE(_DS4), Q__NOTE(_E4), Q__NOTE(_F4), Q__NOTE(_E4), Q__NOTE(_FS4), Q__NOTE(_EF4), Q__NOTE(_G4), Q__NOTE(_D4), \
        Q__NOTE(_GS4), Q__NOTE(_CS4), W__NOTE(_A4), H__NOTE(_E5), H__NOTE(_E5), HD_NOTE(_G4), Q__NOTE(_E5), E__NOTE(_E5), \
        E__NOTE(_F5), ED_NOTE(_E5), HD_NOTE(_D5), Q__NOTE(_E5), H__NOTE(_F5), H__NOTE(_CS5), H__NOTE(_C5), W__NOTE(_G4), \
        H__NOTE(_D5), H__NOTE(_D5), HD_NOTE(_D5), Q__NOTE(_D5), E__NOTE(_D5), E__NOTE(_E5), E__NOTE(_D5), HD_NOTE(_C5), \
        Q__NOTE(_D5), H__NOTE(_E5), H__NOTE(_B4), H__NOTE(_BF4), W__NOTE(_F4), H__NOTE(_C5), H__NOTE(_C5), HD_NOTE(_EF4), \
        Q__NOTE(_C5), E__NOTE(_C5), E__NOTE(_D5), E__NOTE(_C5), HD_NOTE(_BF4), Q__NOTE(_C5), H__NOTE(_D5), H__NOTE(_FS4), \
        H__NOTE(_F4), HD_NOTE(_E4), Q__NOTE(_A4), HD_NOTE(_FS4), Q__NOTE(_A4), HD_NOTE(_GS4), Q__NOTE(_B4), Q__NOTE(_A4), \
        Q__NOTE(_E4), Q__NOTE(_DS4), Q__NOTE(_E4), Q__NOTE(_F4), Q__NOTE(_D4), Q__NOTE(_FS4), Q__NOTE(_CS4), Q__NOTE(_G4), \
        Q__NOTE(_C4), Q__NOTE(_GS4), Q__NOTE(_D4), WD_NOTE(_A4),

    #define DISNEY_SONG \
        H__NOTE(_G3 ),  \
        H__NOTE(_G4 ),  \
        H__NOTE(_F4 ),  \
        H__NOTE(_E4 ),  \
        H__NOTE(_CS4),  \
        H__NOTE(_D4 ),  \
        W__NOTE(_A4 ),  \
        H__NOTE(_B3 ),  \
        H__NOTE(_B4 ),  \
        H__NOTE(_A4 ),  \
        H__NOTE(_G4 ),  \
        H__NOTE(_FS4),  \
        H__NOTE(_G4 ),  \
        W__NOTE(_C5 ),  \
        H__NOTE(_D5 ),  \
        H__NOTE(_C5 ),  \
        H__NOTE(_B4 ),  \
        H__NOTE(_A4 ),  \
        H__NOTE(_G4 ),  \
        H__NOTE(_F4 ),  \
        H__NOTE(_E4 ),  \
        H__NOTE(_D4 ),  \
        W__NOTE(_A4 ),  \
        W__NOTE(_B3 ),  \
        W__NOTE(_C4 ),

    #define NUMBER_ONE \
        HD_NOTE(_F4 ), \
        Q__NOTE(_C5 ), \
        E__NOTE(_B4 ), \
        E__NOTE(_C5 ), \
        E__NOTE(_B4 ), \
        E__NOTE(_C5 ), \
        Q__NOTE(_B4 ), \
        Q__NOTE(_C5 ), \
        H__NOTE(_AF4), \
        HD_NOTE(_F4 ), \
        Q__NOTE(_F4 ), \
        Q__NOTE(_AF4), \
        Q__NOTE(_C5 ), \
        H__NOTE(_DF5), \
        H__NOTE(_AF4), \
        H__NOTE(_DF5), \
        H__NOTE(_EF5), \
        Q__NOTE(_C5 ), \
        Q__NOTE(_DF5), \
        Q__NOTE(_C5 ), \
        Q__NOTE(_DF5), \
        H__NOTE(_C5 ),

#endif

#define MUSIC_MASK (keycode != KC_NO)

/*
 * MIDI options
 */

/* Prevent use of disabled MIDI features in the keymap */
//#define MIDI_ENABLE_STRICT 1

/* enable basic MIDI features:
   - MIDI notes can be sent when in Music mode is on
*/

#define MIDI_BASIC

/* enable advanced MIDI features:
   - MIDI notes can be added to the keymap
   - Octave shift and transpose
   - Virtual sustain, portamento, and modulation wheel
   - etc.
*/
//#define MIDI_ADVANCED

/* override number of MIDI tone keycodes (each octave adds 12 keycodes and allocates 12 bytes) */
//#define MIDI_TONE_KEYCODE_OCTAVES 2
