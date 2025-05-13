#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Matrice.h"
int main()
{ matrice *M , *M1 , *M2, *Mpr;
int nc , nl , nc1 , nl1 ,nc2 , nl2 ,choix  ;
float k;
printf("************  MENU  ************\n");
printf("1 Creation et saisie d'une matrice\n" );
//printf("2 Affichage d'une matrice ");
printf("2 Produit de deux matrice \n");
printf("3 Transposer de matrice \n");
printf("4 Multiplication de matrice \n");
printf("0 pour terminer !! \n");

do
{  printf("donner votre choix :");
  scanf("%d",&choix);
  switch(choix)
  {
  case 1 :
  printf("donner le nombre de ligne: ");
 scanf("%d",&nl);
 printf("donner le nombre colonne: ");
 scanf("%d",&nc);
 M=creation(nl,nc);
     saisie(M);
     printf("\n  Le tableau Saisie \n"); 
     affichage(M);
     //destruct(M);
     break;
     case 2:
      printf("donner le nombre de ligne de M1: ");
 scanf("%d",&nl1);
 printf("donner le nombre colonne de M1: ");
 scanf("%d",&nc1);
    M1=creation(nl1,nc1);
     printf("donner le nombre de ligne de M1: ");
 scanf("%d",&nl2);
 printf("donner le nombre colonne de M1: ");
 scanf("%d",&nc2);
    M2=creation(nl2,nc2);
    if(nc1==nl2)
    {
     printf("saisir les elements de M1 :\n");
     saisie(M1);
     printf("saisir les elements de M2 :\n");
     saisie(M2);
    // Mpr=creation(nl1,nc2);
  Mpr=produit(M1,M2);
  printf("\n ******  le produit obtenu  **********\n");   
     affichage(Mpr);}
     else
     printf("Le produit est impossible !!\n");
     break ;
     case 3:
        printf("donner le nombre de ligne: ");
 scanf("%d",&nl);
 printf("donner le nombre colonne: ");
 scanf("%d",&nc);
        M=creation(nl,nc);
        saisie(M);
        transposer(M);
        break;
     case 4:
        printf("donner le nombre de ligne: ");
 scanf("%d",&nl);
 printf("donner le nombre colonne: ");
 scanf("%d",&nc);
 printf("donner le reel k :");
 scanf("%f",&k);
 M=creation(nl,nc);
     saisie(M);
     Mpr=creation(nl,nc);
     Mpr=multi(M,k);
     printf("\nLa matrice Multiplier  \n");
     affichage(Mpr);
break ;
     case 0:
     printf("terminer !!\n");
     break ;
     default :
     printf("choix erronner !!\n");
     break ;
     }
     }while(choix!=0);
     
      //destruct(M);
      return 0 ;
      }
  

