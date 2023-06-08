#include <stdio.h>

int main(){
    int i;
    printf("enteros positivos menores que 100 que no son divisibles entre 7");

    for(i=1; i<100; i++){
        if (i%7!=0){
            printf("%d,",i);
        }
    }
return 0;
}