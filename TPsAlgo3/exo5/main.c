#include <stdio.h>
#include <stdlib.h>
#include "statistique.h"
int main()
{
    char phr[100],phr1[100],phr2[100];
    Tab_struct T;
    int f;
    STAT *P;
     //version avec les tableaux
    printf("=====Version avec les tableaux=======\n\n");


    printf("\nEntrer deux phrases quelconques:\n");
    printf("Tapez la premiere phrase:");
    getchar();
    fgets(phr1,99,stdin);
    tableau_stat(T,&f,phr1);
    for(int i=0;i<f;i++)
        {
           printf("%d %c\n",T[i].occ,T[i].lettre);
        }
    printf("Tapez la deuxieme phrase:");
    getchar();
    fgets(phr2,99,stdin);
    tableau_stat(T,&f,phr2);
    for(int i=0;i<f;i++)
        {
           printf("%d %c\n",T[i].occ,T[i].lettre);
        }
    f=anagramme_tab(phr1,phr2);
    if(f)
    {
        printf("\nLes statistiques des deux phrases sont semblables.");
    }
    else
    {
        printf("\nLes statistiques des deux phrases ne sont pas semblables.");
    }

}
