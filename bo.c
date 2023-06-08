#include <stdio.h>
int main(){
    int i;
    printf("numeros divisibles entre 3 mayores a 0 y menores a 1000");
    for(i=3;i<1000; i++){
        if (i%3 == 0){
            printf("%d,",i);
        }
    }
return 0;

}