#include <stdio.h>   /* uniquement pour printf (affichage) */

int main(void) {
    char s1[] = "Hello";
    char s2[] = " World!";
    char copie[50];
    char concat[100];
    int i, j;

    /* 1) Longueur : on avance jusqu'au '\0' */
    int len1 = 0;
    while (s1[len1] != '\0') len1++;
    int len2 = 0;
    while (s2[len2] != '\0') len2++;
    printf("Longueur de \"%s\" : %d\n", s1, len1);
    printf("Longueur de \"%s\" : %d\n", s2, len2);
    printf("Longueur totale : %d\n", len1 + len2);

    /* 2) Copie : caractere par caractere, sans oublier le '\0' */
    i = 0;
    while (s1[i] != '\0') {
        copie[i] = s1[i];
        i++;
    }
    copie[i] = '\0';
    printf("Copie : \"%s\"\n", copie);

    /* 3) Concatenation : on copie s1, puis s2 a partir de la fin de s1 */
    i = 0;
    while (s1[i] != '\0') {
        concat[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j] != '\0') {
        concat[i] = s2[j];
        i++;
        j++;
    }
    concat[i] = '\0';
    printf("Concatenation : \"%s\"\n", concat);

    return 0;
}
