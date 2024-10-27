#include <stdio.h>
#include <stdlib.h>
void Menu(  )
{
    printf("       MENU !!\n1. Tri a Bulles\n");
    printf("2. Tri par sélection\n");
    printf("3. Tri insertion\n");
    printf("4. Quick sort\n");
    printf("5. fin\n");
}
void affiche(int t[] ,int n){
    int i;
     for(i=0;i<n;i++){
      printf("%d  ",t[i]);
}
}
void saisi(int t[]){
    int n=5,i;
    for(i=0;i<n;i++){
       printf("l'element %d = :",i);
       scanf("%d",&t[i]);
    }
}
void triBulle(int t[], int n)
{
    int i = 0;
    int j = 0;
    int tmp = 0;
    for(i=n-1; i>=0 ; i--)
    {
        for(j=0; j<n-1; j++)
        {
            if(t[j+1]<t[j]){
                tmp = t[j+1];
               t[j+1] = t[j];
                t[j] = tmp;
            }
        }
    }
}
void triselectin(int t[], int n)
{
    int i,imin,j;
    int tmp = 0;
    for(i=0; i<n-1 ; i++)
    {  imin=i;
        for(j=i+1; j<n; j++){
            if(t[j]<t[imin]){
                tmp = t[imin];
                t[imin] = t[j];
                t[j] = tmp;

           }
        }
    }
}
void insertion(int tab[] ,int n){
int i,j,x;
   for(i=1;i<n;i++)
{
x=tab[i];
  for(j=i;j>0&& tab[j-1]>x;j--)
       {
        tab[j]=tab[j-1];
    }
     tab[j]=x;
}
}
void permuter(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
void triRapid(int tab[], int d, int f)
{   int pivot, i, j;

    if(d < f)
    {   pivot = d;
        i = d;
        j = f;
        while (i < j)
        {   while(tab[i] <= tab[pivot] && i < f)
                i++;
            while(tab[j] > tab[pivot])
                j--;
            if(i < j)
            {   permuter(&tab[i], &tab[j]);
            }
        }
        permuter(&tab[pivot], &tab[j]);
        triRapid(tab, d, j - 1);
        triRapid(tab, j + 1, f);
    }
}
int main(){
int a, i;int t[100] ; int n=5;
do{system("CLS");
    Menu();
    printf("donner votre choix ");
    scanf("%d",&a);
    switch(a){
        case 1:
            saisi(t);
         printf("\n tableau trie par bulle est \n");
         triBulle(t,n);
       affiche(t,n);
               break;
        case 2:
            printf("vous avez choisi 2\n");
             saisi(t);
            printf("\n");
            triselectin(t, n);
    printf("le tableau trie par selection  est\n");
    affiche(t,n);
        break;
        case 3: printf(" vous avez choisi 3\n");
           saisi(t);
            insertion(t,n);
      printf(" \n Apres l'insertion le tableau est  ");
      affiche(t,n);
        break;
        case 4: printf(" vous avez choisi 4\n");
         saisi(t);
         triRapid(t, 0, n - 1);
    printf(" Tableau trie par trie rapide est :\n ");
   affiche(t,n);
        break;
        case 5:
        printf("FIN !!");
        break ;
    }
    printf("\n");
    system("PAUSE");
} while(a!=5);
return 0 ;
}
