#include <stdio.h>
#include <stdlib.h>
void affichage ( int x , int *d )
{
 int i ;
 for (i=1;i<=x;i++)
 {
     if(x%i==0){
     *d=i ;
     printf("%d est diviseurs de %d  \n",*d,x);
     }
 }
 }
int main(void)
{ int n , div ;
printf("donner un nombre \n");
scanf("%d",&n);
affichage(n,&div);

    return 0;
}
