#include <stdio.h>
#include <string.h>

int main() {
    
    char palabra[100];  
    
    int i, j, n;    

    printf("Ingrese una palabra: ");    
    scanf("%s", palabra);   

    n = strlen(palabra);    

    for (i = 0; i < n; i++) {   
        for (j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}