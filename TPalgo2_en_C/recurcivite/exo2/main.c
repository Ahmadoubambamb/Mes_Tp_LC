#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int somme_puis_cinq(int n)
{ int i,s,p,j ;
s=0 ; p=1 ;
for(i=1;i<=n;i++){
    for(j=1;j<=5;j++)
       p=p*i ;
    s=s+p ;
}
return s ;
}
int somme_puis1(int ns)
{ int p  ;
    if(ns==0)
        return 0;
    else{
    p=pow(ns,5);
    return p+somme_puis1(ns-1);
    }
}
int main()
{ int N ,S ,S1,N1 ;
do{
    printf("donner l'entier \n");
    scanf("%d",&N);
    } while(N<0);
    S=somme_puis_cinq(N);
    printf("la somme en puissance de cinq est : %d \n",S);
     printf("donner l'entier un autre pour la recursif \n");
    scanf("%d",&N1);
    S1=somme_puis1(N1) ;
    printf("pour la recursif \n la somme en puissance de cinq est : %d ",S1);
    return 0;
}
