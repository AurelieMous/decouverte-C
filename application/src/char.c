#include <stdio.h>
#include <stdlib.h>
#include <string.h> // bibliothèque qui contient de nombreuses fonctions dédiées aux calculs sur des chaînes.

// size_t est un type spécial qui signifie que la fonction renvoie un nombre correspondant à une taille.
size_t strlen(const char* chaine);

// l'ordinateur utilise la table ASCII pour convertir les lettres en nombres et inversement
int main(int argc, char *argv[])
{
    const char LETTRE_A = 'A';

    printf("%d\n", LETTRE_A);

    // \0 dit à l'orinateur que la chaine de caractère s'arrête ici
    char mot[] = {'S', 'A', 'L', 'U', 'T', '\0'};

    printf("%s \n", mot);

    // manière plus simple
    char bonjour[] = "Salut";
    printf("%s \n", bonjour);

    // avec stockage d'une variable par l'utilisateur
    char prenom[100];
    printf("Comment t'appelles-tu ? ");
    scanf("%s", prenom);
    printf("Salut %s, je suis heureux de te rencontrer ! \n", prenom);

    char chaine[] = "Salut tout le monde ! \n";
    int longueurChaine = 0;
    // On récupère la longueur de la chaîne dans longueurChaine
    longueurChaine = strlen(chaine);

    // On affiche la longueur de la chaîne
    printf("La chaine %s fait %d caracteres de long \n", chaine, longueurChaine);

    return 0;
}