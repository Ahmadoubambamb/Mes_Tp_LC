#include <stdio.h>
#include <stdlib.h>

int main()
{ /*int n;
  do
  { printf("donner un nombre entre 1 et 3 :");
    scanf("%d",&n);
  }while(n<1||n>3);
  printf("merci d'avoir donner %d comme valeur compris entre 1 et 3\n",n);*/
  int n;
  do
  { printf("donner un nombre compris entre 10 et 20 :");
   scanf("%d",&n);
   if(n<10)
    printf("plus grand encore!!\n");
   if(n>20)
    printf("plus petit encore !!\n");

  }while(n<10||n>20);
  printf("merci d'avoir donner la valeur %d !!",n);

    return 0;
}
