#include QMK_KEYBOARD_H
#include "colorset.h"

#define _FX 0
#define _F1X 1
#define _RGB 2
#define _MEDIA 3
#define _NUMB 4
#define _UTILS 5

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* _FX (default layer)
  * Hold on 'F9' key will  give you the '_UTILS' layer
  * .--------------------------.
  * |   F1   |   F2   |   F3   |
  * |--------+--------+--------|
  * |   F4   |   F5   |   F6   |
  * |--------+--------+--------|
  * |   F7   |   F8   |   F9   |
  * '--------------------------'
  */
  [_FX] = LAYOUT(KC_F1, KC_F2, KC_F3,
                 KC_F4, KC_F5, KC_F6,
                 KC_F7, KC_F8, LT(_UTILS, KC_F9)),

  /* _UTILS
  * This layer serve to persist another layer as default
  * .--------------------------.
  * |  _FX   |        | RESET  |
  * |--------+--------+--------|
  * |  _F1X  | _MEDIA |        |
  * |--------+--------+--------|
  * | _NUMB  |  _RGB  |        |
  * '--------------------------'
  */
  [_UTILS] = LAYOUT(TO(_FX),   KC_TRNS,    RESET,
                    TO(_F1X),  TO(_MEDIA), KC_TRNS,
                    TO(_NUMB), TO(_RGB),   KC_TRNS),

  /* _F1X
  *  Hold on 'F21' key will  give you the '_UTILS' layer
  * .--------------------------.
  * |  F13   |  F14   |  F15   |
  * |--------+--------+--------|
  * |  F16   |  F17   |  F18   |
  * |--------+--------+--------|
  * |  F19   |  F20   |  F21   |
  * '--------------------------'
  */
  [_F1X] = LAYOUT(KC_F13, KC_F14, KC_F15,
                  KC_F16, KC_F17, KC_F18,
                  KC_F19, KC_F20, LT(_UTILS, KC_F21)),

  /* _MEDIA
  *  Hold on the bottom right key will  give you the '_UTILS' layer
  * .--------------------------.
  * |        |  VOL+  |        |
  * |--------+--------+--------|
  * |  PREV  |  PLAY  |  NEXT  |
  * |--------+--------+--------|
  * |  MUTE  |  VOL-  |        |
  * '--------------------------'
  */
  [_MEDIA] = LAYOUT(KC_NO,   KC_VOLU, KC_NO,
                    KC_MPRV, KC_MPLY, KC_MNXT,
                    KC_MUTE, KC_VOLD, LT(_UTILS, KC_TRNS)),

  /* _RGB
  *  Hold on the bottom right key will  give you the '_UTILS' layer
  * .--------------------------.
  * |RGB_RMOD|RGB_TOG |RGB_MOD |
  * |--------+--------+--------|
  * |RGB_HUEI|RGB_SAD-|RGB_SAD+|
  * |--------+--------+--------|
  * |RGB_HUED|        |        |
  * '--------------------------'
  */
  [_RGB] = LAYOUT(RGB_RMOD, RGB_TOG, RGB_MOD,
                  RGB_HUI,  RGB_SAD, RGB_SAI,
                  RGB_HUD,  KC_TRNS, LT(_UTILS, KC_TRNS)),  // Replace TRNS by other RGB method

  /* _NUMB
  *  Hold on '9' key will give you the '_UTILS' layer
  * .------------------------.
  * |   1   |   2   |   3    |
  * |--------+--------+------|
  * |   4   |   5   |   6    |
  * |--------+--------+------|
  * |   5   |   6   |   7    |
  * '------------------------'
  */
  [_NUMB] = LAYOUT(KC_KP_1, KC_KP_2, KC_KP_3,
                   KC_KP_4, KC_KP_5, KC_KP_6,
                   KC_KP_7, KC_KP_8, LT(_UTILS, KC_KP_9)),

};

layer_state_t layer_state_set_user(layer_state_t state)
{
    switch (get_highest_layer(state)) {
    case _UTILS:
        colorset_UTILS();
        break;
    case _F1X:
        colorset_F1X();
        break;
    case _NUMB:
        colorset_NUMB();
        break;
    case _MEDIA:
        colorset_MEDIA();
        break;
    case _FX:
        colorset_FX();
        break;
    case _RGB:
    default: //  for any other layers, or the default layer
        break;
    }
  return state;
}

#ifdef RGBLIGHT_ENABLE
// void keyboard_post_init_user(void) {
//   rgblight_enable_noeeprom(); // Enables RGB, without saving settings
//   rgblight_sethsv_noeeprom(GREEN_HSV);
//   rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
// }
#endif
