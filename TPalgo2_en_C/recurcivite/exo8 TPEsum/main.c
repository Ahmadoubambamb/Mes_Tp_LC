#include <stdio.h>
#include <stdlib.h>
int sum(int t[],int n)
{ if(n==1)
return t[0];
else
  return t[n-1]+sum(t,n-1);
}
int main()
{ int tab[10],x,i,s;
printf("donner la taille ");
scanf("%d",&x);
for(i=0;i<x;i++)
{ printf("donner l'element %d :",i);
scanf("%d",&tab[i]);
}
s=sum(tab,x);
printf("la somme est : %d ",s);



    return 0;
}
