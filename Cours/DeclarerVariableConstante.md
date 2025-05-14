# Les variables et constantes

## Typage des variables et constantes

L'ordinateur ne sait traiter que des nombres :

* les **nombres entiers positifs et négatifs**, comme 45 ou -87 ;
* les **nombres décimaux** positifs ou négatifs, comme 75,909 ou -76,9.

Lorsque vous lui demandez de stocker un nombre, vous devez dire de quel type il est.

Voici les principaux types de variables existant en langage C, que l'on peut classer en deux catégories :

* ceux qui permettent de stocker des nombres entiers : `signed char`  ,`int`  ,`long` ;
* ceux qui permettent de stocker des nombres décimaux (aussi appelés "nombres flottants") : `float`  ,`double` .
*

**Le tableau ci-dessous montre les fourchettes de valeurs minimales et maximales garanties par le langage :**


| Nom du type   | Minimum           | Maximum           |
| ------------- | ----------------- | ----------------- |
| `signed char` | -128              | 127               |
| `int`         | -32 768           | 32 767            |
| `long`        | -2 147 483 648    | 2 147 483 647     |
| `float`       | 1.17549 x 10^-38  | 3.40282 x 10^+38  |
| `double`      | 2.22507 x 10^-308 | 1.79769 x 10+308^ |

**Pour les types entiers ( `signed char`, `int`, `long`…), il existe d'autres types dits `unsigned`(non signés) qui, eux, ne peuvent stocker que des nombres positifs. Pour les utiliser, il suffit d'écrire le mot `unsigned` devant le type :**


| `unsigned char` | 0 à 255           |
| --------------- | ------------------ |
| `unsigned int`  | 0 à 65 535        |
| `unsigned long` | 0 à 4 294 967 295 |

Les `unsigned` sont des types qui ont le défaut de ne pas pouvoir stocker de nombres négatifs, mais l'avantage de pouvoir stocker des nombres deux fois plus grands (`signed char` s'arrête à 127, tandis que `unsigned char` s'arrête à 255, par exemple).

#### Mais pourquoi autant de type ?

Quand on dit à l'ordinateur qu'on a besoin d'une variable de type `char`, on prend moins d'espace en mémoire que si on avait demandé une variable de type `int`.

Toutefois, c'était utile surtout à l'époque où la mémoire était limitée. Aujourd'hui, nos ordinateurs ont largement assez de mémoire vive pour que ça ne soit plus vraiment un problème. Il ne sera donc pas utile de se prendre la tête pendant des heures sur le choix d'un type. Si vous ne savez pas si votre variable risque de prendre une grosse valeur, mettez `int` ou `double` pour un flottant.

```
> [!NOTE]
> En résumé, on fera surtout la distinction entre nombres entiers et flottants :
> * pour un nombre **entier**, on utilisera le plus souvent `int`;
> * pour un nombre **flottant**, on utilisera généralement `double`
```

## Déclarer une variable

```c
int nombreDeVie;
nombreDeVie = 5;
```

**A savoir que la variable prend la valeur de l'ancien programme ayant occupé l'espace sur la mémoire vive qu'elle vient de prendre. Il faut donc la déclarer et par la suite lui attribuer une valeur**

## Déclarer une constante

Le nom d'une constante est écrite en majuscule (convention) et on lui donne une valeur directement qui ne changera plus par la suite.

```c
const int NOMBRES_DE_VIES = 5;
```

## Afficher les varables/constances

On utilise en fait `printf` de la même manière, sauf que l'on rajoute un symbole spécial à l'endroit où l'on veut afficher la valeur de la variable :

```c
printf("Il vous reste %d vies", nombreDeVies);
```


Ce « symbole spécial » est en fait un `%`  suivi d'une lettre (dans mon exemple, la lettre `d`).

Cette lettre permet d'indiquer ce que l'on doit afficher.

`d`  signifie que l'on souhaite afficher un `int`.

Il existe plusieurs autres possibilités, mais pour des raisons de simplicité on va se contenter de retenir celles-ci :


| Format  | Type attendu   |
| ------- | -------------- |
| `"%d"`  | `int`          |
| `"%u"`  | `unsigned int` |
| `"%ld"` | `long`         |
| `"%f"`  | `float`        |
| `"%f"`  | `double`       |

#### Affichez plusieurs variables dans un même `printf`

Il est possible d'afficher la valeur de plusieurs variables dans un seul `printf`.

Il suffit d'indiquer des `%d` ou des `%f` là où vous voulez, puis d'indiquer les variables correspondantes dans le même ordre, séparées par des virgules :

```
printf("Vous avez %d vies et vous etes au niveau n° %d", nombreDeVies, niveau);
```

Attiention de bien mettre les variables dans le bon sens.


## Récupérez une saisie

Pour demander à l'utilisateur d'entrer quelque chose dans la console, on va utiliser `scanf`.

1. Vous devez mettre un format pour indiquer ce que l'utilisateur doit entrer : `int`, `float`...
2. Ensuite, vous devez indiquer le nom de la variable qui va recevoir le nombre.

Voici comment faire, par exemple :

```
int age = 0;
scanf("%d", &age);
```

On doit mettre :

* `%d` entre guillemets ;
* `&`  devant le nom de la variable qui va recevoir la valeur.

Notez que rien ne vous empêche de taper autre chose qu'un nombre entier :

* si vous rentrez un nombre décimal, comme 2.9, il sera automatiquement tronqué, c'est-à-dire que seule la partie entière sera conservée. Dans ce cas, c'est le nombre 2 qui aurait été stocké dans la variable ;
* si vous tapez des lettres au hasard ("éèydf"), la variable ne changera pas de valeur. Ce qui est bien ici, c'est qu'on avait initialisé notre variable à 0 au début. De ce fait, le programme affichera "0 ans" si ça n'a pas marché. Si on n'avait pas initialisé la variable, le programme aurait pu afficher n'importe quoi !
