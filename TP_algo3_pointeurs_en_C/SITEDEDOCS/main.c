#include <stdio.h>
#include <stdlib.h>
#include "SITE.h"

int main()
{ int choix ,cle ,nmc ,pos ,pos2 ,pos3;
 char val[128] ,**lmc ;
 Site *sit ,S1 ,S2 , *S;
 DOCUMENT d , *dc;
    printf("***********  MENU  ***********\n");
    printf("1.Creation de Site vide \n");
    printf("2.Insertion d'un document dans le Site \n");
    printf("3.recherche d'un document dans le Site \n");
    printf("4.Supression d'un document dans le Site \n");
    printf("5. Destruction d'un Site \n");
    printf("6.affichage d'un Site \n");
    printf("7.Reunion de deux Site \n");
    printf("8.Intersection de Deux Site \n");
    printf("9.Difference de deux Site \n");
    printf("0. Fin de traitement \n\n======================================\n");

    do
    {  printf("donner votre choix :");
    scanf("%d",&choix);
         switch(choix)
       { case 1:
           sit=creation_Svide();
           if(!sit)
            printf("Echec de creation de site desole !\n");
            else
            printf("L'operation, Creation de Site reussi avec succes !\n");
           break;
           case 2:
               saisie(cle,val,lmc,nmc);
               d=*creation_docs(cle,val,lmc,nmc);
               if(&d==NULL)
                printf("echec de creation de docs !");
               else
              pos=insertion(sit,d);
             if(pos==-1)
               printf("Echec d'alloction de memoire!");
              if(pos==-2)
                printf("le document y est deja !");
              if(pos>=0)
                printf("insertion reussi a la position %d du site",pos+1);
            break;
           case 3:
            printf("donner le cle du docs rechercher svp! :");
            scanf("%d",&d.cle);
            Site St ;
              St=*sit;
            pos2=recherche(St,d);
            if(pos2==-1)
              printf("Le docs ne s'y trouve pas !");
             else
               printf("Trouver a la position %d !",pos2+1);
            break;
           case 4:
              printf("donner la cle du document a supprimer :");
              scanf("%d",&d.cle);
              pos3=supression(sit,d);
              if(pos3==-1)
                printf("le document ne s'y trouve pas !");
              else
                printf("suprimer avec succes !");
            break;
           case 5:
            destruction(sit);
            printf("Site detruit !");
            break;
           case 6:
            afficheSite(sit);
            break;
           case 7:
            S1=*creation_Svide();
             if(&S1)
              printf("Remplicez le Site 1 :\n");
             saisie(cle,val,lmc,nmc);
             d=*creation_docs(cle,val,lmc,nmc);
             insertion(&S1,d);
             S2=*creation_Svide();
             if(&S2)
             printf("Remplicez le Site 2 :\n");
             saisie(cle,val,lmc,nmc);
             d=*creation_docs(cle,val,lmc,nmc);
             insertion(&S2,d);
             S=Union_site(S1,S2);
             if(!S)
                printf("Echec de Reunion ");
             else
                printf("reunion Reussi ");
            break;
           case 8:
               printf("vous voulez faire l'intersection de deux Site\n===========================\n");
              S1=*creation_Svide();
             if(&S1)
              printf("Remplicez le Site 1 :\n");
             saisie(cle,val,lmc,nmc);
             d=*creation_docs(cle,val,lmc,nmc);
             insertion(&S1,d);
             S2=*creation_Svide();
             if(&S2)
             printf("Remplicez le Site 2 :\n");
             saisie(cle,val,lmc,nmc);
             d=*creation_docs(cle,val,lmc,nmc);
             insertion(&S2,d);
             S=Intersection(S1,S2);
             if(!S)
                printf("Echec d'Intersection ou Intersection NULL !");
             else
                printf("Intersection Reussi !");
            break;
           case 9:
               printf("vous voulez faire l'intersection de deux Site\n===========================\n");
              S1=*creation_Svide();
             if(&S1)
              printf("Remplicez le Site 1 :\n");
             saisie(cle,val,lmc,nmc);
             d=*creation_docs(cle,val,lmc,nmc);
             insertion(&S1,d);
             S2=*creation_Svide();
             if(&S2)
             printf("Remplicez le Site 2 :\n");
             saisie(cle,val,lmc,nmc);
             d=*creation_docs(cle,val,lmc,nmc);
             insertion(&S2,d);
             S=Difference(S1,S2);
             if(!S)
                printf(" La differance  est  null !");
             else
                printf("Difference  Reussi Et non null!");
            break;
      case 0:
        printf("On suppose que vous avez terminer MERCI!\n Sayonara!");
      break;
        default : printf("Choix erronner !"); break;
       }
       printf("\n");

    }while(choix!=0);
    return 0;
}
