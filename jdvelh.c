#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main()
{
	int choixJoueur; 




	/*Début de l'aventure textuel*/
	printf("\n");
	printf("...............\nReveille du personnages\n..............\n\n");

	printf("...............\nBlabla quetes\n..............\n\n");

	printf("...............\nDebut de l'aventure\n........\n\n");


	printf("_________________\n\n");
	printf ("CHAPITRE 1 - DEBUT DE L'AVENTURE\n"); 
	printf("_________________\n\n");

	printf("Blabl a homme - choix de dialgoue\n");

	printf("......................\n");
	printf("Choix 1\n");
	printf("Choix 2\n");
	printf("Choix 3\n");
	printf("......................\n\n");

	scanf("%d", &choixJoueur); printf("......................\n);

	switch (choixJoueur)
		{
			case 1 :
				printf("Chapitre 2 \n\n");
			break;

			case 2 :
				printf("Chapitre 3 \n\n");
			break;

			case 3 :
				printf("Chapitre 4 \n\n");
			break;

		}
}