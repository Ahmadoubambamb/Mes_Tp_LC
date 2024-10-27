#include <stdio.h>
#include <stdlib.h>
void permuter(int *x,int *y)
{ int temp ;
     temp=*x ;
   *x=*y;
   *y=temp;
}
void affiche(int *t,int n)
{ int i ;
for(i=0;i<=n;i++)
  printf(" T[%d] = %d \n",i,t[i]);
}
void tri_selection(int *t, int n)
{
int i, imin, j;
for (i = 0; i <=n ; i++)
{
imin = i;
for (j = i+1; j < n; j++)
if (t[j] < t[imin])
imin = j;
permuter(&t[i],&t[imin]);
}
}
int main(void)
{  int tab[100] , n ,i ;
printf("donner la taille du tableau ");
scanf("%d",&n);
for(i=0;i<=n;i++)
{ printf("donner l'element %d ",i);
  scanf("%d",&tab[i]);
}
 tri_selection(&tab,n);
printf("le tableau devient \n");
 affiche(&tab,n);
return 0;
}
