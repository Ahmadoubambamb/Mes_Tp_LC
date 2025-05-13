#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Sentence.h"
tab *creationP()
{ tab *T;
    T=(tab*)malloc(sizeof(tab));
    if(T==NULL)
    return NULL ;
    T->p=NULL;
    T->n=0;
    return T;
}
int ajoutP(tab *T , char *ph)
{
    T->p=(char**)realloc(T->p,(T->n+1)*sizeof(char*));
    if(T->p==NULL)
      return -1;
        T->n++;
        T->p[T->n-1]=(char*)malloc(strlen(ph)+1);
    strcpy(T->p[T->n-1],ph);
    return T->n;
}
void affiche(tab *T)
{ int i;
  for(i=0;i<T->n;i++)
  printf("%s\n",T->p[i]);
}
void liberer(tab *T)
{ int i;
  for(i=0;i<T->n;i++)
    free(T->p[i]);
      free(T->p);
       free(T);
}
void trier(tab *T)
{ int i,d;
  char *temp;
    d=T->n;
  while(d-- >0)
  {for(i=0;i<T->n-1;i++)
    {if(strcmp(T->p[i],T->p[i+1])>0)
      {temp=T->p[i];
      T->p[i]=T->p[i+1];
      T->p[i+1]=temp;
      }
    }

    }

}

