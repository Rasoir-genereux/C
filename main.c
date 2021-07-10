#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    srand(time(NULL));
    const int MIN=1;
    int nombreMAximum=100;
    int nombreMystere = 0;
    int continuerPartie=1;
    int niveau=0;
    int forfait=0;

    int mode=0;
    int nchoisi= 0; //Déclaration de la variable nchoisi
    int compteur=0;  //cette variable compte le nombre de coups


    printf("Choisissez votre niveau de difficulté\n 1= entre 1 et 100.\n  2 = entre 1 et 1000.\n 3 = entre 1 et 10000\n");
    scanf("%d", &niveau);

    if(niveau==1)
    {
        nombreMAximum=100;
    }

    else if(niveau==2)
    {
        nombreMAximum=1000;
    }

    else if(niveau==3)
    {
        nombreMAximum=10000;
    }

    nombreMystere = (rand() % (nombreMAximum - MIN + 1)) + MIN; //fonction pour le tri aléatoire


                do
                {

                printf("Quel mode voulez-vous jouer ?\n === Appuyer 1 pour 1 joueur === ou ===Appuyer 2 pour 2 joueurs\n");
                scanf("%d",&mode);

                }
                while (mode <1 && mode >2);


                if(mode==1)
                {

                while (nombreMystere!=nchoisi)
                {
                    while(continuerPartie==1)
                        {
                            if(niveau==3 && compteur==5)
                        {
                            printf("Voulez-vous connaitre le nombre mystere ?");
                            scanf("%d", &forfait);
                                if(forfait==1)
                                {
                                    printf("Le voici pauvre tafiole... %d \n", nombreMystere);
                                }
                        }

                        printf("Quel est le nombre mystere ? ");
                        scanf("%d", &nchoisi); //la variable nchoisi prendra sa première valeur
                        compteur++;



                        if (nombreMystere> nchoisi)
                            {
                                printf ("C'est plus !\n");
                            }
                        else if (nombreMystere< nchoisi)
                            {
                                printf ("C'est moins !\n");
                            }
                        else
                            {
                                printf ("Bravo, vous avez trouve le nombre mystere en %d coups !\n\n", compteur);

                                nombreMystere = (rand() % (nombreMAximum - MIN + 1)) + MIN;

                                do //Le joueur doit taper 1 ou 0
                                    {
                                    printf("Voulez-vous rejouer une partie ? \n Tapez 1 pour oui / 0 pour non\n");
                                    scanf("%d", &continuerPartie);
                                    }
                                while (continuerPartie >1 || continuerPartie< 0);

                                if (continuerPartie == 1)
                                    {
                                         continuerPartie = 1;
                                    }

                                else if (continuerPartie == 0)
                                    {
                                        continuerPartie = 0;
                                        printf("Au revoir\n");
                                    }

                            }


                        }

                }
            }

                else if (mode==2) //Le joueur a choisi le mode 2 joueurs
                    printf("joueur 1: Choisissez le nombre mystère");
                    scanf("%d", &nombreMystere);

                {
                       while (nombreMystere!=nchoisi)
                    {
                        while(continuerPartie==1)
                            {

                            printf("Joueur 2 : Quel est le nombre mystere ? ");
                            scanf("%d", &nchoisi); //la variable nchoisi prendra sa première valeur
                            compteur++;

                            if (nombreMystere> nchoisi)
                                {
                                    printf ("C'est plus !\n");
                                }
                            else if (nombreMystere< nchoisi)
                                {
                                    printf ("C'est moins !\n");
                                }
                            else
                                {
                                    printf ("Bravo joueur 2, vous avez trouve le nombre mystere en %d coups !\n\n", compteur);

                                    do //Le joueur doit taper 1 ou 0
                                        {
                                        printf("Voulez-vous rejouer une partie ? \n Tapez 1 pour oui / 0 pour non\n");
                                        scanf("%d", &continuerPartie);
                                        }
                                    while (continuerPartie >1 || continuerPartie< 0);

                                    if (continuerPartie == 1)
                                        {
                                            continuerPartie = 1;
                                            printf("joueur 1: Choisissez le nombre mystère");
                                            scanf("%d", &nombreMystere);

                                        }

                                    else if (continuerPartie == 0)
                                        {
                                            continuerPartie = 0;
                                            printf("Au revoir\n");
                                        }

                                }
                            }

                    }
                }




}
