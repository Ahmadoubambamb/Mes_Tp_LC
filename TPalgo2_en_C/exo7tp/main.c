#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char transfo(char minus)

{ char maj ;
     maj=toupper(char minus);

    return maj;

}
int mai()
{ char car, ret ;
    printf("donner une chaine");
    scanf("%c",&car);
    getchar();
    ret=transfo(car);
    printf("%c",ret);
    return 0 ;
}
