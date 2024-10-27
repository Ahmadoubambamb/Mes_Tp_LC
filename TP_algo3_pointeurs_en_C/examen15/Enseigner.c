#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Enseigner.h"

Enseignant *CreationE(char *nom,char *prenom,char *dipl)
{ Enseignant *E; int i;
 E=(Enseignant*)malloc(sizeof(Enseignant));
 if(E==NULL)
   return NULL;
   strcpy(E->nom,nom);
   strcpy(E->prenom,prenom);
   strcpy(E->diplome,dipl);
 E->nbDeMat=0;
 E->matiere=NULL;
   return E;
}
void Destruction(Enseignant *E)
{
    if(E)
    { for(int i=0;i<E->nbDeMat;i++)
       if(E->matiere[i])
         free(E->matiere[i]);
        free(E->matiere);
        free(E);
        printf("destruction reussi !");
    }
}
void affiche(Enseignant *E)
{  int i;
     printf("****** Voici les donnees de l'enseignant *******\n");
      printf(" nom : %s \n prenom : %s \n Diplome :%s \n",E->nom,E->prenom,E->diplome);
       printf("****** les Matieres qu'il(elle) enseigne ****** \n");
for(i=0;i<E->nbDeMat;i++)
 printf("%s\t",E->matiere[i]);
}
char *Recup_diplom(Enseignant *E)
{ char *d , *nom;
  nom=E->nom;
if(Recherche(E,nom)!=-1)
  d=(char*)malloc(strlen(E->diplome)+1);
  if(d==NULL)
    return NULL;
  strcpy(d,E->diplome);
  return d;
}

char *Recu_imatiere(Enseignant *E , int pos)
{ char *M;
    if(pos>0)
    { M=(char*)malloc(strlen(E->matiere[pos-1])+1);
       if(M==NULL)
         return NULL;
        strcpy(M,E->matiere[pos-1]);
        return M;
    }
    else
     return NULL;
}

int ajouter(Enseignant *E, char *M)
{ E->matiere=(char**)realloc(E->matiere,(E->nbDeMat+1)*sizeof(char*));
  if(E->matiere==NULL)
    return -1;
    E->nbDeMat++;
    E->matiere[E->nbDeMat-1]=(char*)malloc(strlen(M)+1);
    if(E->matiere[E->nbDeMat-1])
   strcpy(E->matiere[E->nbDeMat-1],M);
   return (E->nbDeMat-1);
}

Enseignant *copie(Enseignant *E)
{ Enseignant *Ecop;
  Ecop=(Enseignant*)malloc(sizeof(Enseignant));
  if(Ecop==NULL)
    return NULL;
    Ecop=E;
   return Ecop;
}

int Recherche(Enseignant *E , char *nom)
{
    if(E->nom==nom)
     return 1;
    else
        return -1;
}

void saisie(char *nom,char *prenom,char *dp)
{ printf("donner le nom de l'enseignant :");
  fflush(stdin);
  gets(nom);
   printf("donner le prenom de l'enseignant :");
   fflush(stdin);
  gets(prenom);
   printf("donner le diplome de l'enseignant :");
   fflush(stdin);
  gets(dp);
  /*do{
  printf("Donner le nombre de matiere \n NB: l'enseignant peut enseigner jusqu'a 5 matiere:");
  scanf("%d",&n);
  }while(n<=0);
  matiere=(char**)malloc(n*sizeof(char*));
  if(matiere)
    for(int i=0;i<n;i++)
    { printf("donner la matiere numero %d :",i+1);
       matiere[i]=malloc(30);
        fflush(stdin);
        gets(matiere[i]);*/
    }
