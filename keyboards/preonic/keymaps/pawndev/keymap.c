/* Copyright 2015-2017 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

float victory_fanfare[][2] = SONG(VICTORY_FANFARE_SHORT);
float megalovania[][2] = SONG(MEGALOVANIA);
float ff_prelude[][2] = SONG(FF_PRELUDE);
float rick_roll[][2] = SONG(RICK_ROLL);
float all_star[][2] = SONG(ALL_STAR);
float mario_gameover[][2] = SONG(MARIO_GAMEOVER);
float mario_mushroom[][2] = SONG(MARIO_MUSHROOM);
float zelda_treasure[][2] = SONG(ZELDA_TREASURE);
float imperial_march[][2] = SONG(IMPERIAL_MARCH);
float lp_numb[][2] = SONG(LP_NUMB);

float ode_to_joy[][2] = SONG(ODE_TO_JOY);
float campanella[][2] = SONG(CAMPANELLA);
float fantaisie_impromptu[][2] = SONG(FANTASIE_IMPROMPTU);
float nocturne_op_9_NO_1[][2] = SONG(NOCTURNE_OP_9_NO_1);
float liebsleid[][2] = SONG(LIEBESLEID);
float rock_a_bye_baby[][2] = SONG(ROCK_A_BYE_BABY);
float clueboard_sound[][2] = SONG(CLUEBOARD_SOUND);
float disney_song[][2] = SONG(DISNEY_SONG);
float number_one[][2] = SONG(NUMBER_ONE);

enum preonic_layers {
  _QWERTY,
  _LOWER,
  _RAISE,
  _ADJUST,
  _MUSIC
};

enum preonic_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  BACKLIT,
  MUSIC,
  S_FFVF,
  S_MEGA,
  S_FFPR,
  S_RICK,
  S_STAR,
  S_MAGO,
  S_MAMU,
  S_SWDV,
  S_CHEST,
  S_NUMB,
  S_ODE,
  S_CAMP,
  S_FANT,
  S_NOCT,
  S_LIEB,
  S_ROCK,
  S_CLUE,
  S_DISN,
  S_ONE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |  "   |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |  `   |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |Enter |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Shift |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl | GUI  | Alt  |Bright| Bksp | Lower| Raise| Spce | Alt  | Lower|Raise| Right |
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT_preonic_grid( \
  KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC, \
  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_QUOT, \
  KC_GRV,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,  \
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, \
  KC_LCTL, KC_LGUI, KC_LALT, BACKLIT, KC_BSPC, LOWER,   RAISE,   KC_SPC,  KC_RALT, LOWER,   RAISE,   KC_RCTL  \
),


/* Lower
 * ,-----------------------------------------------------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  | F10  | F11  | F12  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |   -  |   =  |   [  |   ]  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Del  |      |      |      |      |      | Left | Down |  Up  | Right|      |  \   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |ISO ~ |ISO | | HOME |  END |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |  FF  |      |      |      |      |      |      |      | Next | Vol- | Vol+ | Play |
 * `-----------------------------------------------------------------------------------'
 */
[_LOWER] = LAYOUT_preonic_grid( \
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,      KC_F9,      KC_F10,  KC_F11,  KC_F11,  \
  _______, _______, _______, _______, _______, _______, _______, KC_MINS,    KC_EQL,     KC_LBRC, KC_RBRC, KC_DEL,  \
  KC_DEL,  _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN,    KC_UP,      KC_RGHT, _______, KC_PIPE, \
  _______, _______, _______, _______, _______, _______, _______, S(KC_NUHS), S(KC_NUBS), KC_HOME, KC_END,  _______, \
  S_FFVF, _______, _______, _______, _______, _______, _______, _______,    KC_MNXT,    KC_VOLD, KC_VOLU, KC_MPLY  \
),

/* Raise
 * ,-----------------------------------------------------------------------------------.
 * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   -  |   =  |   [  |   ]  |  \   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |ISO # |ISO / |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      | Next | Vol- | Vol+ | Play |
 * `-----------------------------------------------------------------------------------'
 */
[_RAISE] = LAYOUT_preonic_grid( \
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC, \
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,  \
  KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS, \
  _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NUHS, KC_NUBS, KC_PGUP, KC_PGDN, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY  \
),

/* Adjust (Lower + Raise)
 * ,-----------------------------------------------------------------------------------.
 * |Reset |      |      |      |      |      |      |      |TermOn|      |Aud on|Mus on|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |TermOf|      |AudOff|MusOff|
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |MusMod|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      | Song |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |MusTog|
 * `-----------------------------------------------------------------------------------'
 */
[_ADJUST] = LAYOUT_preonic_grid( \
  RESET,   _______, _______,  _______, _______, _______, _______, _______, TERM_ON,  _______, AU_ON,   MU_ON,  \
  _______, _______, _______,  _______, _______, _______, _______, _______, TERM_OFF, _______, AU_OFF,  MU_OFF, \
  _______, _______, _______,  _______, _______, _______, _______, _______, _______,  _______, _______, MU_MOD, \
  _______, _______, _______,  _______, _______, _______, _______, _______, _______,  _______, _______, MUSIC,  \
  _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,  _______,  MU_TOG \
),

/* Music
 * ,-----------------------------------------------------------------------------------.
 * |Qwerty|      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |Lower |Raise |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_MUSIC] = LAYOUT_preonic_grid( \
  QWERTY,  _______, _______,  _______, _______, _______, _______, _______, _______,  _______, _______, _______, \
  _______, S_CAMP,  S_ODE,   S_FANT,  S_NOCT,  S_LIEB,   S_CHEST, _______, _______,  _______, _______, _______, \
  _______, S_DISN,  S_ONE,   S_RICK,  S_MEGA,  S_STAR,   _______, _______, _______,  _______, _______, _______, \
  _______, S_SWDV,  S_FFVF,  S_FFPR,  S_MAMU,  S_MAGO,   _______, _______, _______,  _______, _______, _______, \
  _______, _______, _______, _______, _______, LOWER,    RAISE, _______, _______,  _______, _______, _______  \
)


};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
        case S_FFVF:
          if (record->event.pressed) {
              PLAY_SONG(victory_fanfare);
          }
          return false;
          break;
        case S_MEGA:
          if (record->event.pressed) {
              PLAY_SONG(megalovania);
          }
          return false;
          break;
        case S_FFPR:
          if (record->event.pressed) {
              PLAY_SONG(ff_prelude);
          }
          return false;
          break;
        case S_RICK:
          if (record->event.pressed) {
              PLAY_SONG(rick_roll);
          }
          return false;
          break;
        case S_STAR:
          if (record->event.pressed) {
              PLAY_SONG(all_star);
          }
          return false;
          break;
        case S_MAGO:
          if (record->event.pressed) {
              PLAY_SONG(mario_gameover);
          }
          return false;
          break;
        case S_MAMU:
          if (record->event.pressed) {
              PLAY_SONG(mario_mushroom);
          }
          return false;
          break;
        case S_SWDV:
          if (record->event.pressed) {
              PLAY_SONG(imperial_march);
          }
          return false;
          break;
        case S_CHEST:
          if (record->event.pressed) {
              PLAY_SONG(zelda_treasure);
          }
          return false;
          break;
        case S_NUMB:
          if (record->event.pressed) {
              PLAY_SONG(lp_numb);
          }
          return false;
          break;
        case S_ODE:
          if (record->event.pressed) {
              PLAY_SONG(ode_to_joy);
          }
          return false;
          break;
        case S_CAMP:
          if (record->event.pressed) {
              PLAY_SONG(campanella);
          }
          return false;
          break;
        case S_FANT:
          if (record->event.pressed) {
              PLAY_SONG(fantaisie_impromptu);
          }
          return false;
          break;
        case S_NOCT:
          if (record->event.pressed) {
              PLAY_SONG(nocturne_op_9_NO_1);
          }
          return false;
          break;
        case S_LIEB:
          if (record->event.pressed) {
              PLAY_SONG(liebsleid);
          }
          return false;
          break;
        case S_ROCK:
          if (record->event.pressed) {
              PLAY_SONG(rock_a_bye_baby);
          }
          return false;
          break;
        case S_CLUE:
          if (record->event.pressed) {
              PLAY_SONG(clueboard_sound);
          }
          return false;
          break;
        case S_DISN:
          if (record->event.pressed) {
              PLAY_SONG(disney_song);
          }
          return false;
          break;
        case S_ONE:
          if (record->event.pressed) {
              PLAY_SONG(number_one);
          }
          return false;
          break;
        case QWERTY:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_QWERTY);
          }
          return false;
          break;
        case LOWER:
          if (record->event.pressed) {
            layer_on(_LOWER);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          } else {
            layer_off(_LOWER);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          }
          return false;
          break;
        case RAISE:
          if (record->event.pressed) {
            layer_on(_RAISE);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          } else {
            layer_off(_RAISE);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          }
          return false;
          break;
        case MUSIC:
          if (record->event.pressed) {
              set_single_persistent_default_layer(_MUSIC);
          }
          return false;
          break;
        case BACKLIT:
          if (record->event.pressed) {
            register_code(KC_RSFT);
            #ifdef BACKLIGHT_ENABLE
              backlight_step();
            #endif
            #ifdef __AVR__
            PORTE &= ~(1<<6);
            #endif
          } else {
            unregister_code(KC_RSFT);
            #ifdef __AVR__
            PORTE |= (1<<6);
            #endif
          }
          return false;
          break;
      }
    return true;
};

// bool muse_mode = false;
// uint8_t last_muse_note = 0;
// uint16_t muse_counter = 0;
// uint8_t muse_offset = 70;
// uint16_t muse_tempo = 50;

// void encoder_update_user(uint8_t index, bool clockwise) {
//   if (muse_mode) {
    // if (IS_LAYER_ON(_RAISE)) {
    //   if (clockwise) {
    //     muse_offset++;
    //   } else {
    //     muse_offset--;
    //   }
    // } else {
    //   if (clockwise) {
    //     muse_tempo+=1;
    //   } else {
    //     muse_tempo-=1;
    //   }
    // }
//   } else {
//     if (clockwise) {
//       register_code(KC_PGDN);
//       unregister_code(KC_PGDN);
//     } else {
//       register_code(KC_PGUP);
//       unregister_code(KC_PGUP);
//     }
//   }
// }

// void dip_switch_update_user(uint8_t index, bool active) {
//   switch (index) {
//     case 0:
//       if (active) {
//         layer_on(_ADJUST);
//       } else {
//         layer_off(_ADJUST);
//       }
//       break;
//     case 1:
//       if (active) {
//         muse_mode = true;
//       } else {
//         muse_mode = false;
//         #ifdef AUDIO_ENABLE
//           stop_all_notes();
//         #endif
//       }
//    }
// }

void matrix_scan_user(void) {
//   #ifdef AUDIO_ENABLE
//     if (muse_mode) {
//       if (muse_counter == 0) {
//         uint8_t muse_note = muse_offset + SCALE[muse_clock_pulse()];
//         if (muse_note != last_muse_note) {
//           stop_note(compute_freq_for_midi_note(last_muse_note));
//           play_note(compute_freq_for_midi_note(muse_note), 0xF);
//           last_muse_note = muse_note;
//         }
//       }
//       muse_counter = (muse_counter + 1) % muse_tempo;
//     }
//   #endif
}

bool music_mask_user(uint16_t keycode) {
  switch (keycode) {
    case RAISE:
    case LOWER:
      return false;
    default:
      return true;
  }
}
