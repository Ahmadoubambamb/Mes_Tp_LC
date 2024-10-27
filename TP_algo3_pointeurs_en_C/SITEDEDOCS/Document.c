#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Document.h"
void saisie(int cle,char *val ,char **lmc ,int nmc)
{  int i;
  printf("donner le cle :");
 scanf("%d",&cle);
 printf("donner le nom du docs :");
 fflush(stdin);
 gets(val);
 printf("donner le nombre de mot-cles :");
 scanf("%d",&nmc);
 lmc=(char**)malloc(nmc*sizeof(char*));
    for(i=0;i<nmc;i++)
    { printf("donner le mot-cles numero %d :",i+1);
        lmc[i]=(char*)malloc(nmc*sizeof(char));
        fflush(stdin);
        gets(lmc[i]);
    }
}
DOCUMENT *creation_docs(int cle ,char *valeur ,char **mot_cles , int nmot_cles)
{ DOCUMENT *docs; int i;
  docs=(DOCUMENT*)malloc(sizeof(DOCUMENT));
  docs->list_mot_cles=(char**)malloc(nmot_cles*(sizeof(char*)));
    if(docs==NULL || docs->list_mot_cles==NULL)
    { printf("Erreur d'allocation de memoire !");
     return NULL;
     }
     docs->cle=cle;
    strcpy(docs->valeur,valeur);
    for(i=0;i<nmot_cles;i++)
    {docs->list_mot_cles[i]=(char*)malloc(strlen(mot_cles[i])+1);
    if(docs->list_mot_cles[i])
        strcpy(docs->list_mot_cles[i],mot_cles[i]);
    }
    docs->nbre_motsC=nmot_cles;
     return docs;
}
void ajout(DOCUMENT *docs,char *motcles)
{    docs->list_mot_cles=(char**)realloc(docs->list_mot_cles,(docs->nbre_motsC+1)*sizeof(char*));
  if(docs->list_mot_cles==NULL)
    printf("pas assez de memoire !");
    return;
    docs->nbre_motsC++;
   docs->list_mot_cles[docs->nbre_motsC-1]=(char*)malloc(strlen(motcles)+1);
    if(docs->list_mot_cles[docs->nbre_motsC-1])
        strcpy(docs->list_mot_cles[docs->nbre_motsC-1],motcles);
    else
        printf("l'allocation de la memoire est impossible !");
        return;
}
void afficheDocs(DOCUMENT d)
{ int i;
    printf("la cle du document est %d !\n",d.cle);
    printf("le nom du document est %s !\n",d.valeur);
    printf("le nombre de mots-cles est %d !\n",d.nbre_motsC);
    printf("voici les mot-cles !\n");
    for(i=0;i<d.nbre_motsC;i++)
        puts(d.list_mot_cles[i]);
}
