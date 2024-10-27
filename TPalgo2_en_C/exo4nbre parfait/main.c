#include <stdio.h>
#include <stdlib.h>

int affichage (int y)
{
 int i,j,d ;
 for(j=1;j<=100000;j++){
   d=0 ;
 for (i=1;i<j;i++)
 {
     if(j%i==0)
     d=d+i ;
 }
     if(d==j){
        y=j ;
      printf("%d \n",y);
        }
 }
 return y ;
 }
 int main(void)

   { int n,p ;
   p=affichage (n);
   printf("sont les nombres parfait entre 1 et 10000");
  return 0;
}
