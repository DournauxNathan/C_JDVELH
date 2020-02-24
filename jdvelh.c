#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/*Structure des articles du magasin referencant leur nom et leurs prix*/
struct Objet{
	char nomObjet[30];
	int prixObjet;
};
typedef struct Objet objet;

struct 	Chapitre {
	char description[500];
};
typedef struct Chapitre chap;

int main()
{
	int choixJoueur; 
	int chapitreActuelle;
	/*Systeme_Inventaire & Shop*/
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

	/*Systeme_Changement de chapitre*/
	chap chapitre2 = {"_________________\n\nCHAPITRE 2 - Le MAGASIN\n_________________\n\n"};
	chap chapitre3 = {"_________________\n\nCHAPITRE 3 - LE PIEGE\n_________________\n\n"};
	chap chapitre4 = {"_________________\n\nCHAPITRE 4 - L'AUBERGE\n_________________\n\n"};
	chap chapitre5 = {"_________________\n\nCHAPITRE 5 - LE TROLL\n_________________\n\n"};

	void deplacement(chap * leChapitre)
	{
		printf("%s\n\n", (*leChapitre).description);
		
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
	printf("Si vous souhaitez vous rendre cher le marchand, allez au chapitre 2 [1]\n");
	printf("Si vous voulez continuer votre chemin, allez au chapitre 3 [2]\n");
	printf("Si vous souhaitez allez a l'auberge, allez au chapitre 4 [3]\n");
	printf("......................\n\n");

	scanf("%d", &choixJoueur); printf("\n\n");

	/*Choix des chapitre*/
	switch (choixJoueur)
	{
		case 1 :
			deplacement(&chapitre2);
			chapitreActuelle = 2;

		break;

		case 2 :
			deplacement(&chapitre3);
				chapitreActuelle = 3;
		break;

		case 3 :
			deplacement(&chapitre4);
			chapitreActuelle = 4;
		break;

	}

	return 0;
}



/*	
	printf("_________________\n\n");
	printf("Magasin - Chapitre 2 \n\n");
	printf("_________________\n\n");
	/*Choix du menu: Magasin, Inventaire et Quittez
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
*/