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
for(i=0;i<=n-1;i++)
  printf(" T[%d] = %d \n",i,t[i]);
}
void tri_bulles(int *t, int n)
{ int i,dernier ;
 dernier=n-1;
while(dernier >=0)
{
for(int i=1 ; i <=dernier ; i++)
{
if(t[i-1] > t[i])
permuter(&t[i],&t[i-1]);
}
dernier--;
}
}
int main(void)
{  int tab[100] , n ,i ;
printf("donner la taille du tableau ");
scanf("%d",&n);
for(i=0;i<n;i++)
{ printf("donner l'element %d ",i);
  scanf("%d",&tab[i]);
}
 tri_bulles(&tab,n);
 printf("le tableau devient \n");
 affiche(&tab,n);
return 0 ;
}
