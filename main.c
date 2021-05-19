#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

int main()
{
    int continuer = 1;
    while (continuer==1)
    {
        int Somme_Mise , Numero_Mise, Numero_Mystere , i , a=0, Max=49, Min=0, Recette,quitter,b=1 ;
        char couleur;

        printf("\n \n Bonjour, bienvenue au jeu Casino\n===============================================\n");
        printf("\nVeuillez entrer la somme que vous voulez miser :");
        scanf("%d",&Somme_Mise);
    //    <>||
        while(a==0)
        {
            printf("Maintenant, choisissez un nombre compris entre 0 et 49 :");
            scanf("%d",&Numero_Mise);
            if(Numero_Mise>=0 && Numero_Mise<50)
            {
                if(Numero_Mise%2==0)
                {
                    printf("Votre Mise est de couleur: Noir \n");
                }
                else if(Numero_Mise%2==1)
                {
                    printf("Votre Mise est de couleur: Rouge \n");
                }
                a=1;
            }
            else
            {
                printf("Erreur. Veuillez entrer un nombre compris entre 0 et 49 \n");
                a=0;
            }

        }
        srand(time(NULL));
        Numero_Mystere = (rand()%(Max-Min+1))+Min;
        printf("la roulette tourne ........... et tombe sur : %d \n",Numero_Mystere);
        if(Numero_Mise==Numero_Mystere)
        {
            Recette = Somme_Mise * 3;
            printf("Bravo.Vous avez gagné:%d Fbu", Recette);
        }
        else if(Numero_Mystere%2==Numero_Mise%2)
        {
            Recette = Somme_Mise / 2;
            printf("Bravo.Vous avez gagné:%d Fbu \n \n", Recette);
        }
        else
        {
            printf("Dommage. Vous avez tout perdu.\n");
        }

        while(b==1)
        {
            printf("voulez vous continuer la partie 1=oui ou 0=non: ");
            scanf("%d",&quitter);

            if(quitter==1)
            {
                continuer=1;
                b=0;
            }
            else if(quitter==0)
            {
                continuer=0;
                b=0;
            }
            else
            {
                printf("erreur vous devez taper 0 ou 1\n");
                b=1;
            }

        }
    }
    return 0;
}
