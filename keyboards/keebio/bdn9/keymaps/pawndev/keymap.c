#include QMK_KEYBOARD_H

#define _BASE 0
#define _MEDIA 1
#define _FX 2
#define _F1X 3
#define _FFXIV 4
#define _UTILS 5
#define _ADJUST 6

enum encoder_names {
  _LEFT,
  _RIGHT,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
        Layer: Base
        ┌───────────┐  ┌───────────┐
        │    Zoom   │  │  Scroll   │
        │    -  +   │  │  Up  Dwm  │
        ├────────┬──┴──┴──┬────────┤
        │        │   UP   │        │
        ├────────┼────────┼────────┤
        │  LEFT  │   BOT  │  RIGHT │
        ├────────┼────────┼────────┤
        │        │        │        │
        └────────┴────────┴────────┘
    */
    [_BASE] = LAYOUT(
        KC_NO,   KC_UP,   KC_NO,
        KC_LEFT, KC_DOWN, KC_RIGHT,
        KC_NO,   KC_NO,   LT(_ADJUST, KC_TRNS)
    ),

    /*
        Layer: Media
        ┌───────────┐  ┌───────────┐
        │    Vol    │  │   Arrow   │
        │   +   -   │  │  Up   Dwn │
        ├────────┬──┴──┴──┬────────┤
        │  MUTE  │        │  PLAY  │
        ├────────┼────────┼────────┤
        │  PREV  │  PLAY  │  NEXT  │
        ├────────┼────────┼────────┤
        │        │        │        │
        └────────┴────────┴────────┘
    */
    [_MEDIA] = LAYOUT(
        KC_MUTE, KC_NO,   KC_MPLY,
        KC_MPRV, KC_MPLY, KC_MNXT,
        KC_NO,   KC_NO,   LT(_ADJUST, KC_TRNS)
    ),

    /*
        Layer: FX
        ┌───────────┐  ┌───────────┐
        │    Vol    │  │   Arrow   │
        │   +   -   │  │  Up   Dwn │
        ├────────┬──┴──┴──┬────────┤
        │   F1   │   F2   │   F3   │
        ├────────┼────────┼────────┤
        │   F4   │   F5   │   F6   │
        ├────────┼────────┼────────┤
        │   F7   │   F8   │   F9   │
        └────────┴────────┴────────┘
    */
    [_FX] = LAYOUT(
        KC_F1, KC_F2, KC_F2,
        KC_F4, KC_F5, KC_F6,
        KC_F7, KC_F8, LT(_ADJUST, KC_F9)
    ),

    /*
        Layer: F1X
        ┌───────────┐  ┌───────────┐
        │    Vol    │  │   Arrow   │
        │   +   -   │  │  Up   Dwn │
        ├────────┬──┴──┴──┬────────┤
        │   F13  │   F14  │   F15  │
        ├────────┼────────┼────────┤
        │   F16  │   F17  │   F18  │
        ├────────┼────────┼────────┤
        │   F19  │   F20  │   F21  │
        └────────┴────────┴────────┘
    */
    [_F1X] = LAYOUT(
        KC_F13, KC_F14, KC_F15,
        KC_F16, KC_F17, KC_F18,
        KC_F19, KC_F20, LT(_ADJUST, KC_F21)
    ),

    /*
        Layer: FFXIV
        ┌───────────┐  ┌───────────┐
        │  S(WHEEL) │  │  S(WHEEL) │
        │  Up  Dwn  │  │  Up   Dwn │
        ├────────┬──┴──┴──┬────────┤
        │   F13  │   F14  │   F15  │
        ├────────┼────────┼────────┤
        │   F16  │   F17  │   F18  │
        ├────────┼────────┼────────┤
        │   F19  │   F20  │   F21  │
        └────────┴────────┴────────┘
    */
    [_FFXIV] = LAYOUT(
        KC_F13, KC_F14, KC_F15,
        KC_F16, KC_F17, KC_F18,
        KC_F19, KC_F20, LT(_ADJUST, KC_F21)
    ),

    /*
        Layer: Adjust
        ┌───────────┐  ┌───────────┐
        │  S(WHEEL) │  │  S(WHEEL) │
        │  Up  Dwn  │  │  Up   Dwn │
        ├────────┬──┴──┴──┬────────┤
        │ _BASE  │ _FFXIV │  RESET │
        ├────────┼────────┼────────┤
        │  _FX   │        │        │
        ├────────┼────────┼────────┤
        │  _F1X  │ _MEDIA │        │
        └────────┴────────┴────────┘
    */
    [_ADJUST] = LAYOUT(
        TO(_BASE), TO(_FFXIV), Reset,
        TO(_FX),   KC_TRNS,    KC_TRNS,
        TO(_F1X),  TO(_MEDIA), KC_TRNS
    ),
};

void encoder_update_user(uint8_t index, bool clockwise) {
    uint8_t layer = get_highest_layer(layer_state);

    if (index == _LEFT) {
        switch(layer) {
            case _BASE:
                clockwise ? tap_code(LCTL(KC_MINUS)) : tap_code(LCTL(KC_EQL));
                break;
            case _MEDIA:
                clockwise ? tap_code(KC_VOLU) : tap_code(KC_VOLD);
                break;
            case _FFXIV:
                clockwise ? tap_code(LSFT(KC_MS_WH_DOWN)) : tap_code(LSFT(KC_MS_WH_DOWN));
                break;
            case _FX:
            case _F1X:
            case _UTILS:
            default:
                clockwise ? tap_code(KC_MEDIA_NEXT_TRACK) : tap_code(KC_MEDIA_PREV_TRACK);
                break;
        }
    }
    else if (index == _RIGHT) {
        switch(layer) {
            case _BASE:
                clockwise ? tap_code(KC_MS_WH_DOWN) : tap_code(KC_MS_WH_UP);
                break;
            case _MEDIA:
                clockwise ? tap_code(KC_VOLU) : tap_code(KC_VOLD);
                break;
            case _FFXIV:
                clockwise ? tap_code(LCTL(KC_MS_WH_DOWN)) : tap_code(LCTL(KC_MS_WH_UP));
                break;
            case _FX:
            case _F1X:
            case _UTILS:
            default:
                clockwise ? tap_code(KC_MEDIA_NEXT_TRACK) : tap_code(KC_MEDIA_PREV_TRACK);
                break;
        }
    }
}

#ifdef RGBLIGHT_ENABLE
void keyboard_post_init_user(void) {
  rgblight_enable_noeeprom();
  rgblight_sethsv_noeeprom(HSV_WHITE);
  rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
}
#endif
