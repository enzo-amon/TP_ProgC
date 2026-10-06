#include <stdio.h>
#include <string.h>

int main(void) {
    /* Variables reprises de variables.c */
    char          c   = 'A';
    short         s   = 0x1234;
    int           i   = 0xa47865ff;
    long int      l   = 0x12345678L;
    long long int ll  = 0x123456789abcdefLL;
    float         f   = 2.0f;
    double        d   = 2.0;
    long double   ld  = 2.0L;

    /* Pointeurs vers chaque variable */
    char          *pc  = &c;
    short         *ps  = &s;
    int           *pi  = &i;
    long int      *pl  = &l;
    long long int *pll = &ll;
    float         *pf  = &f;
    double        *pd  = &d;
    long double   *pld = &ld;

    unsigned int fbits;               /* pour voir les bits d'un float */
    unsigned long long dbits;         /* pour voir les bits d'un double */
    unsigned char *octets;            /* pour lire un long double octet par octet */

    for (int etape = 0; etape < 2; etape++) {
        printf(etape == 0 ? "Avant la manipulation :\n" : "\nApres la manipulation :\n");

        printf("Adresse de c  : %p, Valeur de c  : %hhx\n", (void *)pc, (unsigned char)*pc);
        printf("Adresse de s  : %p, Valeur de s  : %hx\n",  (void *)ps, (unsigned short)*ps);
        printf("Adresse de i  : %p, Valeur de i  : %x\n",   (void *)pi, (unsigned int)*pi);
        printf("Adresse de l  : %p, Valeur de l  : %lx\n",  (void *)pl, (unsigned long)*pl);
        printf("Adresse de ll : %p, Valeur de ll : %llx\n", (void *)pll, (unsigned long long)*pll);

        memcpy(&fbits, pf, sizeof fbits);      /* bits bruts du float */
        printf("Adresse de f  : %p, Valeur de f  : %x\n", (void *)pf, fbits);

        memcpy(&dbits, pd, sizeof dbits);      /* bits bruts du double */
        printf("Adresse de d  : %p, Valeur de d  : %llx\n", (void *)pd, dbits);

        printf("Adresse de ld : %p, Valeur de ld : ", (void *)pld);
        octets = (unsigned char *)pld;
        for (int k = 9; k >= 0; k--)           /* 10 octets utiles (x86), poids fort d'abord */
            printf("%02x", octets[k]);
        printf("\n");

        if (etape == 0) {
            /* Manipulation UNIQUEMENT via les pointeurs */
            *pc  = 'B';
            *ps  = *ps + 1;
            *pi  = *pi - 1;
            *pl  = *pl * 2;
            *pll = *pll + 0x10;
            *pf  = 1.0f;
            *pd  = *pd / 2;
            *pld = 1.0L;
        }
    }
    return 0;
}
