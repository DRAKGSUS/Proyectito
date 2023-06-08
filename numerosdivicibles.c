#include <stdio.h>
int main(){
    int i;
    printf("Numeros divisibles entre 2 y entre a 0 y menores a 1000");

    for(i=1; i<1000; i++){
        if(i%2==0 && i %7==0){
            printf("%d,",i);

        }
    }
return 0;
}