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
int main()
{ int i,permut,n ;
 int tab[100];
 printf("donner la taille du tableau ");
 scanf("%d",&n);
 for(i=0;i<=n-1;i++)
 { printf("donner l'element %d ",i);
 scanf("%d",&tab[i]);
 }
   do
   { permut=0 ;
     for(i=1;i<=n-1;i++)
     if(tab[i-1]>tab[i])
        {
      permuter(&tab[i-1],&tab[i]);
       permut=1;
       }
   }while(permut==1);
   affiche(&tab,n);
    return 0;
}
