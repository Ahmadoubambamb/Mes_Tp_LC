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
{ int i,n,j,imin;
 int t[100];
    printf("donner la taille :");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    { printf("donner l'element %d ",i);
    scanf("%d",&t[i]);
    }
    for(i=0;i<=n-2;i++)
    { imin=i ;
      for(j=i+1;j<=n-1;j++)
        if(t[imin]>t[j])
        imin=j ;
        permuter(&t[imin],&t[i]);
    }
    affiche(&t,n);
    return 0;
}
