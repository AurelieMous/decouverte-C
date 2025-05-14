# Résumé : Les Pointeurs en C

## 🔹 Qu’est-ce qu’un pointeur ?

Un **pointeur** est une variable qui **contient l’adresse mémoire** d’une autre variable.

```c
int a = 42;
int* p = &a; // p contient l’adresse de a
```

---

## 🔹 Déclaration de pointeurs

```c
int* p;    // pointeur vers un int
char* c;   // pointeur vers un char
float* f;  // pointeur vers un float
```

> Le `*` indique que la variable est un **pointeur**.

---

## 🔹 Opérateurs clés


| Symbole | Nom                | Rôle                                         |
| ------- | ------------------ | --------------------------------------------- |
| `&`     | Adresse            | Renvoie l’adresse d’une variable            |
| `*`     | Déréférencement | Accède à la valeur pointée par un pointeur |

```c
int a = 10;
int* p = &a;

printf("%d\n", *p); // affiche 10
```

---

## 🔹 Passage par adresse (modification dans une fonction)

```c
void increment(int* x) {
    (*x)++;
}

int main() {
    int a = 5;
    increment(&a);
    printf("%d", a); // affiche 6
}
```

---

## 🔹 Avantages

- Modifier des variables dans des fonctions
- Manipuler des tableaux, chaînes, structures dynamiques
- Nécessaire pour l’allocation mémoire dynamique (`malloc`, `free`)

---

## ⚠️ Bonnes pratiques

- Toujours initialiser un pointeur (éviter les pointeurs sauvages)
- Tester si un pointeur est `NULL` avant de l’utiliser
- Libérer la mémoire allouée dynamiquement avec `free`

---

## 🔹 Exemple complet

```c
#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 3, y = 5;
    swap(&x, &y);
    printf("x = %d, y = %d\n", x, y); // x = 5, y = 3
    return 0;
}
```

## Résumé avec l'exos

Sur une variable, comme la variable `age`  :

* `age` signifie : "Je veux la valeur de la variable `age`  " ;
* `&age` signifie : "Je veux l'adresse à laquelle se trouve la variable `age`  ".

Sur un pointeur, comme `pointeurSurAge`  :

* `pointeurSurAge` signifie : "Je veux la valeur de `pointeurSurAge`  " (cette valeur étant une adresse) ;
* `*pointeurSurAge` signifie : "Je veux la valeur de la variable qui se trouve à l'adresse contenue dans `pointeurSurAge`  ".
