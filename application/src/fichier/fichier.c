#include <stdlib.h>
#include <stdio.h>

// Pour manipuler les fichiers
// FILE* fopen(const char* nomDuFichier, const char* modeOuverture);

int main(int argc, char *argv[])
{
    // Il faut absolument récupérer ce pointeur pour pouvoir ensuite lire et écrire dans le fichier.
    FILE* fichier = NULL;

    // Le pointeur fichier devient alors un pointeur sur test.txt.
    fichier = fopen("test.txt", "r+");

    // À faire pour éviter un plantage si jamais le fichier n'hexiste pas
    if (fichier != NULL)
    {
        // On met la lecture/écriture ici
        // Fermer le fichier
        fclose(fichier);
    }
    else
    {
        printf("Erreur lors de l'ouverture du fichier !\n");
    }

    return 0;
}