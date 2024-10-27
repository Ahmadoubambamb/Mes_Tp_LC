#include <stdio.h>
#include <stdlib.h>

int premier(int x)
{
    int i, nbdiv;
    nbdiv = 0;
    for(i=1; i <= x; i++){
        if(x%i == 0)
            nbdiv++;
    }
    if(nbdiv == 2)
        return 1;
    else
        return 0;
}
int main()
{
    int n, yes;
    printf("Donnez un nbre : ");
    scanf("%d", &n);
    yes = premier(n);
   if(yes==1)
        printf("le nombre %d est premier",n);
    else
        printf("le nombre %d n'est premier",n);
    return 0;
}
