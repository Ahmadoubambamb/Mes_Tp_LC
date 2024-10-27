#include <stdio.h>
#include <stdlib.h>
void premier(int x , int *y)
{
    int ndiv ,i ;
    ndiv=0 ;
    for(i=1;i<=x;i++)
        if(x%i==0)
        ndiv=ndiv+1 ;
    if(ndiv==2)
      *y=1 ;
    else
      *y=0 ;
}

int main()
{ int n,yes ;
  do{
    printf("donner une valeur \n");
    scanf("%d",&n);
  }while(n<0);
    premier(n,&yes);
    if(yes==1)
        printf("le nombre %d est premier",n);
    else
        printf("le nombre %d n'est pas premier",n);
    return 0;
}
