#include <stdio.h>
#include <stdlib.h>
typedef struct{
char nom_prod[20]; int prix_unit;
int nombr_art;
}ProduitsAchetes;
typedef ProduitsAchetes tab_produit[10];
typedef struct{ int jour,mois,annee;}JMA;
typedef struct
{
    int long numero ;
   tab_produit liste;
   JMA date ;
   char client;
}facture;
  void saisi(facture *une_facture)
  { int p;
       printf("donner le numero du facture :");
    scanf("%d",&(*une_facture).numero);
    do{
    printf("donner le nombre de produt achetes ");
    scanf("%d",&p);
    }while(p>10);
    for(int i=0;i<p;i++)
    { printf("donner le nom du produit %d :",i);
      scanf("%s",(*une_facture).liste[i].nom_prod);
      printf("donner le prix du %d article:",i);
      scanf("%d",&(*une_facture).liste[i].prix_unit);
        printf("donner le nombre d'article du %d produit :",i);
        scanf("%d",&(*une_facture).liste[i].nombr_art);
    }
    printf("donner le jour de l'achat");
    scanf("%d",&(*une_facture).date.jour);
    printf("donner le mois en chiffre svp ");
    scanf("%d",&(*une_facture).date.mois);
    printf("en suite l'annee :");
    scanf("%d",&(*une_facture).date.annee);
    printf("donner le nom du client :");
    scanf("%s",(*une_facture).client);
  }
int main()
{ facture une_facture ;
saisi(&une_facture);
    return 0;
}
