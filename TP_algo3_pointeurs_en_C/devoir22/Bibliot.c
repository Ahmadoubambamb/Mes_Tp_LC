#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Bibliot.h"
biblio *Creation_BU(char* nom, char* nomU)
{ biblio *bu;
    bu=(biblio*)malloc(sizeof(biblio));
    if(bu==NULL)
    { printf("l'allocation a echouer !");
        return NULL;
    }
    strcpy(bu->nom,nom);
    strcpy(bu->nomUni,nomU);
     bu->N=0;
     bu->liv=NULL;
     return bu;
}
void Destruc_BU(biblio* bu)
{

}
int recherche(biblio bu,livre L)
{ for(int i=0;i<bu.N;i++)
   {if(bu.liv[i].id==L.id)
   return i;
   }
   return -1;
}
int Rajouter(biblio* bu,livre L)
{   if(recherche(bu,L)!=-1)
     return -1;
      bu->liv=(livre*)realloc(bu->liv,(bu->N)*sizeof(livre))
    if((recherche(bu,L)=-1)&&(bu->liv=NULL){
        bu->N++;
     bu->liv[bu->N-1]=L;
    return (bu->N-1);
    }


}
