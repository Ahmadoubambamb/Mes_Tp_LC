#include <stdio.h>
#include <stdlib.h>
#include "Fonctions.h"
int main()
{ facture uneF,uneFact;
char nom[30]; int choix;

do
{ system("CLS");
    printf("========  MENU  ==========\n");
printf("1.saisie d'un facture \n");
printf("2.Ajouter un facture dans un fichier \n");
printf("donner votre choix :");
scanf("%d",&choix);
    switch(choix)
{case 1: saisirFact(&uneF);break;
  case 2: AjouterFact(&uneFact,&nom);break;
  system("PAUSE");
}
}while(choix!=0);

    return 0;
}
