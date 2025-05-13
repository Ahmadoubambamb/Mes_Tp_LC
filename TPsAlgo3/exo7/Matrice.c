#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Matrice.h"

matrice *creation(int nbl , int nbc)
{ matrice *M; 
	int i,j;
	M=(matrice*)malloc(sizeof(matrice));
    if(M==NULL)
      return NULL;
	
      M->m=(float**)malloc(nbl*sizeof(float*));
      for(i=0;i<nbl;i++)
      	M->m[i]=(float*)malloc(nbc*sizeof(float));
  for(i=0;i<nbl;i++)
   {for(j=0;j<nbc;j++)
      *((float*)M->m+i*nbc+j)=0.0 ;
      }
      M->nblignes=nbl;
       M->nbcolones=nbc;
         return M;  
}
void saisie(matrice *M)
{ int i,j;
 for(i=0;i<M->nblignes;i++)
   for(j=0;j<M->nbcolones;j++)
   { printf("donner l'element [%d][%d] :",i,j);
     scanf("%f",(float*)M->m+i*M->nbcolones+j);
   }
printf("\n");
}
void destruct(matrice *M)
{ int i;
      for(i=0;i<M->nblignes;i++)
      free(M->m[i]);
       free(M->m);
         free(M);
}
void affichage(matrice *M)
{ int i, j;
     for(i=0;i<M->nblignes;i++)
     {
       for(j=0;j<M->nbcolones;j++)
       printf("%.1f   ",*((float*)M->m+i*M->nbcolones+j));
       printf("\n");
       
    }
}
matrice *produit(matrice *M1 ,matrice *M2)
{ int i , j ,k;
  matrice *Mp;
 Mp=creation(M1->nblignes,M2->nbcolones);
 /* if(M1->nbcolones!=M2->nblignes)
   
   return NULL;
   
   else*/
     for(k=0;k<M1->nblignes;k++)
     for(i=0;i<M2->nbcolones;i++)
     {
       *((float*)Mp->m+k*M2->nbcolones+i)=0.0;
       for(j=0;j<M2->nblignes;j++)
        *((float*)Mp->m+k*M2->nbcolones+i)+= (*(float*)M1->m+i*M1->nbcolones+j) * (*((float*)M2->m+j*M2->nbcolones+i));
     }
     return Mp;
}

matrice *multi(matrice *M,float k)
{ matrice *Mp;
  int i, j ;
 Mp=creation(M->nblignes,M->nbcolones);
  for(i=0;i<M->nblignes;i++)
     for(j=0;j<M->nbcolones;j++)
    *((float*)Mp+i*Mp->nbcolones+j)=k*(*((float*)M+i*M->nbcolones+j));
 return Mp;
}
void transposer(matrice *M)
{ int i,j;
  for(i=0;i<M->nbcolones;i++)
  {for(j=0;j<M->nblignes;j++)
      printf("%.1f   ",*((float*)M->m+j*M->nblignes+i));
      printf("\n");
  }
}
/*void multi(matrice *M , float k)
{
  int i, j ;
  for(i=0;i<M->nblignes;i++)
     for(j=0;j<M->nbcolones;j++)
    *((float*)M+i*M->nbcolones+j)*=k;
}*/
