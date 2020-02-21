#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/*Structure des articles du magasin referencant leur nom et leurs prix*/
struct Objet{
	char nomObjet[30];
	int prixObjet;
};
typedef struct Objet objet;

int main()
{
	int choixJoueur; 
	/*Systeme_Nnventaire & Shop*/
		int orJoueur = 50;

		/*Compteur d'objet*/
		int nPomme = 0;
		int nEau = 0;
		int nPotionRouge = 0;
		int nPotionVerte = 0;
		int nEpee = 0;
		int nBouclier = 0;

		/*Liste des articles proposés dans le magasin*/
			//Consommable
			objet pomme = {"Pomme",5};
			objet eau =  {"Eau",2};
			objet potionRouge = {"Potion rouge",5};
			objet potionVerte = {"Potion vert",10};
			//Armes
			objet epee =  {"Epee en bois",15};
			//Armures
			objet bouclier = {"Bouclier en bois", 25};

		/*Pointeur redirigant vers le nom de l'objet*/
		void Achat(objet * monObjet)
		{
			orJoueur = orJoueur - (*monObjet).prixObjet;
		}




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

	scanf("%d", &choixJoueur); printf("\n\n");

	switch (choixJoueur)
	{
		case 1 :
			printf("_________________\n\n");
			printf("Magasin - Chapitre 2 \n\n");
			printf("_________________\n\n");
			/*Choix du menu: Magasin, Inventaire et Quittez*/
			printf("BlaBlaBlaBla\n\n");
			printf("Que vendez-vous ? [1]  Inventaire [2]  Quittez [3] \n\n");
			printf("-- --\n");
			printf("Votre choix: "); scanf("%d", &choixJoueur);
			printf("-- --\n\n");

			switch (choixJoueur) 
			{
				case 1 :
					printf("Marchand: Des babioles, des petites choses...\n\n");
					printf("_____________________\n\n");
					printf("Or: %d\n\n", orJoueur);

					//Appel de la fonction Achat
					//Select();
				break;

				case 2 :
					//Inventaire();
				break;

				case 3 :
					printf("Marchand: A bientot !\n\n");
					return 1;
				break;
			}

		break;

		case 2 :
			printf("Bandits - Chapitre 3 \n\n");
		break;

		case 3 :
			printf("Auberge - Chapitre 4 \n\n");
		break;

	}

	return 0;
}