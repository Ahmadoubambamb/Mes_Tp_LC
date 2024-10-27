#include <stdio.h>
#include <stdlib.h>
void affiche_inverse(int t[],int n)
{
  if(n>=0){
         printf("%d \n",t[n]);
     affiche_inverse(t,n-1);
    }
}
int main(void)
{ int tab[100],m ,i;
printf("donner est la taille du tableau ");
scanf("%d",&m);
for(i=0;i<=m;i++)
{  printf("donner l'element %d :",i);
 scanf("%d",&tab[i]);
}
printf("les elements du tableau sont \n");
affiche(tab,m);
printf("et inversement on a ceci : \n");
affiche_inverse(tab,m);
    return 0;
}
