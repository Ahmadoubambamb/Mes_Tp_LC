#include <stdio.h>
#include <stdlib.h>
int main()
{ int i,n,l,j,k ;
printf("donner des nombre  \n");
scanf("%d %d",&l,&n);
for(k=0;k<l;k++){
    for(i=0;i<n;i++){
      for(j=0;j<n;j++){
      if(i>=j)
      printf("*");
      }
         printf("\n");
    }

}
    return 0;
}
