#include <stdio.h>
#include <stdlib.h>
int echange(int *x,int *y)
{ int temp,x1,y1;
  if((*x)*(*y)>0)
  {
  temp=*x;
  *x=*y;
  *y=temp;
  return 1;
  }
    else
    if((*x)*(*y)<0)
    { x1=(*x)+(*y);
      y1=(*x)*(*y);
        *x=x1;
      *y=y1;
        return 2;
    }
}
int main()
{ int a,b,n;
 printf("donner une valeur a=");
 scanf("%d",&a);
  printf("donner une autre valeur b=");
 scanf("%d",&b);
 n=echange(&a,&b);
 if(n==1){
    printf("c'est le cas de permutation:\n");
    printf("a=%d   b=%d ",a,b);
     }
 if(n==2){
    printf("le cas des sommes et produits :\n");
    printf("la somme est a=%d   le produit est b=%d ",a,b);
      }
}
