#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Entreprise.h"
int main()
{  int choix , N;
	Entreprise E;
       	printf("*********  MENU  ********\n");
    printf("1.Saisie des membres du personnel :\n");
   printf("2.Affichage des membres du personnel :\n");
   printf("3.Affichage des membres dont le salaire est sup a 300000 :\n");
   printf("4.Affichage des infos sur tout les femmes Secretaire :\n");
   printf("5.Affichage des infos sur tout les ingenieurs :\n");
   printf("6.Calcul de la masse salaire de l'entreprise :\n");
   do
    {printf("donner votre choix :");
     scanf("%d",&choix);	
      switch(choix)
      { case 1:
	      printf("donner le nombre de personnel de l'entreprise ");
	      scanf("%d",&N);
	   saisie_TMembres(E,N); 
	  break;
	      case 2:
	  Affiche_membres(E,N);
	 break;
	      case 3:
	   Affiche_membre_salaire_sup(E,N);
	   break;
	      case 4:
	    Affiche_info_femmeS(E,N); 
	    break;
	      case 5:
	    Affiche_info_Ing(E,N);
	    break;
	      case 6:
	    Calcul(E,N);
	    break;
	      case 0:
	 printf("==== FIN DU TRAITEMENT ====");
	 break;
	      default :
	   printf("Choix Erronner !!!");
	 break;

      }
      printf("\n");

    }while(choix!=0);  
  printf("femmes de pus de 5 ans d'experience\n");
   Affiche_femme_ing(E,N);
    return 0;
}

