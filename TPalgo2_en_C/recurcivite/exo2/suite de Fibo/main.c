#include <stdio.h>
#include <stdlib.h>
 int fibo(int n)
{int U1;int U0; int U;
if(n==1)
 U1=1;
if(n==0)
   U0=1;
else{
    U=U0+U1;
  U0=U1;
  U1=U;
  printf("U=%d \n",U);
 return fibo(n-1);
}
}
int main()
{ int n,U;
printf("donner le nombre de terme :");
scanf("%d",&n);
U=fibo(n);

    return 0;
}
