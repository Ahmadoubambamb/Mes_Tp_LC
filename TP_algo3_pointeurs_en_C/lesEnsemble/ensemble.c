#include <stdio.h>
#include <stdlib.h>
#include "ensemble.h"

Ens *Cree_ens(int N)
{ Ens *E;
  E=(Ens*)malloc(sizeof(Ens));
  if(E==NULL)
   return NULL;
   E->card=0;
   E->N=N;
   E->element=NULL;
  return E;
}

void destruct(Ens *E)
{ if(E)
   {
       if(E->element)
        free(E->element);
       free(E);
   }
}

int ajouter(Ens *E , int X)
{   if(test(E,X)!=-1)
  return -2;
    if(E->card+1<=E->N){
    E->element=(int*)realloc(E->element,(E->card+1)*sizeof(int));
    if(E->element)
    {
        E->card++;
        E->element[E->card-1]=X;
        return (E->card-1);
    }
    }
    else
      return -1;
}

int test(Ens *E , int X)
{ int i;
  for(i=0;i<E->card;i++)
    {if(E->element[i]==X)
      return i;
    }
    return -1;
}

Ens *Union(Ens E1 , Ens E2 ,int n)
{ Ens *E0; int i;
     E0=Cree_ens(n);
     for(i=0;i<E1.card;i++)
        ajouter(E0,E1.element[i]);
     for(i=0;i<E2.card;i++)
        ajouter(E0,E2.element[i]);
   return E0 ;
}

Ens *Intersection(Ens e1 , Ens e2 , int n)
{ int i ,j; Ens *e0;
  e0=Cree_ens(n);
  for(i=0;i<e1.card;i++)
    {for(j=0;j<e2.card;j++)
    {if(e1.element[i]==e2.element[j])
    ajouter(e0,e1.element[i]);
    }
    }
  return e0;

}
