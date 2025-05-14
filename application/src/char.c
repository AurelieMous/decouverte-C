#include <stdio.h>
#include <stdlib.h>

// l'ordinateur utilise la table ASCII pour convertir les lettres en nombres et inversement
int main(int argc, char *argv[])
{
    const char LETTRE_A = 'A';

    printf("%d\n", LETTRE_A);

    int i = 0;

    // \0 dit à l'orinateur que la chaine de caractère s'arrête ici
    char mot[] = {'S', 'A', 'L', 'U', 'T', '\0'};

    printf("%s \n", mot);

    // manière plus simple
    char bonjour[] = "Salut";
    printf("%s \n", bonjour);

    // avec stockage d'un variable par l'utilisateur
    char prenom[100];
    printf("Comment t'appelles-tu ? ");
    scanf("%s", prenom);
    printf("Salut %s, je suis heureux de te rencontrer !", prenom);

    return 0;
}