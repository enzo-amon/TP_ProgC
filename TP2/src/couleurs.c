#include <stdio.h>

struct Couleur {
    unsigned char r;   /* 1 octet : 0 a 255 */
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

int main(void) {
    struct Couleur c[10] = {
        {0xef, 0x78, 0x12, 0xff},
        {0x2c, 0xc8, 0x64, 0xff},
        {0xff, 0x00, 0x00, 0xff},
        {0x00, 0xff, 0x00, 0xff},
        {0x00, 0x00, 0xff, 0xff},
        {0xff, 0xff, 0x00, 0x80},
        {0x80, 0x00, 0x80, 0xff},
        {0x00, 0xff, 0xff, 0x40},
        {0xff, 0xff, 0xff, 0xff},
        {0x00, 0x00, 0x00, 0x00}
    };

    for (int i = 0; i < 10; i++) {
        printf("Couleur %d :\n", i + 1);
        printf("Rouge : %d\n", c[i].r);
        printf("Vert : %d\n", c[i].g);
        printf("Bleu : %d\n", c[i].b);
        printf("Alpha : %d\n\n", c[i].a);
    }
    return 0;
}
