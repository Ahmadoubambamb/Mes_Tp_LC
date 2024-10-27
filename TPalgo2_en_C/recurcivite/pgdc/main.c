#include <stdio.h>
#include <stdlib.h>
int pgdc(int x,int y)
{ int r ;
 if(y==0)
 return x ;
   else
 r=x%y ;
  return pgdc(y,r);

}
int main(void)
{ int a, b, c;
do{
   printf("donner un nombre a :");
   scanf("%d",&a);
   printf("donner un nombre b inferieur a %d :",a);
   scanf("%d",&b);
}while(a<b);
c=pgdc(a,b);
printf("le pgdc de %d et %d est %d ",a,b,c);

    return 0;
}
