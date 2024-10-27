#include<stdio.h>
#include<stdlib.h>


typedef int TAB100[100];
void Saisie_nbre(TAB100 t, int n)
{
    for(int i=0; i<n; i++)
    {
        printf("Donnez la valeur de l'entier %d:", i);
        scanf("%d", &t[i]);
    }
}
void permuter(int *x,int *y)
{ int temp ;
     temp=*x ;
   *x=*y;
   *y=temp;
}
void affiche(int *t,int n)
{ int i ;
for(i=0;i<=n-1;i++)
  printf("%d  ",t[i]);
}

void tri_selection(int *t, int n)
{
int i, imin, j;
for (i=0;i<n;i++)
{
imin = i;
for (j = i+1; j < n; j++)
if (t[j] < t[imin])
imin = j;
permuter(&t[i],&t[imin]);
}
}
void insert(TAB100 t, int x, int n)
{
    int i, j = 0;
    for(int i = 0; i<n&&t[i]<x; i++)
        j++;
    n = n+1;
    i = n;
    while(i>=j)
      {
         t[i] = t[i-1];
         i = i-1;
      }
      t[j] = x;
     for(i=0;i<n;i++)
        printf("%d   ",t[i]);
}
void fusionneTab(TAB100 t1,int n, TAB100 t2,int m ,TAB100 t3,int *h)
{    int i=0, j=0, k=0;
    while(i<n && j<m)
    {
        if(t1[i]>t2[j])
        {
            t3[k] = t2[j];
            k=k+1;
            j++;
        }
        else
        {
            t3[k] = t1[i];
            k = k+1;
            i++;
        }
    }
    if(i>=n)
    {
        while(j<m)
          {
            t3[k] = t2[j];
            k=k+1;
            j++;
          }
    }
    else
    {
        while(i<n)
        {
            t3[k] = t1[i];
            k=k+1;
            i++;
        }
    }
    *h= n+m;
}
int main()
{
    int p, x,n,m,h;
    TAB100 t1, t2, t3;
        printf("Donnez la taille du tableau t1 : ");
        scanf("%d",&n);
    Saisie_nbre(t1,n);
    tri_selection(t1,n);
    affiche(t1,n);
    printf("\n donner l'element x a inserer ");
    scanf("%d",&x);
    insert(t1,x,n);
    printf("\n donner la taille de t2 ");
    scanf("%d",&p);
    Saisie_nbre(t2,p);
    tri_selection(t2,p);
    affiche(t2,p);
    printf("\nLE TABLEAU TOTAL TRIE EST LE SUIVANT!!!\n");
    fusionneTab(t1,n,t2,p,t3,&h);
    affiche(t3,h);
    return 0;
}


