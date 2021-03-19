#ifndef COLORSET_H
#define COLORSET_H

#define GREEN_HSV 85, 255, 85
#define SPRINGGREEN_HSV 106, 255, 85
#define WHITE_HSV 0, 0, 85
#define AZURE_HSV 132, 102, 85
#define PINK_HSV 234, 128, 85
#define WHITE_HSV 0, 0, 85
#define PURPLE_HSV 191, 255, 85
#define PINK_HSV 234, 128, 85
#define TEAL_HSV 128, 255, 85
#define CYAN_HSV 128, 255, 85
#define CHARTREUSE_HSV 64, 255, 85
#define MAGENTA_HSV 213, 255, 85


void colorset(int *indices, int array_size, uint8_t h, uint8_t s, uint8_t v);
extern void colorset_F1X(void);
extern void colorset_FX(void);
extern void colorset_NUMB(void);
extern void colorset_MEDIA(void);
extern void colorset_UTILS(void);
extern void colorset_RGB(void);

#endif
