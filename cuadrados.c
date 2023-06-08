#include <stdio.h>
#include <stdlib.h>

int main (){
    int i;
    printf("Numero\tcuadrado\tcubo\n");
    for(i=1;i<=4;i++){
        printf("%d\t%d\t\t%d\n",i,i*i,i*i*i);
    }
return 0;
}