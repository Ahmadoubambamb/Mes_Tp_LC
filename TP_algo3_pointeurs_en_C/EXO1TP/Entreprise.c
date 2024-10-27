#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Entreprise.h"

void saisie_TMembres(Entreprise E , int N)
{ int i;
  for(i=0;i<N;i++)
  {  printf("Donner son nom :");
    fflush(stdin);
    gets(E[i].nom);
    printf("donner son prenom :");
    gets(E[i].prenom);
    do{
    printf("donner le sexe :");
    getc(E[i].sexe);
      }while(E[i].sexe!='F' && E[i].sexe!='H');
    do{
    printf("donner son metier :");
    gets(E[i].metier);
     }while(strcmp(E[i].metier,"Ingenieur")!=0 &&  strcmp(E[i].metier,"Secretaire")!=0 && strcmp(E[i].metier,"Technicien")!=0);
    printf("donner son annee d'experience :");
    scanf("%d",&E[i].An_exp);
    printf("donner son salaire :");
    scanf("%d",&E[i].salaire);

  }

}

void Affiche_membres(Entreprise E ,int N)
{  int i;
    for(i=0;i<N;i++){
   printf("nom\t prenom\t sexe\t metier\t annee\t salaire\n");
 printf("%s\t %s\t %c\t %s\t %d\t %d \n",E[i].nom,E[i].prenom,E[i].sexe,E[i].metier,E[i].An_exp,E[i].salaire);
   }
}
void Affiche_membre_salaire_sup(Entreprise E ,int N)
{  printf("nom\t prenom\t sexe\t metier\t annee\t salaire\n");
    for(int i=0;i<N;i++)
    { if(E[i].salaire>300000)
        {
        printf("%s\t %s\t %c\t %s\t %d\t %d \n",E[i].nom,E[i].prenom,E[i].sexe,E[i].metier,E[i].An_exp,E[i].salaire);
        }
    }
}
void Affiche_info_femmeS(Entreprise E , int N)
{  printf("nom\t prenom\t sexe\t metier\t annee\t salaire\n");
    for(int i=0;i<N;i++)
  {if(E[i].sexe=='F' && strcmp(E[i].metier,"Secretaire")==0)
    printf("%s\t %s\t %c\t %s\t %d\t %d \n",E[i].nom,E[i].prenom,E[i].sexe,E[i].metier,E[i].An_exp,E[i].salaire);
  }

}
void Affiche_info_Ing(Entreprise E ,int N)
{  printf("nom\t prenom\t sexe\t metier\t     annee\t    salaire\n");
    for(int i=0;i<N;i++)
  {if(strcmp(E[i].metier,"Ingenieur")==0)
    printf("%s\t %s\t %c\t %s\t %d\t %d \n",E[i].nom,E[i].prenom,E[i].sexe,E[i].metier,E[i].An_exp,E[i].salaire);
  }

}
void Calcul(Entreprise E , int N)
{ int s=0; float mass;
    for(int i=0;i<N;i++)
    s= s+ E[i].salaire;
    mass=s/N;
    printf("La masse salaire de l'entrepise est %f ",mass);
    printf("\n");
}
