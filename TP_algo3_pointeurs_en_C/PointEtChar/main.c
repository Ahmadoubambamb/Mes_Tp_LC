#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>

/*void copier(char* ch) {
char chaine[100];
int longueur = strlen(ch);
if (longueur > 99) {
printf( " la chaine est trop longue\n");
return longueur;
}
strcpy(chaine, ch);
chaine[longueur - 1] = '2';
printf( " %s\n ", chaine);
}
void main() {
copier( "Voici la chaine numero 1 ");

 char buf[]="bambamboup",b[20];
 printf("donner votre nom :");
 gets(buf); i=0;
strncpy(b,buf,4);
puts(b);
strncpy(b,buf,5);
puts(b);

int a=strlen(buf);
int c=isupper('a');
printf("long=%d\n",a);
printf("valeur=%d",c);*/
int nbref(char *chaine)
{ int f,i=0;
    while(*(chaine+i)!='\0')
    {
    if(*(chaine+i)=='f')
     f++;
     i++;
    }
       return f;
}
int main()
{ char car[100]; int nbroccf;
printf("donner une chaine :");
gets(car);
nbroccf=nbref(car);
printf("le nombre d'occurence f est de %d !!!",nbroccf);

    return 0;
}
