#include <stdio.h>
#define nmax 100 
int main()
{ int t[nmax],*p,max,min,n,i;
printf("donner la taille du tableau :");
scanf("%d",&n);
for(p=t,i=1;p<t+n;p++,i++)
{ printf("donner l'element %d :",i);
 scanf("%d",p);
}
max=min=*t;
for(p=t+1;p<t+n;p++)
{
 max=(max<=*p ? *p:max);
 min=(min>=*p ? *p:min);
}
printf("le max=%d \tle min=%d :",max,min);
    return 0;

}
