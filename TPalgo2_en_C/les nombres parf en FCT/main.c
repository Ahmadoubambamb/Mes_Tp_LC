#include <stdio.h>
#include <stdlib.h>

int parfait( int x)
{
 int i,yes  ;
 int d=0 ;
 for (i=1;i<x;i++)
 {
     if(x%i==0)

     d=d+i ;
 }
  if(d==x){
  yes=1;
  }
  else{
    yes=0 ;
  }
 return yes;
 }
    int main(void)

   { int n , bo;

   printf("donner un nombre \n");

   scanf("%d",&n);

 bo=parfait(n);

if(bo==1)
    printf("%d est un nombre est parfait ",n);
else
     printf("%d est un nombre qui n'est parfait ",n);
return 0;
}
