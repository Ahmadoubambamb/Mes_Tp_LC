#ifndef FONCTIONS_H_INCLUDED
#define FONCTIONS_H_INCLUDED
FILE *fic;
typedef struct
{ char nomPr[30];
 int prixU, nombrP;
}produitA;
typedef produitA tab_pr[10];
typedef struct
{int jour,mois,annee;
}jms;
typedef struct
{ int numFac;
   char nomClient[30];
   tab_pr listPr ;
   jms date ;
}facture;
FILE *fichier_Fac ;
void saisirFact(facture *uneF)
{ int p;
     printf("donner votre nom :");
 fflush(stdin);
 gets((*uneF).nomClient);
 printf(" jour de naissance :");
 scanf("%d",&(*uneF).date.mois);
  printf(" mois de naissance :");
  scanf("%d",&(*uneF).date.mois);
   printf(" annee de naissance :");
   scanf("%d",&(*uneF).date.annee);
   printf("donner le numero du facture :");
   scanf("%d",&(*uneF).numFac);
   do{
   printf("donner le nombre produit que vous avez acheter :");
   scanf("%d",&p);
   }while(p>10||p<=0);
   for(int i=0;i<p;i++)
   {
       printf("donner le nom du produit %d:",i);
       scanf("%s",&(*uneF).listPr[i].nomPr);
       printf("donner le nombre du Produit %d:",i);
       scanf("%d",&(*uneF).listPr[i].nombrP);
       printf("donner le prix de l'unite du produit %d :",i);
       scanf("%d",&(*uneF).listPr[i].prixU);
   }
}
void AjouterFact(facture *uneFact,char *nomFact)
{printf("donner le nom du Facture :");
fflush(stdin);
gets(nomFact);
fic=fopen("nomFact.txt","w");
 if(fic==NULL)
 {
     printf("Impossible d'ouvrir le fichier !!:");
     exit(1);
 }
 saisirFact(&uneFact);

 fclose(fic);
}

#endif // FONCTIONS_H_INCLUDED
