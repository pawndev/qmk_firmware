#include QMK_KEYBOARD_H
#include "colorset.h"

int FX_LED_COLORSET_A[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};

int F1X_LED_COLORSET_A[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};

int NUMB_LED_COLORSET_A[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};

// Led Off
int MEDIA_LED_COLORSET_A[] = {
    0, 2, 6
};

// vol+ | vol-
int MEDIA_LED_COLORSET_B[] = {
    1, 7
};

//  prev|play|next
int MEDIA_LED_COLORSET_C[] = {
    3, 4, 5
};

int MEDIA_LED_COLORSET_D[] = {
    8
};

int UTILS_LED_COLORSET_A[] = {
    2
};

int UTILS_LED_COLORSET_B[] = {
    0
};

int UTILS_LED_COLORSET_C[] = {
    5
};

int UTILS_LED_COLORSET_D[] = {
    4
};

int UTILS_LED_COLORSET_E[] = {
    7
};

int UTILS_LED_COLORSET_F[] = {
    1, 3, 6
};

int UTILS_LED_COLORSET_G[] = {
    8
};

int FX_LED_COLORSET_A_SIZE    = sizeof FX_LED_COLORSET_A    / sizeof *FX_LED_COLORSET_A;
int F1X_LED_COLORSET_A_SIZE   = sizeof F1X_LED_COLORSET_A   / sizeof *F1X_LED_COLORSET_A;
int NUMB_LED_COLORSET_A_SIZE   = sizeof NUMB_LED_COLORSET_A   / sizeof *NUMB_LED_COLORSET_A;

int MEDIA_LED_COLORSET_A_SIZE = sizeof MEDIA_LED_COLORSET_A / sizeof *MEDIA_LED_COLORSET_A;
int MEDIA_LED_COLORSET_B_SIZE = sizeof MEDIA_LED_COLORSET_B / sizeof *MEDIA_LED_COLORSET_B;
int MEDIA_LED_COLORSET_C_SIZE = sizeof MEDIA_LED_COLORSET_C / sizeof *MEDIA_LED_COLORSET_C;
int MEDIA_LED_COLORSET_D_SIZE = sizeof MEDIA_LED_COLORSET_D / sizeof *MEDIA_LED_COLORSET_D;

int UTILS_LED_COLORSET_A_SIZE = sizeof UTILS_LED_COLORSET_A / sizeof *UTILS_LED_COLORSET_A;
int UTILS_LED_COLORSET_B_SIZE = sizeof UTILS_LED_COLORSET_B / sizeof *UTILS_LED_COLORSET_B;
int UTILS_LED_COLORSET_C_SIZE = sizeof UTILS_LED_COLORSET_C / sizeof *UTILS_LED_COLORSET_C;
int UTILS_LED_COLORSET_D_SIZE = sizeof UTILS_LED_COLORSET_D / sizeof *UTILS_LED_COLORSET_D;
int UTILS_LED_COLORSET_E_SIZE = sizeof UTILS_LED_COLORSET_E / sizeof *UTILS_LED_COLORSET_E;
int UTILS_LED_COLORSET_F_SIZE = sizeof UTILS_LED_COLORSET_F / sizeof *UTILS_LED_COLORSET_F;
int UTILS_LED_COLORSET_G_SIZE = sizeof UTILS_LED_COLORSET_G / sizeof *UTILS_LED_COLORSET_G;

void colorset(int *indices, int array_size, uint8_t h, uint8_t s, uint8_t v)
{
    for (int i = 0; i < array_size; i++) {
        rgblight_sethsv_at(h, s, v, indices[i]);
    }
}

void colorset_UTILS()
{
  colorset(UTILS_LED_COLORSET_A, UTILS_LED_COLORSET_A_SIZE, GREEN_HSV); // FX layer
  colorset(UTILS_LED_COLORSET_B, UTILS_LED_COLORSET_B_SIZE, WHITE_HSV); // RESET
  colorset(UTILS_LED_COLORSET_C, UTILS_LED_COLORSET_C_SIZE, SPRINGGREEN_HSV); // F1X layer
  colorset(UTILS_LED_COLORSET_D, UTILS_LED_COLORSET_D_SIZE, PURPLE_HSV); // MEDIA layer
  colorset(UTILS_LED_COLORSET_E, UTILS_LED_COLORSET_E_SIZE, PINK_HSV); // RGB layer
  colorset(UTILS_LED_COLORSET_G, UTILS_LED_COLORSET_G_SIZE, TEAL_HSV); // NUMB layer
  colorset(UTILS_LED_COLORSET_F, UTILS_LED_COLORSET_F_SIZE, HSV_OFF); // Empty
}

void colorset_FX()
{
    colorset(FX_LED_COLORSET_A, FX_LED_COLORSET_A_SIZE, GREEN_HSV);
}

void colorset_F1X()
{
    colorset(F1X_LED_COLORSET_A, F1X_LED_COLORSET_A_SIZE, SPRINGGREEN_HSV);
}

void colorset_NUMB()
{
    colorset(NUMB_LED_COLORSET_A, NUMB_LED_COLORSET_A_SIZE, TEAL_HSV);
}

void colorset_MEDIA()
{
  colorset(MEDIA_LED_COLORSET_A, MEDIA_LED_COLORSET_A_SIZE, HSV_OFF); // Led off
  colorset(MEDIA_LED_COLORSET_B, MEDIA_LED_COLORSET_B_SIZE, CYAN_HSV); // volume
  colorset(MEDIA_LED_COLORSET_C, MEDIA_LED_COLORSET_C_SIZE, CHARTREUSE_HSV); // media
  colorset(MEDIA_LED_COLORSET_D, MEDIA_LED_COLORSET_D_SIZE, MAGENTA_HSV); // mute
}

void colorset_RGB()
{}
