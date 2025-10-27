# Stratego_v2

Projet C++ qui vise à reproduire le jeu Stratego.

Badges

- build: ![build-status](#)
- license: ![license](#)

## Table des matières

- [Description](#description)
- [Prérequis](#prérequis)
- [Installation / Compilation](#installation--compilation)
- [Utilisation](#utilisation)
- [Structure du dépôt](#structure-du-dépôt)
- [Tests](#tests)
- [Contribuer](#contribuer)
- [Licence](#licence)
- [Contact](#contact)

## Description

Objectif du projet, fonctionnalités principales et état actuel (prototype, alpha, beta, stable).

## Prérequis

Outils et versions nécessaires :

- C++17 (ou version)
- CMake >= 3.x ou Make
- Compilateur : GCC/Clang/MSVC
- Dépendances externes (SDL, Boost, etc.)

## Installation / Compilation

Exemple typique (CMake) :

```bash
git clone https://.../Stratego_v2.git
cd Stratego_v2
mkdir build && cd build
cmake ..
cmake --build .
```

Options utiles :

- cmake -DCMAKE_BUILD_TYPE=Release ..
- ctest -C Release

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

Lancer la suite de tests :

```bash
cd build
ctest --output-on-failure
```

Indiquer framework utilisé (GoogleTest, Catch2, etc.).

## Contribuer

Bref guide :

- Fork → feature branch (feat/xxx) → commit clair → PR avec description
- Respecter le style (clang-format) et ajouter des tests
- Convention de commit (ex : Conventional Commits)

## Licence

Indiquer la licence (MIT, Apache-2.0, etc.) et inclure le fichier LICENSE.

## Contact

Ethan Serville -> ethan.serville@etudiant.univ-reims.fr

Notes de maintenance : ajouter CI, badges, guide de style et checklist pour PR afin de garder le dépôt propre.
