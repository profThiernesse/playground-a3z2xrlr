# Journée Immersion

Dans le cadre de votre immersion, vous pouvez essayer de réaliser quelques manipulations de base en `C` à l'aide d'une librairie conçue pour créer des motifs dans un quadrillage appelé `paper`

## Manipuler les papers

Un `paper` est un quadrillage dans lequel on va pouvoir se déplacer et colorier des cases. Le "curseur" de coloriage se trouve initialement toujours dans le coin supérieur gauche.

Les fonctions permettant de manipuler un `paper` :
- `init_paper(nb_lignes,nb_colonnes,taille)` : Permet de créer un `paper` contenant `nb_lignes` lignes et `nb_colonnes` colonnes. `taille` est la dimension en pixel d'une case.
- `move_left()` : déplace le "curseur" de coloriage d'une case à gauche.
- `move_right()` : déplace le "curseur" de coloriage d'une case à droite.
- `move_down()` : déplace le "curseur" de coloriage d'une case vers le bas.
- `move_up()`  : déplace le "curseur" de coloriage d'une case vers le haut.
- `colorize()` : colorie la case où se trouve le "curseur" de coloriage. **Attention : on ne peut jamais colorier hors du `paper`**
- `change_color(rouge,vert,bleu)` : permet de définir la couleur de coloriage en fixant l'intensité des composantes rouge, verte et bleu.
- `display_paper()` : affiche le `paper`

### Exemple

@[Sample paper]({"stubs": ["main.c"],"command": "sh /project/target/run.sh", "project" : "sample"})


@[Manage with paper]({"stubs": ["main.c"],"command": "sh /project/target/run.sh", "project" : "paper"})