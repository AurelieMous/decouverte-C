# 📌 Résumé : Les Tableaux en C

## 🔹 Définition

Un **tableau** en C est une structure de données qui permet de stocker une **collection de valeurs du même type** en mémoire contiguë.

---

## 🔹 Déclaration

### Tableau d'entiers

```c
int notes[5]; // tableau de 5 entiers
```

### Initialisation directe

```c
int notes[3] = {12, 15, 18};
```

### Initialisation partielle

```c
int notes[5] = {10, 20}; // les autres sont 0
```

---

## 🔹 Accès aux éléments

Les indices commencent à **0**.

```c
int notes[3] = {12, 14, 16};
printf("%d", notes[0]); // affiche 12
notes[1] = 20; // modifie la 2e valeur
```

---

## 🔹 Parcourir un tableau

### Avec une boucle `for`

```c
for (int i = 0; i < 3; i++) {
    printf("notes[%d] = %d\n", i, notes[i]);
}
```

---

## 🔹 Passage de tableaux à une fonction

Les tableaux se passent **par adresse implicite** :

```c
void afficherTableau(int tab[], int taille) {
    for (int i = 0; i < taille; i++) {
        printf("%d ", tab[i]);
    }
}
```

Appel :

```c
int valeurs[4] = {1, 2, 3, 4};
afficherTableau(valeurs, 4);
```

---

## 🔹 Tableaux multidimensionnels

```c
int matrice[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};
```

Accès :

```c
printf("%d", matrice[1][2]); // affiche 6
```

---

## ⚠️ Attention

- Les tableaux n'ont **pas de taille dynamique** : leur taille est fixée à la compilation sauf si alloués dynamiquement.
- Pour passer la taille à une fonction, il faut le faire **manuellement**.
- Pas de contrôle des limites : accéder à `notes[10]` provoque un **comportement indéfini**.

---

## 🔹 Allocation dynamique (avancé)

```c
#include <stdlib.h>

int* tab = malloc(sizeof(int) * 5); // tableau de 5 entiers dynamiques
if (tab != NULL) {
    tab[0] = 42;
    free(tab); // libération mémoire obligatoire
}
```

```

```

```
