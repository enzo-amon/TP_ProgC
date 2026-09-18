#include <stdio.h>

int main(void)
{
    printf("Tailles des types de base (en octets)\n\n");

    printf("char                   : %zu\n", sizeof(char));
    printf("signed char            : %zu\n", sizeof(signed char));
    printf("unsigned char          : %zu\n\n", sizeof(unsigned char));

    printf("short                  : %zu\n", sizeof(short));
    printf("unsigned short         : %zu\n\n", sizeof(unsigned short));

    printf("int                    : %zu\n", sizeof(int));
    printf("unsigned int           : %zu\n\n", sizeof(unsigned int));

    printf("long int               : %zu\n", sizeof(long int));
    printf("unsigned long int      : %zu\n\n", sizeof(unsigned long int));

    printf("long long int          : %zu\n", sizeof(long long int));
    printf("unsigned long long int : %zu\n\n", sizeof(unsigned long long int));

    printf("float                  : %zu\n", sizeof(float));
    printf("double                 : %zu\n", sizeof(double));
    printf("long double            : %zu\n", sizeof(long double));

    return 0;
}
