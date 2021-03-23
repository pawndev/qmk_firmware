#include QMK_KEYBOARD_H

#define _F1X 0
#define _RGB 1
#define _MEDIA 2
#define _UTILS 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

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

  /* _RGB
  *  Hold on the bottom right key will  give you the '_UTILS' layer
  * .--------------------------.
  * |RGB_RMOD|RGB_TOG |RGB_MOD |
  * |--------+--------+--------|
  * |RGB_HUE+|RGB_VAL+|RGB_SAD+|
  * |--------+--------+--------|
  * |RGB_HUE-|RGB_VAL-|RGB_SAT-|
  * '--------------------------'
  */
  [_RGB] = LAYOUT(RGB_RMOD, RGB_TOG, RGB_MOD,
                  RGB_HUI,  RGB_VAI, RGB_SAI,
                  RGB_HUD,  RGB_VAD, LT(_UTILS, RGB_SAD)),

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

  /* _UTILS
  * This layer serve to persist another layer as default
  * .--------------------------.
  * |  _F1X  |        | RESET  |
  * |--------+--------+--------|
  * | _MEDIA |        |        |
  * |--------+--------+--------|
  * |  _RGB  |        |        |
  * '--------------------------'
  */
  [_UTILS] = LAYOUT(TO(_F1X),   KC_TRNS, RESET,
                    TO(_MEDIA), KC_TRNS, KC_TRNS,
                    TO(_RGB),   KC_TRNS, KC_TRNS),

};


#ifdef RGBLIGHT_ENABLE
void keyboard_post_init_user(void) {
  rgblight_enable_noeeprom(); // Enables RGB, without saving settings
  rgblight_sethsv_noeeprom(HSV_MAGENTA);
  rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
}
#endif
