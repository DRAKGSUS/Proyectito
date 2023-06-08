#include<stdio.h>

int main(){
    int tabla_del_2 [100];
    int i;

    for(i=0; i<100; i++){
        tabla_del_2[i]=2*(i+1);
    }
printf("la tabla del 2 es:\n");
for (i=0; i<100; i++){
    printf("%d",tabla_del_2[i]);
    if((i+1)%10 == 0){
        printf("\n");
    }
}
return 0;

}

