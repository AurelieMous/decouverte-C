# 📌 Résumé : Le Préprocesseur en C

## 🔹 Généralités

Le préprocesseur est un programme qui modifie le code **avant la compilation**.

Les **directives de préprocesseur** commencent toutes par `#`.

---

## 🔹 `#include`

- Permet d’**inclure un fichier** dans un autre.
- Syntaxes :
  - `<stdio.h>` pour les fichiers systèmes/standard
  - `"monfichier.h"` pour les fichiers du projet

---

## 🔹 `#define`

- Définit une **constante de préprocesseur** (substitution texte).
- Avantages :
  - Ne prend pas de mémoire
  - Visible dans tout le fichier

### Exemple :

```c
#define TAILLE_MAX 1000
char buffer[TAILLE_MAX];
```

### Calculs dans les `#define` :

```c
#define LARGEUR 800
#define HAUTEUR 600
#define PIXELS (LARGEUR * HAUTEUR)
```

⚠️ Entourer les opérations de parenthèses.

---

## 🔹 Constantes prédéfinies

- `__LINE__` : numéro de ligne actuelle
- `__FILE__` : nom du fichier
- `__DATE__` : date de compilation
- `__TIME__` : heure de compilation

### Exemple :

```c
printf("Erreur ligne %d, fichier %s\n", __LINE__, __FILE__);
```

---

## 🔹 Macros

### 🔸 Sans paramètre :

```c
#define COUCOU() printf("Coucou");
```

### 🔸 Avec paramètres :

```c
#define MAJEUR(age) if (age >= 18) printf("Vous êtes majeur\n");
#define MAJEUR_NOM(age, nom) if (age >= 18) printf("Majeur: %s\n", nom);
```

### 🔸 Multi-lignes :

```c
#define HISTOIRE() printf("Ligne 1\n"); \
                   printf("Ligne 2\n");
```

---

## 🔹 Conditions de préprocesseur

Permet d'inclure/exclure du code selon des conditions :

```c
#if CONDITION
// code
#elif AUTRE_CONDITION
// autre code
#endif
```

---

## 🔹 `#ifdef` / `#ifndef`

### 🔸 Usage :

```c
#define WINDOWS

#ifdef WINDOWS
// code Windows
#endif

#ifndef LINUX
// code si LINUX n’est PAS défini
#endif
```

### 🔸 Protection contre les inclusions infinies :

```c
#ifndef DEF_MONFICHIER
#define DEF_MONFICHIER

// contenu du .h

#endif
```

---

## ✅ En résumé

- `#include` insère un fichier.
- `#define` crée des constantes ou macros.
- Des **macros paramétrées** permettent d’automatiser des blocs de code.
- Le **préprocesseur peut faire des conditions** avec `#if`, `#ifdef`, etc.
- Toujours **protéger les fichiers `.h`** avec `#ifndef`.

```

```
