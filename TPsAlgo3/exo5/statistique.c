#include "statistique.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
  /*version tableau*/
/*fonction 1*/
void transfo_en_minus(char majus[],char minus[])
{
    int i=0;
    while(majus[i]!='\0')
    {
        minus[i]=tolower(majus[i]);
        i++;
    }
}
void tableau_stat(Tab_struct T,int *j,char phrase[])
{
    int k,i;
    char ch[50];
    transfo_en_minus(phrase,ch);
    strcpy(phrase,ch);
    for(char c='a',i=0;i<N;i++)
    {
        T[i].lettre=c;
        T[i].occ=0;
        c++;
    }
    *j=0;
    for(i=0;i<N;i++)
    {
        k=0;
        while(phrase[k]!='\0')
        {
            if(phrase[k]==T[i].lettre)
                T[i].occ++;
            k++;
        }
        if(T[i].occ){
            T[*j].lettre=T[i].lettre;
            T[*j].occ=T[i].occ;
            ++(*j);
        }
    }
}
/*fonction 2*/
int anagramme_tab(char phrase1[],char phrase2[])
{
    Tab_struct T1,T2;
    int x,y,compt=0;
    tableau_stat(T1,&x,phrase1);
    tableau_stat(T2,&y,phrase2);
    if(x==y)
    {
        for(int i=0;i<x;i++)
        {
            if(T1[i].lettre==T2[i].lettre&&T1[i].occ==T2[i].occ)
                compt++;
        }
        if(compt==y)
            return 1;
    }
    return 0;
}
  /*version avec les pointeurs
/*fonction 1*/
STAT *pointeur_stat(char phrase[],int *j)
{
    int i,k;
    char ch[50],c;
    STAT *p;
    p=(STAT *)malloc(N*sizeof(STAT));
    if(p==NULL)
    {
        printf("Pas assez de memoire.\n");
        exit(-1);
    }
    else
    {
        transfo_en_minus(phrase,ch);
        strcpy(phrase,ch);
        for(c='a',i=0;i<N;i++)
        {
        (p+i)->lettre=c;
        (p+i)->occ=0;
         c++;
        }
    }
    *j=0;
    for(int i=0;i<N;i++)
    {
        k=0;
        while(phrase[k]!='\0')
        {
            if((p+i)->lettre==phrase[k])
                (p+i)->occ++;
            k++;
        }
        if((p+i)->occ)
        {
            (p+*j)->lettre=(p+i)->lettre;
            (p+*j)->occ=(p+i)->occ;
            ++(*j);
        }
    }
    return (p);

}
/*fonction 2*/
int anagramme_pointeur(char phrase1[],char phrase2[])
{
  STAT *p1,*p2;
  int a,b,compt=0;
  p1=pointeur_stat(phrase1,&a);
  p2=pointeur_stat(phrase2,&b);
  if(a==b)
  {
    for(int i=0;i<a;i++)
    {
        if((p1+i)->lettre==(p2+i)->lettre&&(p1+i)->occ==(p2+i)->occ)
            compt++;
    }
    if(compt==b)
        return 1;
  }
  return 0;
}
void liberer_espace(STAT *p)
{
    if(p)
        free(p);
}
