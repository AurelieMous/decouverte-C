#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void triplePointer(int *pointerSurNombre);

int main(int argc, char *argv[])
{
    int nombre = 5;
    int *pointer = &nombre;

    triplePointer(pointer); // on envoie l'adresse de nombre à la fonction
    printf("%d", nombre); // on affiche la variable nombre. La fonction a directement modifier la variable
    // car elle connaissait son adresse

    return 0;
}

void triplePointer(int *pointerSurNombre)
{
    *pointerSurNombre *= 3; // on multiplie par 3 la valeur de nombre
}