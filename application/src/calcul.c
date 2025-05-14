#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Prototypes des fonctions
int triple(const int NOMBRE);
void calcul(int* nombre1, int* nombre2, int* addition, int* soustraction, int* multiplication, int* modulo);

int main(int argc, char *argv[])
{
    // Division flottante pour afficher un résultat décimal
    double resultat = 0;
    resultat = 5.0 / 2.0;
    printf("5/2 = %f \n", resultat);

    int nombre1, nombre2;
    printf("Entrez le numéro 1 : ");
    scanf("%d", &nombre1);
    printf("Entrez le numéro 2 : ");
    scanf("%d", &nombre2);

    int nombreTriple = triple(nombre1);
    printf("Le triple de %d est %d\n", nombre1, nombreTriple);

    // Variables de résultats à passer en pointeurs
    int addition = 0, soustraction = 0, multiplication = 0, modulo = 0;

    // Passage par adresse pour remplir les résultats dans la fonction calcul
    calcul(&nombre1, &nombre2, &addition, &soustraction, &multiplication, &modulo);

    printf("La somme de %d et %d est %d\n", nombre1, nombre2, addition);
    printf("La soustraction de %d et %d est %d\n", nombre1, nombre2, soustraction);
    printf("La multiplication de %d et %d est %d\n", nombre1, nombre2, multiplication);
    printf("Le modulo de %d et %d est %d\n", nombre1, nombre2, modulo);

    int compteur = 0;
    while (compteur < 10)
    {
        printf("Compteur est à : %d\n", compteur);
        compteur++;
    }

    return 0;
}

// Fonction qui retourne le triple d'un nombre
int triple(const int NOMBRE)
{
    // Le mot-clé 'static' peut être utilisé ici pour que la variable conserve sa valeur
    // entre plusieurs appels de la fonction. ⚠️ Ici ce n’est **pas nécessaire**
    // car la fonction retourne immédiatement le résultat.
    // On l'enlève donc pour éviter de figer la valeur.
    int RESULT = NOMBRE * 3;
    return RESULT;
}

// Fonction qui effectue plusieurs calculs et renvoie les résultats via des pointeurs
void calcul(int* nombre1, int* nombre2, int* addition, int* soustraction, int* multiplication, int* modulo)
{
    *addition = *nombre1 + *nombre2;
    *soustraction = *nombre1 - *nombre2;
    *multiplication = *nombre1 * *nombre2;
    *modulo = *nombre1 % *nombre2;
}
