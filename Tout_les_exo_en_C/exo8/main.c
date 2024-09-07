#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Sentence.h"
int main()
{ tab *Tp;
    char ph[200];
    int pos, choix;
   /* printf("*********  MENU   ***********\n");
    printf("1 creation de Tableau \n");
    printf("2 ajout de phrase \n");
    printf("3 affiche du Tableau de phrase \n");
    printf("Trier le Tableau de phrase \n");
    printf("=======================================\n\n");*/

         Tp=creationP();
          if(Tp==NULL)
            printf("Pas assez de memoire !\n");
          else
            printf("Tableau cree avec succes !\n Vous pouverz-y ajouter des phrase\n");

          printf("Appuis sur la touche entre pour arreter l'ajout \n-----------------------\n");
             
            do{
             printf("donner une phrase a ajouter !\n");
            //fflush(stdin);
            fgets(ph,sizeof(ph),stdin);
             if(ph[0]=='\n')//strcmp(ph,"Fin")==0 ||strcmp(ph,"fin")==0 )
               break;
           pos=ajoutP(Tp,ph);
           if(pos==-1)
            printf("Erreur d'ajout !\n");
            
            }while(1);
            printf("\n----------------------\n Les phrases saisie sont:\n-----------------------------\n ");
           affiche(Tp);
            trier(Tp);
            printf("\n--------------------\n Apres le trie \n-------------------\n");
               affiche(Tp);
                 liberer(Tp);
    return 0;
}

