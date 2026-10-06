#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 11

int main(void) {
    int   ti[N];
    float tf[N];
    int   *pi;
    float *pf;

    srand(time(NULL));   /* graine du generateur aleatoire */

    /* Remplissage via pointeurs */
    for (pi = ti, pf = tf; pi < ti + N; pi++, pf++) {
        *pi = rand() % 200;                      /* entier 0..199 */
        *pf = (rand() % 1000) / 100.0f;          /* reel 0.00..9.99 */
    }

    printf("Tableau d'entiers (avant) :\n");
    for (pi = ti; pi < ti + N; pi++)
        printf("%d%s", *pi, (pi < ti + N - 1) ? ", " : "\n");
    printf("Tableau de flottants (avant) :\n");
    for (pf = tf; pf < tf + N; pf++)
        printf("%.2f%s", *pf, (pf < tf + N - 1) ? ", " : "\n");

    /* x3 sur les indices pairs : l'indice = pointeur - debut du tableau */
    for (pi = ti; pi < ti + N; pi++)
        if ((pi - ti) % 2 == 0)
            *pi *= 3;
    for (pf = tf; pf < tf + N; pf++)
        if ((pf - tf) % 2 == 0)
            *pf *= 3;

    printf("\nTableau d'entiers (apres) :\n");
    for (pi = ti; pi < ti + N; pi++)
        printf("%d%s", *pi, (pi < ti + N - 1) ? ", " : "\n");
    printf("Tableau de flottants (apres) :\n");
    for (pf = tf; pf < tf + N; pf++)
        printf("%.2f%s", *pf, (pf < tf + N - 1) ? ", " : "\n");

    return 0;
}
