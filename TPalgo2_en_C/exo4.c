#include <stdio.h>
#include <stdlib.h>

int plus_a_gauche(int n)
{ int rest = 0, dix = 1 , q=n , m;
   while(q > 10)
   {m = q%10;
      q /=10;
     rest += dix*m;
      dix *=10;
      if(q < 10)
       printf("%d est le plus a gauche \n",q);
     ;
      }
   return rest;
   }
   
int main()
{ int n , rest;
  printf("donner un nombre : ");
  scanf("%d",&n);
   rest = plus_a_gauche(n);
   printf("le reste est %d ", rest);
 return 0;
}