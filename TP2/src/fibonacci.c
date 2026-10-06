#include <stdio.h>

int main(void) {
    int n;
    printf("Nombre de termes : ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Valeur invalide\n");
        return 1;
    }

    long long u_prec = 0;   /* U(n-2) */
    long long u_cour = 1;   /* U(n-1) */

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("%lld", u_prec);          /* U0 */
        } else if (i == 1) {
            printf(", %lld", u_cour);        /* U1 */
        } else {
            long long u_suiv = u_prec + u_cour;   /* Un = Un-1 + Un-2 */
            printf(", %lld", u_suiv);
            u_prec = u_cour;                 /* on decale la fenetre */
            u_cour = u_suiv;
        }
    }
    printf("\n");
    return 0;
}
