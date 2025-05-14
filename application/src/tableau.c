#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// permet de définir une constante de préprocesseur, autrement dit, d'associer une valeur à un mot.
#define TAILLE_MAX 100

int main(int argc, char *argv[])
{
    int tableau[6], i=0;

    tableau[0] = 11;
    tableau[1] = 103;
    tableau[2] = 45;
    tableau[3] = 4;
    tableau[4] = 60;
    tableau[5] = 90;

    // si on écrit juste tableau on obtiendra l'adresse d'où il se trouve
    printf("Emplacement tableau : %d \n", tableau);

    // si on spécifie la case on aura la valeur
    printf("Valeur de la 3eme colonne : %d \n", tableau[2]);

    /*
    tableau[1]; // Renvoie la valeur de la seconde case (la première case étant 0)
    *(tableau + 1) ;// Identique : renvoie la valeur contenue dans la seconde case
    */

    // tableau dynamique a ne pas faire
    /* int colonne = 5;
    int tableau2[colonne]; */
    // mais plustot avec define
    int tableau2[TAILLE_MAX];

    for (i=0; i<6; i++)
    {
        printf("%d \n", tableau[i]);
    }

    return 0;
}