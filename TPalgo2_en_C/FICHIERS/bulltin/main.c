#include <stdio.h>
#include <stdlib.h>
#include "fonction.h"
int main()
{ int choix ;
do{system("CLS");
printf("\n     ******MENU GESTION DES NOTES******** \n===============================\n");
printf("1. Nouvel etudiant\n");
printf("2. Affiche le bulletin de tout les etudiants\n");
printf("3.Affiche le bulletin d'un etudiant \n");
printf("4. Modifier le nom d'un etudiant \n");
printf("5. Supprimer un etudiant \n");
printf("6. Afficher la moyenne de la classe \n");
printf("7. Liste des Admis \n");
printf("0. fin du traitement \n==============================\n");
printf("donner votre choix :");
scanf("%d",&choix);
switch(choix)
{ case 1:
    ajouterEtu();
    break;
    case 2:
     bulletinT();
    break;
    case 3:
    bulletin1();
    break;
    case 4:
     modifierETU();
    break;
    case 5:
     supprimer();
    break;
    case 6:
    moyenneClass();
    break;
    case 7:
        listeAdm();
        break;
    case 0:
        printf("FIN du traitement ");
    break;
    default :
    printf("choix erronner !!!");
    break;

}
printf("\n");
system("PAUSE");
}while(choix!=0);
    return 0;
}
