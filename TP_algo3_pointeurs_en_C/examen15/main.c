#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Enseigner.h"

int main()
{ int choix,n,i,pos,R;
char nom[30],prenom[30],diplom[30] ,nomR[30] ,*recuM , *Rcdip;
char mat[30]; int p;
char **matieres;
Enseignant *Ens ,E, *cE ;
  printf("*********  MENU  *********\n");
    printf("1.Creation d'un enseidnant \n");
    printf("2.Affichage d'un enseidnant \n");
    printf("3.Recuperation de diplome d'un enseidnant \n");
    printf("4.Ajouter une matiere \n");
    printf("5.Recuperer une matiere d'un enseidnant \n");
    printf("6.Recherche d'un enseidnant \n");
    printf("7.Copier d'un enseidnant \n");
    printf("Destruction d'un  enseignant !\n");
    printf("0.FIN de Traitement \n==========================\n");
    do
    { printf("donner votre choix :");
      scanf("%d",&choix);
        switch(choix)
       { case 1:
           saisie(nom,prenom,diplom);
           Ens=CreationE(nom,prenom,diplom);
           if(!Ens)
            printf("Echec d'allocation dynamique !\n");
            else
            printf("Creation de Reussi !\n");
           break;
       case 2:
           affiche(Ens);
        break;
       case 3:
         Rcdip=Recup_diplom(Ens);
         printf("le Diplome de %s %s est : %s\n",Ens->prenom,Ens->nom,Rcdip);
        break;
       case 4:
         printf("donner la matiere a ajouter :");
         fflush(stdin);
         gets(mat);
         p=ajouter(Ens,mat);
         if(p!=-1)
            printf("matiere ajouter avec succes a la position %d !\n",p+1);
         else
            printf("Echec d'ajout de la matiere !\n");
        break;
       case 5:
         printf("donner la position du matiere a recuperer :");
         scanf("%d",&pos);
         recuM=Recu_imatiere(Ens,pos);
         printf("La mtatiere a la position %d est %s \n",pos,recuM);
        break;
        case 6:
        printf("donner le de l'enseignant rechercher :");
        fflush(stdin);
        gets(nomR);
        R=Recherche(Ens,nomR);
        if(R!=-1)
        printf("enseignant trouver !");
        else
            printf("l'enseignant ne s'y trouve !");
            break;
        case 7:
            cE=copie(Ens);
            if(cE)
                printf("copier avec succes !\n");
            else
                printf("echec !\n");
            break;
        case 8:
            Destruction(Ens);
            break;
       case 0 :
        printf("******* FIN DE TRAITEMENT ******\n");
        break;
       default :
        printf("choix erronner !\n");
        break;
       }
  printf("\n");
    }while(choix!=0);
    return 0;
}
