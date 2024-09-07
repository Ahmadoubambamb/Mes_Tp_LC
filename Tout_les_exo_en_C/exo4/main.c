#include <stdio.h>
#include <stdlib.h>
#include "tab.h"
int main()
{ int *A,*B,m,n,a,e,x;
printf("Remplicez le tableau A \n");

 printf("donner le nombre d'element :");

 scanf("%d",&n);
 
 A=(int*)malloc(n*sizeof(int));
 
 saisie_tab(A,n);

 printf("Remplicez le tableau B \n");

 printf("donner le nombre d'element ");

 scanf("%d",&m);
 
 B=(int*)malloc(m*sizeof(int));

 saisie_tab(B,m);
A=(int *)realloc(A,m*sizeof(int));
a=ajout(A,B,n,m);

 printf("========================\nApres ajout !!\n");
 affichage(A,a);

printf("\n Donnez le nombre a eliminer :");

scanf("%d",&x);

e=elimination(A,a,x);

 printf("\n=======================\nApres Elimination :\n");

affichage(A,e);

//free(A);
//free(B);
return 0;
}	
