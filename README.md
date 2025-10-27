# Stratego_v2

Projet C++ qui vise à reproduire le jeu Stratego.

Badges

## Table des matières

- [Description](#description)
- [Règle du jeu](#règle-du-jeu)
- [Prérequis](#prérequis)
- [Installation / Compilation](#installation--compilation)
- [Utilisation](#utilisation)
- [Structure du dépôt](#structure-du-dépôt)
- [Tests](#tests)
- [Contribuer](#contribuer)
- [Licence](#licence)
- [Contact](#contact)

## Description

Le but de ce projet est de reproduire le jeu Stratego en C++
Création du projet le 27/10/2025

## Règle du jeu

### DISPOSITION DES PIÈCES
On doit disposer stratégiquement les pièces de façon à ce que l'attaque et la défense se déploient en faveur de chaque joueur qui les déplace.

Il y a deux camps: les rouges et les bleus. Étant donné que ce sont les rouges qui ouvrent le jeu, on tire d'abord au sort pour déterminer à quel joueur cette couleur sera attribuée.

Les joueurs se placent face à face, le carton du jeu entre eux, l'emblème Stratego étant tourné vers eux.
Chaque joueur place une pièce dans chaque case de la moitié du carton qui lui est attribuée, mais de telle façon que l'adversaire ne voit que les dos de ces pièces, afin que ce dernier ignore la valeur de chacune des pièces placées.

Les deux rangs de cases du milieu restent inoccupés, de même que les deux lacs à travers lesquels les deux armées ne peuvent pas se mouvoir au cours du jeu.

La disposition des pièces doit être étudiée d'après les règles du jeu d'une part, et suivant l'inspiration stratégique du joueur d'autre part.

### TOUR DE JEU
A tour de rôle, les joueurs peuvent déplacer une de leurs pièces d'une case à la fois, soit en avant ou en arrière, soit latéralement à gauche ou à droite. Seul l'éclaireur a le droit en un coup, de sauter par dessus plus d'une case libre, cependant pas plus loin que la case devant ou à côté d'un adversaire, ce par quoi il trahit naturellement son rang.

Le drapeau et les bombes ne doivent pas être déplacés et restent donc pendant tout le jeu sur les cases où ils ont été placés au début. Lorsque les bleus et les rouges se sont rapprochés (les pièces se trouvant soit face à face, soit à côté les unes des autres) le joueur peut prendre une de ses pièces et en touchant celle de son adversaire, il doit nommer le grade de sa pièce personnelle. Le joueur adverse répond en nommant le rang de sa pièce. Si c'est une pièce d'un rang inférieur, elle est alors enlevée du carton et la pièce de rang supérieur prend la place devenue libre. Si cependant la pièce de l'adversaire est d'un rang supérieur, alors la pièce de rang inférieur disparaît du carton et la pièce de rang supérieur reste à sa place.

En cas de rangs identiques, les deux pièces tombent.

L'espion tombe devant les éclaireurs, ceux-ci tombent devant les démineurs, les démineurs tombent devant les sergents, les sergents devant les lieutenants, etc. Si toutes les pièces se trouvent rapprochées, il n'est pas nécessaire d'attaquer immédiatement; l'initiative de l'attaque peut venir de chacun des deux joueurs. Chaque pièce, quoi que soit son rang, sauf un démineur, tombe contre une bombe qui, rappelons-le, ne doit pas être déplacée. Si l'un des joueurs vient à frapper une bombe de l'adversaire, celui-ci répond boum. Seul un démineur est en mesure de détruire une bombe, après quoi elle doit être retirée du jeu.

Le drapeau, qui ne doit pas être déplacé, tombe devant n'importe quelle pièce de l'adversaire. Le maréchal, le plus haut en grade, tombe seulement devant l'espion, s'il est pris par le dernier. Quand, au contraire, le maréchal touche à l'espion, ce dernier tombe.

Si un joueur ne peut plus déplacer aucune de ses pièces, par exemple lorsqu'il n'a plus que des bombes et le drapeau, il doit capituler. Une pièce ne peut être déplacée plus de cinq fois de suite entre les mêmes 2 cases. C'est le joueur qui réussit à s'emparer du drapeau de son adversaire, qui est le gagnant.

### TACTIQUE
D'après les règles du jeu ci-dessus indiquées, il ressort que la mise en place des pièces au début du jeu peut être déterminante pour l'issue de la partie. Il sera donc raisonnable d'entourer le drapeau de quelques bombes, afin de bien pouvoir le défendre. Pour tromper l'adversaire, on fera bien, toutefois, de disposer aussi deux ou trois bombes à une certaine distance de ce drapeau. Quelques pièces d'un grade supérieur en première ligne peuvent être d'une bonne valeur stratégique, mais un joueur qui perd rapidement ses officiers supérieurs se trouve dans une position défavorable. Les éclaireurs ont leur raison d'être en première ligne, car ils permettent de sonder la puissance de l'adversaire mais si l'on vient à les perdre, on doit joueur ensuite comme un aveugle.


## Prérequis

Outils et versions nécessaires :

- C++17 (ou version)
- Make
- Compilateur : GCC/Clang/MSVC
- Dépendances externes (SDL, Boost, etc.)

## Installation / Compilation

Exemple typique (CMake) :

```bash
git clone https://.../stratego.git
cd stratego
make
```

## Utilisation

Exemples d'exécution :

```bash
./bin/stratego    # exécutable principal
```

Paramètres courants et explications.

## Structure du dépôt

- src/ — code source
- include/ — en-têtes publics
- tests/ — tests unitaires
- docs/ — documentation
- build/ — dossier de build (ignoré par git)
- README.md
- LICENSE


## Tests


## Contribuer


## Licence


## Contact

Ethan Serville -> ethan.serville@etudiant.univ-reims.fr
