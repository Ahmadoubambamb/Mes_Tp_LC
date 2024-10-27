#include <stdio.h>
#include <stdlib.h>
 int affice(int x)
{ int div,r;int i=1;  int p=0 ;
   div=x ;

 while(div>=10)
 {
    div=div/10 ;
    r=div%10 ;
    p=p+i*r;
    i=i*10 ;

 }
 printf("le plus a gauche est %d",div);
    return  p;
}

int main(void)
{ int n,m;
do
printf("donner un nombre ");

scanf("%d",&n);
m=n ;
m=affice(m);
    return 0;
}
