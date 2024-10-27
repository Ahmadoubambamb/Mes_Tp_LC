#include <stdio.h>
#include <stdlib.h>

int main()
{


    char c[20];
   FILE *fp ;
   fp=fopen("mondoss.txt","w");
   if(fp==NULL)
   { printf("le fichier n'as pu etre ouvert !");
     exit(1);
   }
   else

   while(!feof(fp))
   {
     fgets(c,19,fp);
     printf("%s",c);
   }
 //  printf("nom du fichier\t %s\n ",__FILE__);
  // printf("la date %s",__TIME__);
    return 0;
}
