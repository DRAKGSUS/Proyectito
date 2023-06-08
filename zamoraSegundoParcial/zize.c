#include<stdio.h>
#include<stdlib.h>

int main(){
    char cadena[10];
    printf("un int ocupa%dbytes",sizeof(int));
    printf("un char ocupa%dbytes",sizeof(char));
    printf("un float ocupa%dbytes",sizeof(float));
    printf("un double ocupa%dbytes",sizeof(double));
    printf("un cadena ocupa%dbytes",sizeof(cadena));
    return 0;
}