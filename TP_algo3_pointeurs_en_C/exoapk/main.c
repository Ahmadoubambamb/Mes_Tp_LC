#include <stdio.h>
#include <stdlib.h>
char cherche(char*car)
{int i=0;
  while(car[i]!='\0')
  { if(car[i]=='c')
     car[i]='r';
     i++;
  }
    return car;
}
int main()
{  char ch[100];
printf("donner une chaine :");
gets(ch);
   cherche(ch);
   puts(ch);
    return 0;
}
