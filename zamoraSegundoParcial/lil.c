#include <stdio.h>

int main() {
    int i=1;
    char *c=(char*)&i;
    if(*c==1){
        printf("La arquitectura es little");
    }else{
        printf("la arquitectura es big endial");
    }
return 0;
}
   