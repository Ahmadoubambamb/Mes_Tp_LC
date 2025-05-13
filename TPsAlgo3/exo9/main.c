#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "fonction.h"//t[3]={2,34,5,}
int main()
{ int choix;
    float a ,b ;
tab T[3]={{.numero=1 , .fonc=surf_rect},{ .numero=2, .fonc=surf_tria},{.numero=3, .fonc=surf_disq}};
printf("*************  MENU  **********\n");
printf("1.Calcul de surface \n");
printf("2.Calcul de triangle \n");
printf("3.Calcul de disque \n");
do
{ //system("CLEAR");
    printf("donner votre choix et tape 0 pour ne arreter:");
scanf("%d",&choix);
if(choix==0)
    break ;
    if(choix<0 ||choix >3)
    printf("choix erronner !!\n");
if(T[choix-1].numero==choix)
{ printf("donner les valeurs a et b :");
    scanf("%f",&a);
    scanf("%f",&b);
    printf("le resultat demander sur %.1f et %.1f est : %.1f \n",a,b,T[choix-1].fonc(a,b));

}
 //system("PAUSE");

}while(1);
return 0 ;
}
