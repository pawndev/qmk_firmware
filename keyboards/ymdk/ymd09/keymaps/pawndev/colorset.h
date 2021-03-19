#ifndef COLORSET_H
#define COLORSET_H

#define GREEN_HSV 85, 255, 150
#define SPRINGGREEN_HSV 106, 255, 150
#define WHITE_HSV 0, 0, 150
#define AZURE_HSV 132, 102, 150
#define PINK_HSV 234, 128, 150


void colorset(int *indices, int array_size, uint8_t h, uint8_t s, uint8_t v);
extern void colorset_F1X(void);
extern void colorset_FX(void);
extern void colorset_NUMB(void);
extern void colorset_MEDIA(void);
extern void colorset_UTILS(void);
extern void colorset_RGB(void);

#endif