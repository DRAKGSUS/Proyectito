#include <stdio.h>
int main(){
    int i;
    printf("NUmerosdibisibles en 2 y 0 y ,menores a mil\n");
    for (i = 1; i < 1000; i++){
        if(i%2 == 0 && i % 7 == 0){
            printf("%d,",i);
        }
    }
    return 0;
}