// directives de préprocesseur
// Ces lignes demandent d'inclure des fichiers au projet, c'est-à-dire d'ajouter des fichiers pour la compilation.
// Ce sont des bibliothèques (ou lobrairies)
#include <stdio.h>
#include <stdlib.h>

// Correspond à la fonction principale du programme
int main(int argc, char *argv[])

// Ceci est une fonction entre les accolades
{
    // Ces lignes sont appelées instructions
    // \n pour retour a la ligne et \t pour tabulation
    printf("Bonjour!\n");

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


    // récupérer une donnée entrée par l'utilisateur
    printf("Quel age avez vous ?");
    // &age pour dire que c'est cette variable qui reçois la donnée
    int age = 0;
    scanf("%d", &age);
    printf("Vous avez %d ans.\n", age);

    // On doit passer les nombres entiers en decimal pour avoir un decimal en résultat
    double resultat = 0;
    resultat = 5.0 / 2.0;
    printf("5/2 = %f \n", resultat);

    int nombre1, nombre2;
    printf("Entrez le numéro 1 :");
    scanf("%d", &nombre1);
    printf("Entrez le numéro 2 :");
    scanf("%d", &nombre2);

    const int ADDITION = nombre1 + nombre2;
    printf("La somme de %d et %d est %d\n", nombre1, nombre2, ADDITION);

    const int SOUSTRACTION = nombre1 - nombre2;
    printf("La soustraction de %d et %d est %d\n", nombre1, nombre2, SOUSTRACTION);

    const int MULTIPLICATION = nombre1 * nombre2;
    printf("La multiplication de %d et %d est %d\n", nombre1, nombre2, MULTIPLICATION);

    const int MODULO = nombre1 % nombre2;
    printf("Le modulo de %d et %d est %d\n", nombre1, nombre2, MODULO);
    // Chaque programme, une fois terminé, retourne un chiffre
    // Si c'est 0 c'est que tout s'est bien passé
    return 0;
    // Le programme s'arrête
}