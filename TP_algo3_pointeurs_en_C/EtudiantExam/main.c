#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Etudiant.h"
int main()
{ int choix ,numero ,pos ,numR;
char nom[30] ,prenom[30];
DATE date;
 etudiant EtdA , *Etdt;
  Classe *Cvide;
 printf("=========== MENU ===============\n");
   printf("1.Creation D'un Etudiant \n");
   printf("2.Creation D'une classe vide \n");
   printf("3.ajouter un etudiant  dans la class \n");
   printf("4.recherche d'un etudiant \n");
   printf("0.  FIN   \n");
   printf("=======================================\n");
   do
    {  //system("CLS");
         printf("donner votre choix :");
         scanf("%d",&choix);
   switch(choix)
   { case 1:
       saisie(nom,prenom,numero,date);
      Etdt=Creation_Etud(nom,prenom,date,numero);
       if(Etdt)
        printf("Creation reussi !");
       else
        printf("echec de creation Erreur sur allocation !");
       break;
    case 2:
        Cvide=class_vide();
        if(Cvide==NULL)
          printf("l'allocation de la memoire a echoue !");
        else
            printf("la class a ete cree avec succes !");
        break;
    case 3:
        saisie(nom,prenom,numero,date);
        EtdA.date=date;
        strcpy(EtdA.nom,nom);
        strcpy(EtdA.prenom,prenom);
        EtdA.numero=numero;
   pos=rajouter(Cvide,EtdA);
   if(pos==-1)
    printf("erreur d'allocation  !");
    if(pos==-2)
    printf("l'etudiant ajouter exit deja!");
   if(pos>=0)
    printf("Etudiant rajouter avec succes a la position %d!!",pos+1);
        break;
    case 4:
        printf("donner le numero de l'etudiant a rechercher:");
        scanf("%d",&numR);
        //EtdA.numero=numR;
        etudiant *ET=recherche(Cvide,numR);
        if(ET==NULL)
          printf("l'etudiant ne figure pas dans la class!!");
        else{
         printf("l'etudiant s'y trouve! Et voici ces donner  \n");
         printf("nom \t prenom \t numero \t date de naissance \n");
         printf("%s \t %s \t %d \t %d/%d/%d \n",ET->nom,ET->prenom,ET->numero,ET->date.jour,ET->date.mois,ET->date.annee);
         }
        break;
    case 0:
        printf("Fin de traitement !\n");
        break;
    default :
        printf("choix erronner !!");
        break;
      }
   printf("\n");
   //system("PAUSE");
   }while(choix!=0);
    return 0;
}
