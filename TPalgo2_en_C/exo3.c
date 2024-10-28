#include <stdio.h>
#include <stdlib.h>

void nombre_premier(int n, int *vrai)
{ int i,j=0;
   for(i=1;i<=n/2;i++)
     if(n%i==0)
         j++;
     if(j>2)
      *vrai=1;
    else 
      *vrai=0;
}

int main()
{ int n , vrai;
printf("donner un entier :");
scanf("%d",&n);
   nombre_premier(n,&vrai);
   if(vrai)
  printf("%d est un nombre premier \n",n);
   else
  printf("%d n'est pas un nombre premier",n);
 return 0;
}
     