# Créez vos propres types de variables en C

## 📄 Introduction

En langage C, vous pouvez définir vos propres types de données pour mieux structurer et organiser les informations. Cela est essentiel pour écrire du code modulaire, lisible et maintenable.

---

## 🔧 Outils disponibles

### 1. `typedef`

Permet de créer un alias pour un type existant afin de simplifier le code :

```c
typedef unsigned int uint;
uint age = 25;
```

### 2. `struct` (structure)

Regroupe plusieurs variables de types différents sous un seul type :

```c
struct Personne {
    char nom[50];
    int age;
};

struct Personne p1;
```

Avec `typedef` pour simplifier l'utilisation :

```c
typedef struct {
    char nom[50];
    int age;
} Personne;

Personne p1;
```

### 3. `union`

Similaire à une structure, mais tous les membres partagent le même espace mémoire :

```c
union Data {
    int i;
    float f;
};
```

### 4. `enum` (enumeration)

Permet de définir un ensemble de constantes entières nommées :

```c
enum Couleur { ROUGE, VERT, BLEU };
enum Couleur c = VERT;
```

---

## ✅ Avantages

* Améliore la lisibilité du code
* Facilite la modélisation d'entités complexes
* Permet une meilleure organisation des données

---

## 📚 Conclusion

La création de types personnalisés en C est une bonne pratique pour structurer efficacement vos programmes. Elle vous permet de travailler avec des données plus complexes tout en conservant un code clair et compréhensible.

---

Souvenez-vous : bien définir vos types dès le début d'un projet peut éviter bien des erreurs plus tard !
