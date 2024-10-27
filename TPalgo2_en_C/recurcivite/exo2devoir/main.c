#include <stdio.h>
#include <stdlib.h>
int suit_fib(int n)
{ if(n==0||n==1)
 return 1 ;
 else
    return suit_fib(n-2)+suit_fib(n-1) ;

}

int main()
{ int n ,s ;
printf("donner nu nombre ");
scanf("%d",&n);
s=suit_fib(n);
printf("la valeur est %d ",s);
    return 0;
}
