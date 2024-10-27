#include <stdio.h>
#include <stdlib.h>
void affiche(int t[],int n)
{
  if(n>=0){
     affiche(t,n-1);
     printf("%d \n",t[n]);
    }

}
void affiche_inverse(int tabl[],int N)
{
  if(N>=0){
         printf("%d \n",tabl[N]);
     affiche_inverse(tabl,N-1);
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
printf("et inversement on a : \n");
affiche_inverse(tab,m);
    return 0;
}
