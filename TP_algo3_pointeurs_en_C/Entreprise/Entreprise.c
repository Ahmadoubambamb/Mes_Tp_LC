#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Entreprise.h"
/*void saisie(char *nom ,char *prenom,char sexe , char *metier ,int AE , int salaire)
{

}*/
void saisieM(Entreprise *E ,int n)
{int i; E->N=n;
 E=(Entreprise*)malloc(sizeof(Entreprise));
 if(E==NULL)
 return;
E->M=(Membres_perso*)malloc(n*sizeof(Membres_perso));
if(E->M==NULL)
	return;
  for(i=0;i<n;i++)
  { printf("donner le nom :");
      fflush(stdin);
    scanf("%s",E->M[i].nom);
      printf("donner le prenom:");
      //fflush(stdin);
      scanf("%s",E->M[i].prenom);
     do{
      printf("donner le metier :");
      //fflush(stdin);
      scanf("%s",E->M[i].metier);
       }while(strcmp(E->M[i].metier,"Ingenieur")!=0 &&  strcmp(E->M[i].metier,"Secretaire")!=0 && strcmp(E->M[i].metier,"Technicien")!=0);
      do{
      printf("donner le sexe :");
      getchar();
      scanf("%c",&E->M[i].sexe);
	 }while(E->M[i].sexe!='F' && E->M[i].sexe!='H');
      printf("donner le nbre d'annees d'experience :");
      scanf("%d",&E->M[i].AE);
      printf("donner le salaire :");
      scanf("%s",E->M[i].salaire);
      printf("\n================================\n");
   }

}
