#include <stdio.h>
#include <stdlib.h>
#include "tab.h"

void saisie_tab(int *t, int n)
{ int i=0; int *p;
 for(p=t;p<t+n;p++)
 {printf("donner l'element %d :",i+1);
  scanf("%d",p);
 }
}
int ajout(int *A, int *B, int n ,int m)
{ int *pA,*pB;
     pB=B;
  for(pA=A+n;pA<A+n+m;pA++)
    *pA=*pB++;	  
  return (n+m);
}	
int elimination(int *t,int n,int x)
{ int *p1,*p2;
    p2=t;
   for(p1=t;p1<t+n;p1++)
   {  if(*p1!=x)
       *p2++=*p1;	     
   }	
 
return p2-t;  

}	
void affichage(int *t ,int n)
{ int *p;
	for(p=t;p<t+n;p++)
        printf("%d  ",*p);		

}

