#include <stdio.h>

#define NB 5

int main(void) {
    /* noms_prenoms[i][0] = nom, noms_prenoms[i][1] = prenom */
    char noms_prenoms[NB][2][30] = {
        {"Dupont", "Marie"},
        {"Martin", "Pierre"},
        {"Bernard", "Julie"},
        {"Petit", "Lucas"},
        {"Durand", "Emma"}
    };
    char adresses[NB][60] = {
        "20, Boulevard Niels Bohr, Lyon",
        "22, Boulevard Niels Bohr, Lyon",
        "5, rue de la Paix, Paris",
        "12, avenue Jean Jaures, Lille",
        "8, place Bellecour, Lyon"
    };
    float notes_prog[NB] = {16.5f, 14.0f, 12.5f, 9.75f, 18.0f};
    float notes_os[NB]   = {12.1f, 14.1f, 15.0f, 11.5f, 17.25f};

    for (int i = 0; i < NB; i++) {
        printf("Etudiant.e %d :\n", i + 1);
        printf("  Nom     : %s\n", noms_prenoms[i][0]);
        printf("  Prenom  : %s\n", noms_prenoms[i][1]);
        printf("  Adresse : %s\n", adresses[i]);
        printf("  Note Programmation en C : %.2f\n", notes_prog[i]);
        printf("  Note Systeme d'exploitation : %.2f\n\n", notes_os[i]);
    }
    return 0;
}
