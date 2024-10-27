#include <stdio.h>
#include <stdlib.h>
#include "Etudiant.h"
#include <string.h>
void saisie(char *nom,char *prenom , int num ,DATE date)
{
     printf("donner le nom de l'etudiant :");
       fflush(stdin);
       gets(nom);
       printf("donner le prenom de l'etudiant :");
       gets(prenom);
       printf("donner le numero de l'etudiant :");
       scanf("%d",&num);
       printf("donner la date de naissance :\n");
       printf("jour  mois  annee \n");
       scanf("%d%d%d",&date.jour,&date.mois,&date.annee);
}
Classe *class_vide()
{ Classe *C;
    C=(Classe*)malloc(sizeof(Classe));
    if(C==NULL)
    return NULL;
    C->Etdts=NULL;
    C->nbre_Etd=0;
    return C;
}
etudiant *Creation_Etud(char *nom , char *prenom ,DATE Dt , int numero)
{ etudiant *Et ;
  Et=(etudiant*)malloc(sizeof(etudiant));
  if(Et==NULL)
    return NULL;
 strcpy(Et->nom,nom);
  strcpy(Et->prenom,prenom);
  Et->numero=numero;
  Et->date=Dt;
  return Et;
}
int rajouter(Classe *C , etudiant E)
{ etudiant *tmp ;
   if(recherche(C,E.numero))
    return -2;
    C->Etdts=(etudiant*)realloc(C->Etdts,(C->nbre_Etd+1)*sizeof(etudiant));
    if(C->Etdts!=NULL)
       {
     C->nbre_Etd++;
        tmp=Creation_Etud(E.nom,E.prenom,E.date,E.numero);
        C->Etdts[C->nbre_Etd-1]=*tmp;
        return (C->nbre_Etd-1);
       }
       else
            return -1;
}

etudiant *recherche(Classe *C , int num)
{ int i;
    for(i=0;i<C->nbre_Etd;i++)
    { if((C->Etdts[i].numero)==num)
       return (C->Etdts+i);
    }
       return NULL ;
}
