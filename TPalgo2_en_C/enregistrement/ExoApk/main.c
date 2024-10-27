#include <stdio.h>
#include <stdlib.h>
typedef struct
{ char prenom[20], nom[20];
 int long numero ;
  int long num_tel;
  int long code_assur;
}GestionFiche;

typedef GestionFiche Fiche_p[20];
saisi (Fiche_p t, int n)
{ int i ;
   for(i=0;i<n;i++){
    printf("donner son nom :");
   scanf("%s",&t[i].nom);
 printf("donner son prenom :");
   scanf("%s",&t[i].prenom);
    printf("donner le numero du patient :");
    scanf("%d",&t[i].numero);
    printf("donner son numero de telephone :\n");
     printf("le numero doit contenir 9 chiffre : \n +221");
      scanf("%d",&t[i].num_tel);
    printf("donner son code d'assurence :");
    scanf("%d",&t[i].code_assur);
    printf("=======================================\n");
   }
}
 affichage( Fiche_p t, int n)
 { int i ;
  printf("\n \n \n les donnees saisi sont : \n==============================\n");
  for(i=0;i<n;i++){
  printf("ceux du  suivant \n nom et penom du patient : %s  %s",t[i].nom,t[i].prenom);
  printf("\n numero du patient : %d",t[i].numero);
  printf("\n numero telephone du patient : +221%d ",t[i].num_tel);
  printf("\n le code d'assurence du patient : %d",t[i].code_assur);
  printf("\n==================================================\n  \n");
  }
 }
int main()
{ Fiche_p t ;
 int n;
 printf("donner le nombre de patient ");
 scanf("%d",&n);
 saisi(t,n);
 affichage(t,n);
    return 0;
}
