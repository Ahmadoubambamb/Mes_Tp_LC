#include <stdio.h>
#include <stdlib.h>

 void main()
{ char c[20];
  int age; float moy;
   FILE *fp ;
   fp=fopen("etudiant.txt","a+");
   if(fp==NULL)
   { printf("le fichier n'as pu etre ouvert !");
     exit(1);
   }

   printf("donner votre nom :");
   fflush(stdin);
   gets(c);
   printf("donner votre age :");
   scanf("%d",&age);
  printf("donner votre moy:");
   scanf("%f",&moy);
   fprintf(fp,"%s\n%d\n%f",c,age,moy);
   rewind(fp);
   while(!feof(fp)){
    fscanf(fp,"%s\n%d\n%f",c,&age,&moy);
    printf("le nom est: %s\n",c);
     printf("l'age est: %d\n",age);
      printf("la moyenne est:%f\n",moy);
      printf("\n=====================================\n");
   }
   fclose(fp);
}
