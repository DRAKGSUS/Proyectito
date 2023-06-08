#include <stdio.h>
int main (){
    int i;
    printf("enteros positivos menores de 100 omitiendo divisibles entre 7");

    for_(i = 1; i < 100; i++){
        if (i %7 ! = 0){
            printf("%d,",i);
        }
    }
return 0;
}