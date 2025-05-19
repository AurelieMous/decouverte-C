# Manipulez des fichiers à l'aide de fonctions en C

## 📘 Introduction

Le langage C permet de **lire et écrire dans des fichiers** grâce à des fonctions fournies par la bibliothèque standard `<stdio.h>`. Cela permet de **stocker des données de manière persistante**.

---

## 📂 Étapes de base pour manipuler un fichier

### 1. **Ouvrir un fichier** avec `fopen`

```c
FILE *f = fopen("donnees.txt", "r");
```

#### Principaux modes :


| Mode   | Description                          |
| ------ | ------------------------------------ |
| `"r"`  | Lecture seule                        |
| `"w"`  | Écriture (création ou écrasement) |
| `"a"`  | Ajout à la fin du fichier           |
| `"r+"` | Lecture + écriture                  |
| `"b"`  | Mode binaire (ex :`"rb"`,`"wb"`)     |

---

### 2. **Lire ou écrire dans un fichier**

#### Écriture :

```c
fprintf(f, "Nom : %s\n", nom);
fputs("Texte simple\n", f);
fputc('A', f);
```

#### Lecture :

```c
fscanf(f, "%s", nom);
fgets(ligne, 100, f);
caractere = fgetc(f);
```

---

### 3. **Fermer le fichier** avec `fclose`

```c
fclose(f);
```

---

## 🛡️ Vérification de l'ouverture

Toujours vérifier si le fichier s'est bien ouvert :

```c
if (f == NULL) {
    printf("Erreur lors de l'ouverture du fichier.\n");
    return 1;
}
```

---

## 🔀 Lecture jusqu'à la fin du fichier

```c
while (!feof(f)) {
    fgets(ligne, 100, f);
    printf("%s", ligne);
}
```

---

## ✅ Bonnes pratiques

* Toujours **vérifier si le fichier est NULL**
* Ne pas oublier de **fermer le fichier avec `fclose()`**
* Gérer les erreurs d'accès ou de permissions
* Utiliser `fgets`/`fputs` pour les chaînes (plus sûr que `scanf`/`printf`)

---

La manipulation de fichiers est une compétence essentielle pour réaliser des applications qui conservent ou chargent des données entre différentes exécutions du programme.
