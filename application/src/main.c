// directives de préprocesseur
// Ces lignes demandent d'inclure des fichiers au projet, c'est-à-dire d'ajouter des fichiers pour la compilation.
// Ce sont des bibliothèques (ou lobrairies)
#include <stdio.h>
#include <stdlib.h>
// Bibliothèque mathématique
#include <math.h>

// déclaration d'une variable globale en dehors de main
// a éviter tout de même
int variableGlobale = 0;

// Les fonctions doivent être déclarés dans l'ordre
// on met void ici car elle ne renvoit rien et affiche directement la valeur
static int majeur(const int AGE)
// Ajout d'une condition
// Si vrai = 1 si faux = 0 pour l'ordinateur
{
    if (AGE >= 18)
    {
        return printf("Vous etes majeur !\n");
    }
    else
    {
        return printf("Ah c'est bete, vous etes mineur !\n");
    }
}

// Correspond à la fonction principale du programme
int main(int argc, char *argv[])
// Ceci est une fonction entre les accolades
{
    // Ces lignes sont appelées instructions
    // \n pour retour a la ligne et \t pour tabulation
    // récupérer une donnée entrée par l'utilisateur
    printf("Quel age avez vous ?");
    // &age pour dire que c'est cette variable qui reçois la donnée
    int age = 0;
    // Mon pointeur on le déclare a NULL pour l'initialiser
    int *agePointeur = NULL;

    scanf("%d", &age);
    agePointeur = &age;
    printf("Vous avez %d ans.\n", age);
    printf("Adresse contenue dans le pointeur : %p\n", (void*)agePointeur); // adresse de la variable age contenu dans le pointer
    printf("Valeur contenue dans le pointeur : %d\n", *agePointeur); // valeur contenue dans le pointeur
    printf("Adresse du pointeur lui-même : %p\n", (void*)&agePointeur); // adresse du pointer

    majeur(age);

    // Afficher l'adresse de la variable avec %p
    printf("L'adresse de la variable age est : %p", &age);
    // age représente la valeur
    // &age représente l'adresse

    // Chaque programme, une fois terminé, retourne un chiffre
    // Si c'est 0 c'est que tout s'est bien passé
    return 0;
    // Le programme s'arrête
}
