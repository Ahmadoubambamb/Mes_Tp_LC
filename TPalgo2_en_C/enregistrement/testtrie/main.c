#include <stdio.h>
#include <stdlib.h>
void permuter(int *x, int *y)
{ int temp;
  temp=*x;
  *x=*y;
  *y=temp;
}

int main()
{int i,n,x,j, t[100];
printf("donner la du tableau a trie :");
scanf("%d",&n);
for(i=0;i<n;i++){
  printf("donner t[%d]=",i);
  scanf("%d",&t[i]);}
for(i=1;i<n;i++)
{ x=t[i];
 for(j=i;j>0&& x<t[j-1];j--)
  t[j]=t[j-1];
   t[j]=x;
}
  for(i=0;i<n;i++)
  printf("%d   ",t[i]);
    return 0;
}
