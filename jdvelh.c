#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h> //Ne pas oublier d'inclure le fichier time.h

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
	
	int monChoixArticle;
	int chapitreActuelle;

	int nTour;
	int vie = 30;
	int vieEnnemi = 50;

	int degat;
	degat = 5;

	/*Systeme_Changement de chapitre*/
		chap chapitre2 = {"_________________\n\nCHAPITRE 2 - Le MAGASIN\n_________________\n"};
		chap chapitre3 = {"_________________\n\nCHAPITRE 3 - LE PIEGE\n_________________\n"};
		chap chapitre4 = {"_________________\n\nCHAPITRE 4 - L'AUBERGE\n_________________\n"};
		chap chapitre5 = {"_________________\n\nCHAPITRE 5 - LE TROLL\n_________________\n"};

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
			objet pomme = {"Pomme",3};
			objet eau =  {"Eau",1};
			objet potionRouge = {"Potion rouge",5};
			objet potionVerte = {"Potion vert",10};
			//Armes
			objet epee =  {"Epee en bois",15};
			//Armures
			objet bouclier = {"Bouclier en bois", 25};

	/*Pointeur redirigeant vers le nom de l'objet*/
		void Achat(objet * monObjet)
		{
			orJoueur = orJoueur - (*monObjet).prixObjet;
		}

	/*Pointeur redirigeant vers le chapitre choisie par le joueur*/
		void deplacement(chap * leChapitre)
		{
			printf("%s\n\n", (*leChapitre).description);
		}

	/*Selectionner des articles*/
		void Select() {
			if((orJoueur >= 0 || orJoueur != 0) && monChoixArticle != 0)
			{	
				printf("Or %d\n", orJoueur);
				printf("-- -- -- -- -- -- --\n\n");
				printf("%s | Prix: %d | [1]\n\n", pomme.nomObjet, pomme.prixObjet);
				printf("%s | Prix: %d | [2]\n\n", eau.nomObjet, eau.prixObjet);
				printf("%s     | Prix: %d | [3]\n\n", potionRouge.nomObjet, potionRouge.prixObjet);
				printf("%s      | Prix: %d | [4]\n\n", potionVerte.nomObjet, potionVerte.prixObjet);
				printf("%s     | Prix: %d | [5]\n\n", epee.nomObjet, epee.prixObjet);
				printf("%s | Prix: %d | [6]\n\n", bouclier.nomObjet, bouclier.prixObjet);
				printf("-- -- -- -- -- -- --\n\n");

				//Choix: Selectionner un article ou revenir au menu précédent
				printf("Si l'un des articles vous interresse entre son numero\n\n");
				printf("Si aucun des ces articles ne vous interresse, rendez vous au chapitre 3 [0]\n\n");
				printf("-- --\n");
				printf("Votre choix: "); scanf("%d", &monChoixArticle);
				printf("-- --\n\n");

				if (monChoixArticle == 0)
				{	
					printf("Vous quitter le magasin et reprenez votre route\n");
					deplacement(&chapitre3);
					chapitreActuelle = 3;
				}

				if (monChoixArticle == 1 && orJoueur >= 3)
				{
					Achat(&pomme);
					printf("Vous achetez une %s\n\n"),pomme.nomObjet;
					nPomme++;
				}
				else if (monChoixArticle == 1 && orJoueur < 3) 
				{
					printf("Malheuresement vous n'avez plus assez d'or\n\n");
				}

				//Eau
				if (monChoixArticle == 2 && orJoueur >= 1)
				{
					Achat(&eau);
					printf("Vous achetez l'%s\n\n",eau.nomObjet);
					nEau++;
				}
				else if (monChoixArticle == 2 && orJoueur < 1) 
				{
					printf("Malheuresement vous n'avez plus assez d'or\n\n");
				}

				//Potion rouge
				if (monChoixArticle == 3 && orJoueur >= 5)
				{
					Achat(&potionRouge);
					printf("Vous achetez la %s\n\n",potionRouge.nomObjet);
					nPotionRouge++;
				}
				else if (monChoixArticle == 3 && orJoueur < 5) 
				{
					printf("Malheuresement vous n'avez plus assez d'or\n\n");
				}

				//Potion verte
				if (monChoixArticle == 4 && orJoueur >= 10)
				{
					Achat(&potionVerte);
					printf("Vous achetez la %s\n\n",potionVerte.nomObjet);
					nPotionVerte++;
				}
				else if (monChoixArticle == 4 && orJoueur < 10) 
				{
					printf("Malheuresement vous n'avez plus assez d'or\n\n");
				}

				//Epee en bois
				if (monChoixArticle == 5 && orJoueur >= 15)
				{
					Achat(&epee);
					printf("Vous achetez l'%s\n\n",epee.nomObjet);
					nEpee++;
				}
				else if (monChoixArticle == 5 && orJoueur < 15) 
				{
					printf("Malheuresement vous n'avez plus assez d'or\n\n");
				}

				//Bouclier en bois
				if (monChoixArticle == 6 && orJoueur >= 25)
				{
					Achat(&bouclier);
					printf("Vous achetez un %s\n\n",bouclier.nomObjet);
					nBouclier++;
				}
				else if (monChoixArticle == 6 && orJoueur < 25) 
				{
					printf("Malheuresement vous n'avez plus assez d'or, vous devez donc reprendre la route\n\n");
				}
			}

			if (orJoueur == 0 || orJoueur <= 0 )
			{
				printf("Vous ne disposez plus d'or. Pour continuer votre aventure, allez au chapitre 3\n\n");
				deplacement(&chapitre3);
				chapitreActuelle = 3;
			}
		}
	

	/*Combat avec l'ennemi*/
		void Combat() {
			while(vieEnnemi >= 0 || vie >= 0)
			{
				printf("__________________________\n");
				printf("Tour: %d \n", nTour);
		        printf("__________________________\n \n");
		        
				printf("PV: %d \n", vie);

				printf("Bandit: %d \n \n", vieEnnemi);

				//Action du joueur
				printf("Attaquer [1] ou Se defendre [2]\n \n");

				//Action du monstre
				srand(time(NULL));
		    	int choixMonstre = rand()%2+1;    //entre 1-3

				scanf("%d", &choixJoueur);
				printf("\n");
				switch (choixJoueur)
				{
					case 1 :
						printf("Vous attaquez le bandit !\n \n");

						if (choixMonstre == 2)
						{
							printf("Le bandit se defend\n");		
							vieEnnemi -= (degat / 4);
							printf("Votre n'attaque n'est pas tres efficace...\n");
						}
						else
						{
							vieEnnemi -= degat;
							printf("C'est super efficace !\n");
						}
					break;
				
					case 2 :
						if (choixMonstre == 1)
						{
							printf("Le bandit vous attaque !  \n\n");
							printf("Vous vous defendez ! \n\n");
							vie = vie - (degat / 4);
							printf("Vous venez de perdre %d points de vie \n\n", degat);
						}
						else
						{
							printf("Le bandit prepare quelque chose\n\n");
						}
					break;
				}

				nTour = nTour + 1;

				if(vie <= 0)
				{
					printf("Vous etes mort\n");
					break;
				}

				if(vieEnnemi <= 0)
				{
					printf("Vous avez vaincu le bandit !\n");
					break;
				}
			}	
	    	//Fin du jeu
			if(vie <= 0)
			{
				printf("Malheuresement le bandit vous a eu. Pendant que vous vous videz de votre sang il vole tous vos bien\n");
				printf("La quete qui vous a ete confie n'a pas pus etre remplis et la bete terrorise toute la contree\n\n");

				printf("_________________________________________________\n\n");
				printf("			GAME OVER\n");
				printf("_________________________________________________\n\n");

				return 0;
			}
			
			if(vieEnnemi <= 0)
			{
				printf("Si vous souhaitez continuer votre chemin, rendez vous au chapitre 5 [1]\n");
				printf("Si vous souhiatez reprendre des forces, rendez vous au chapitre 4 [2]\n");;
				
				scanf("%d", &choixJoueur); printf("\n\n");

				switch (choixJoueur)
				{
					case 1 :
						deplacement(&chapitre5);
						chapitreActuelle = 5;

					break;

					case 2 :
						deplacement(&chapitre4);
						chapitreActuelle = 4;
					break;
				}
			}

		}
	/*Début de l'aventure textuel*/
	printf("\n");
	printf("...............\nReveille du personnages\n..............\n\n");

	printf("...............\nBlabla quetes\n..............\n\n");

	printf("...............\nDebut de l'aventure\n........\n\n");

	/*CHAPITRE 1*/
	printf("_________________\n\nCHAPITRE 1 - DEBUT DE L'AVENTURE\n_________________\n\n");

	

	printf("Blabl a homme - choix de dialgoue\n");

	printf("......................\n");
	printf("Si vous souhaitez vous rendre chez le marchand, allez au chapitre 2 [1]\n");
	printf("Si vous voulez continuer votre chemin, allez au chapitre 3 [2]\n");
	printf("Si vous souhaitez allez a l'auberge, allez au chapitre 4 [3]\n");
	printf("......................\n\n");

	scanf("%d", &choixJoueur); printf("\n\n");

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


	if(chapitreActuelle == 2)
	{
		printf("Le marchand vous salue et vous propose les articles suivants :\n\n");
		Select();
	}

	if(chapitreActuelle == 3)
	{
		printf("Vous marchez tranquillement le long du chemin lorsque vous vous entendez des bruits au alentours...\n");
		printf("Soudain deux bandits sortent des buissons et saute sur vous...\n");
		Combat();
	}

	if(chapitreActuelle == 4)
	{
		printf("s\n");
	}

	if(chapitreActuelle == 5)
	{
		printf("s\n");
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