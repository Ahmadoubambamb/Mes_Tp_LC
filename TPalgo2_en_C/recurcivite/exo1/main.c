#include <stdio.h>
#include <stdlib.h>
int somme_entier(int n)
{if (n==0)
    return 0 ;
else
 return n+somme_entier(n-1);
}
int main()
{ int n,s ;
printf("donner un entier ");
scanf("%d",&n);
s=somme_entier(n);
printf("%d est la somme des %d entiers non nuls",s,n);

    return 0;
}
