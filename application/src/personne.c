#include <stdio.h>
#include <string.h>

struct Personne{
    char nom[100];
    char prenom[100];
    int age;
};
typedef struct Personne Personne; // On passe un alias pour éviter de taper struct à chaque fois
void changer_nom(Personne *personne);

int main(int argc, char *argv[]) {
    Personne personne_une;

    // Saisie des informations
    printf("Quel est votre nom ? : ");
    scanf("%99s", personne_une.nom);

    printf("Quel est votre prenom ? : ");
    scanf("%99s", personne_une.prenom);

    printf("Quel est votre age ? : ");
    scanf("%d", &personne_une.age);

    // Affichage
    printf("Bonjour %s %s, vous avez %d ans.\n", personne_une.prenom, personne_une.nom, personne_une.age);

    // Modification du nom via un pointeur
    Personne *personne_pointeur = &personne_une;
    changer_nom(personne_pointeur);

    printf("Nom modifié : %s %s\n", personne_une.prenom, personne_une.nom);

    return 0;
}

// On passe
void changer_nom(Personne *personne)
{
    printf("Entrez votre nouveau nom : ");
    scanf("%99s", personne->nom);
}