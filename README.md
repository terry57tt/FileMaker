# Créateur de makefile en C
Ce créateur de makefile vous permet de générer automatiquement un fichier makefile pour vos projets en C. Il prend en compte les arguments que vous lui fournissez pour personnaliser le makefile généré.

## Comment l'utiliser
Pour utiliser ce créateur de makefile, il suffit de lancer la commande suivante :
```
bash
./mk arg1 arg2
```
Où arg1, arg2, etc. sont les arguments que vous souhaitez passer au créateur. Ces arguments seront utilisés pour personnaliser le makefile généré.

## Qu'est-ce qu'un makefile
Un makefile est un fichier utilisé pour automatiser la compilation de projets en C. Il définit les cibles à compiler ainsi que les dépendances nécessaires et les commandes à exécuter pour compiler chacune de ces cibles.

## Exemple output
```
file: clean
	clang -std=c99 -Wall -Wextra -pedantic -g3 -fsanitize=address -c file.c
	clang -std=c99 -Wall -Wextra -pedantic -g3 -fsanitize=address file.o -o file
	./file

app: clean
	clang -std=c99 -Wall -Wextra -pedantic -g3 -fsanitize=address -c app.c
	clang -std=c99 -Wall -Wextra -pedantic -g3 -fsanitize=address app.o -o app
	./app

clean:
	rm -f *.o
	rm -f file app
```
