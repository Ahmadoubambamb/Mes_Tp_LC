#include <stdio.h>
#include <stdlib.h>
void somme(int x,int *y)
{ int i ;
     *y=0;
    for (i=1;i<=x;i++)

        *y=*y+i;
}
int main()
{
 int n,s;
    printf("donner un nombre !\n");
    scanf("%d",&n);
    somme(n,&s);
    printf("la somme des %d entiers consecutif est %d\n",n,s);


    return 0;
}
