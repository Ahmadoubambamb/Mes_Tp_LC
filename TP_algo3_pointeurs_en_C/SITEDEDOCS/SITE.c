#include "SITE.h"

Site *creation_Svide()
{
    Site *ste;
    ste=(Site*)malloc(sizeof(Site));
    if(ste==NULL){
        printf("Erreur d'allocation de memoire !");
      return NULL;
    }
    ste->doc=NULL;
    ste->nbre_doc=0;
    return ste;
}
void destruction(Site *ste)
{  int i;
    if(ste!=NULL)
  { if(ste->doc!=NULL)
      for(i=0;i<ste->nbre_doc;i++)
        supression(ste,ste->doc[i]);
        free(ste->doc);
       free(ste);
  }
}
int insertion(Site *ste ,DOCUMENT d)
{ DOCUMENT *tmp;  Site St;  St=*ste;
    if(recherche(St,d)!=-1)
      return -2;
    ste->doc=(DOCUMENT*)realloc(ste->doc,(ste->nbre_doc+1)*sizeof(DOCUMENT));
    if(ste->doc!=NULL)
    { ste->nbre_doc++;
      tmp=creation_docs(d.cle,d.valeur,d.list_mot_cles,d.nbre_motsC);
        ste->doc[ste->nbre_doc-1]=*tmp;
        return (ste->nbre_doc-1);
    }
    else
    return -1;
}
int supression(Site *ste, DOCUMENT d)
{  int i ,j,pos; Site St;  St=*ste;
pos=recherche(St,d);
    if(pos==-1)
        return -1;
     for(j=0;j<ste->doc[pos].nbre_motsC;j++)
       free(ste->doc->list_mot_cles[i]);

       free(ste->doc->list_mot_cles);

        for(i=pos;i<(ste->nbre_doc-1);i++)
        ste->doc[i]=ste->doc[i+1];

    ste->nbre_doc--;
    return 0;
}
int recherche(Site ste , DOCUMENT d)
{
    int i;
    for(i=0;i<ste.nbre_doc;i++)
        if((ste.doc[i].cle)==d.cle)
        return i;
return -1;
}

Site *Union_site(Site S1 , Site S2)
{ Site *S; int i;
  S=creation_Svide();
  if(!S)
    return NULL;
    else
  {  for(i=0;i<S1.nbre_doc;i++)
     insertion(S,S1.doc[i]);
     for(i=0;i<S2.nbre_doc;i++)
        insertion(S,S2.doc[i]);
      return S;
  }

}
Site *Intersection(Site S1 , Site S2)
{ Site *S; int i;
   S=creation_Svide();
   if(!S)
    return NULL;
   else
   { for(i=0;i<S1.nbre_doc;i++)
     if(recherche(S2,S1.doc[i])!=-1)
        insertion(S,S1.doc[i]);
     return S;
   }
}
Site *Difference(Site S1 , Site S2)
{ Site *S ; int i;
  S=creation_Svide();
    for(i=0;i<S1.nbre_doc;i++)
        if(recherche(S2,S1.doc[i])==-1)
         insertion(S,S1.doc[i]);
    for(i=0;i<S2.nbre_doc;i++)
        if(recherche(S1,S2.doc[i])==-1)
        insertion(S,S2.doc[i]);
    return S;
}
void afficheSite(Site S)
{  int i;
    printf("le nombre document dans ce Site est %d ! \n",S.nbre_doc);
    puts("les donner des document de ce Site !");
    printf("=============================\n");
    for(i=0;i<S.nbre_doc;i++)
    afficheDocs(S.doc[i]);
}
