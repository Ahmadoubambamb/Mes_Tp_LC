#include <stdio.h>
#include <stdlib.h>

void sapin(int x,int y)
{ int i,j,p;
for(p=1;p<=x;p++)

 for(j=1;j<=y;j++)
 {
    for(i=1;i<=j;i++)

    printf("*");

 printf("\n");
}
}
  int main()
  { int m,l ;
      printf("donner le nombre de motif  :");
      scanf("%d",&m);
      printf("donner la longueur :");
      scanf("%d",&l);
      sapin(m,l);

    return 0;
}
