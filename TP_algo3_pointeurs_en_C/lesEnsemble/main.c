#include <stdio.h>
#include <stdlib.h>
#include "ensemble.h"

int main()
{ int choix , n , X ,pos,x; Ens *E;
    printf("*********  MENU  **********\n");
    printf("1.Creation d'ensemble \n");
    printf("2.Ajouter un element non deja exitant \n");
    printf("3.Tester si un element est dans l'ensemble \n");
    printf("4.destruction d'ensemble \n");
    printf("5.Reunion d'ensemble \n");
    printf("6.Intersection d'ensemble \n");
    printf("0. FIN DE TRAITEMENT !! \n==========================\n\n");
    do
    {
        printf("donner votre choix :");
        scanf("%d",&choix);
        switch(choix){
    case 1 :
        printf("donner le nombre maximum d'element que l'ensemble peut contenir :");
        scanf("%d",&n);
        E=Cree_ens(n);
        if(E)
         printf("Creation d'ensemble Reussi !!");
        else
          printf("Echec d'alloction de memoire cree!!");
        break;
    case 2:
        printf("donner l'element a ajouter dans l'ensemble :");
        scanf("%d",&X);
        pos=ajouter(E,X);
        if(pos==-2)
        printf("l'element se figure deja sur l'ensemble !");
          if(pos==-1)
          printf("Le nombre maximum d'element dans l'ensemble est atteinte !");
        if(pos>=0)
          printf("l'element a ete ajouter avec succes !!");
        break;
    case 3:
        printf("donner l'element a tester !");
        scanf("%d",&x);
        pos=test(E,x);
        if(pos!=-1)
            printf(" %d est belle et bien dans l'ensemble !");
        else
          printf("l'element n'exit pas !");
        break;
    case 4:

        break;
    case 5:
        break;
        case 6:
            break;
        case 0:
            printf("FIN DE TRAITEMENT !!");
            break;
        default:
            printf("ERREUR DE CHOIX !!");
            break;

    }
    printf("\n");
    }while(choix!=0);
    return 0;
}
