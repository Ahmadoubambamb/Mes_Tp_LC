#include <stdio.h>
#include <stdlib.h>

void division (float x,float y,float *z,float *t,int *yes)
{
      *z=x/y ;
      *t=y/x ;

      if(y!=0&&x!=0)
      {

    *yes=1 ;

    //    printf("true=%d",yes);
      }
      else{
      *yes=0;
     //   printf("false=%d",yes);
          }
}
int main()
{ float a,b,c,d;
int e;
printf("donner donner deux valeurs a et b \n");
scanf("%f %f",&a,&b);
division (a,b,&c,&d,&e);
printf("bool=%d",e);
    return 0 ;
}
