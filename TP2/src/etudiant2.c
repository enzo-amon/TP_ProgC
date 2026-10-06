#include <stdio.h>
#include <string.h>

#define NB 5

struct Etudiant {
    char nom[30];
    char prenom[30];
    char adresse[60];
    float note1;   /* Programmation en C */
    float note2;   /* Systeme d'exploitation */
};

int main(void) {
    struct Etudiant e[NB];

    strcpy(e[0].nom, "Dupont");  strcpy(e[0].prenom, "Marie");
    strcpy(e[0].adresse, "20, Boulevard Niels Bohr, Lyon");
    e[0].note1 = 16.5f; e[0].note2 = 12.1f;

    strcpy(e[1].nom, "Martin");  strcpy(e[1].prenom, "Pierre");
    strcpy(e[1].adresse, "22, Boulevard Niels Bohr, Lyon");
    e[1].note1 = 14.0f; e[1].note2 = 14.1f;

    strcpy(e[2].nom, "Bernard"); strcpy(e[2].prenom, "Julie");
    strcpy(e[2].adresse, "5, rue de la Paix, Paris");
    e[2].note1 = 12.5f; e[2].note2 = 15.0f;

    strcpy(e[3].nom, "Petit");   strcpy(e[3].prenom, "Lucas");
    strcpy(e[3].adresse, "12, avenue Jean Jaures, Lille");
    e[3].note1 = 9.75f; e[3].note2 = 11.5f;

    strcpy(e[4].nom, "Durand");  strcpy(e[4].prenom, "Emma");
    strcpy(e[4].adresse, "8, place Bellecour, Lyon");
    e[4].note1 = 18.0f; e[4].note2 = 17.25f;

    for (int i = 0; i < NB; i++) {
        printf("Etudiant.e %d :\n", i + 1);
        printf("Nom : %s\n", e[i].nom);
        printf("Prenom : %s\n", e[i].prenom);
        printf("Adresse : %s\n", e[i].adresse);
        printf("Note 1 : %.1f\n", e[i].note1);
        printf("Note 2 : %.1f\n\n", e[i].note2);
    }
    return 0;
}
