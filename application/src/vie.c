#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    // Récupère la valeur de l'ancien programme qui a occupé l'espace mémoire
    // Donc l'initialiser avant de lui donner une valeur
    int nombreDeVies, niveau;
    nombreDeVies = 5, niveau = 1;
    // Concernant les constante, il faut écrire en majuscule et après
    // déclaration la valeur ne bougera plus
    const int NOMBRE_DE_VIES_INITIALES = 5;

    printf("Il vous reste %d vies \n", nombreDeVies);
    printf("Vous avez %d vies et vous etes au niveau n° %d\n", nombreDeVies, niveau);
    nombreDeVies = 4;
    printf("*se prend un coup sur la tete*\n");
    printf("Oups, il ne vous reste à présent que %d vies\n", nombreDeVies);

    return 0;
}