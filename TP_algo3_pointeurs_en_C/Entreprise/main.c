#include <stdio.h>
#include <stdlib.h>
#include "Entreprise.h"
int main()
{ int n;
  Entreprise E;
 printf("donner le nombre de personnel :");
 scanf("%d",&n);
 saisieM(&E,n);
return 0;
}
