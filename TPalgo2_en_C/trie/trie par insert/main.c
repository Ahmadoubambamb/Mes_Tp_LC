#include <stdio.h>
#include <stdlib.h>

void tri_par_insert(int *t,int n)
{ int i,j,x;
 for(i=1;i<=n-1;i++)
 {
    x=t[i];
    j=i;
    while(j>0 && t[j-1]>x)
    {
     t[j-1]=t[j];
     j--;
    }
    t[j]=x;
 }
}
void affiche(int *t,int n)
{ int i ;
for(i=0;i<=n-1;i++)
  printf(" T[%d] = %d \n",i,t[i]);
}
int main()
{ int t[100];
 int i,n ;
  printf("donner la taille du tab ");
  scanf("%d",&n);
 for(i=0;i<=n-1;i++)
 { printf("donner l'element %d :",i);
  scanf("%d",&t[i]);
 }
 tri_par_insert(t,n);
 affiche(t,n);
    return 0;
}
