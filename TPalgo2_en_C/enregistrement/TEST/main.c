#include <stdio.h>
#include <stdlib.h>
#include<math.h>
typedef struct
{
    char nom[20];
    char prenom[20];
     int age ;
}personne;
void etudiant(personne etud1[] ,int n, int *dif )
{  for(int i=0;i<n;i++){
     printf("donner le nom de l'etudiant %d\n ",i);
scanf("%s",etud1[i].nom);
printf("donner son prenom \n ");
scanf("%s",etud1[i].prenom);
printf("donner son age en ans \n");
scanf("%d",&etud1[i].age);
printf("=============================\n");
}
*dif=abs(etud1[0].age-etud1[1].age) ;
printf("la difference d'age entre %s   ET  %s  est %d ans ",etud1[0].prenom,etud1[1].prenom,*dif,etud1[1].prenom);
if(etud1[0].age>etud1[1].age)
    printf(" Waouhhh %s LEUMBEEE MAK NGA Dhh",etud1[0].age);
    if(etud1[0].age<etud1[1].age)
    printf(" Waouhhh %s LEUMBEEE MAK NGA Dhh",etud1[1].age);
}
int main()
{ personne etudiant1[100];
int diff,n ;
printf("donner le nombre d'etudient ");
scanf("%d",&n);
etudiant(etudiant1,n,&diff);
    return 0;
}
