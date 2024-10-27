#include <stdio.h>
#include <stdlib.h>

int main()
{ int i;
   float t1[10],t2[10],*p,*p1;
   for(p=t2,i=1;p<t2+5;p++,i++)
   { printf("donner l'element %d: ",i);
    scanf("%f",p);
   }
   for(p=t1;p<t1+5;p++)
      *p=0;
      p=t1; p1=t2;
   for(p1=t2;p1<t2+5;p1++)
    { if(*p1>0)
      *p++=*p1;
    }
    printf("le nouveau tableau :\n");
    for(p=t1;p<t1+5;p++)
      printf("%.1f  ",*p);
    return 0;
}
