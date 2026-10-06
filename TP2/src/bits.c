#include <stdio.h>

int main(void) {
    unsigned int d = 0x10001000;   /* valeur de test : bits 4 et 20 (depuis la gauche) a 1 */

    /* Sur 32 bits, le 1er bit de gauche est la position 31.
       4e bit de gauche  -> position 31 - 3  = 28
       20e bit de gauche -> position 31 - 19 = 12 */
    unsigned int bit4  = (d >> 28) & 1;   /* decalage puis masque */
    unsigned int bit20 = (d >> 12) & 1;

    if (bit4 == 1 && bit20 == 1)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}
