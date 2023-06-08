#include <stdio.h>
#include <string.h>

int main() {
    // Declarar variables para almacenar las palabras
    char palabra_1[50],palabra_2[50], temp[50];
    
    
    printf("Ingrese la primera palabra: ");
    scanf("%s", palabra_1);
    printf("Ingrese la segunda palabra: ");
    scanf("%s", palabra_2);
    
    // Imprimir las palabras antes del intercambio
    printf("Palabras antes del intercambio:\n");
    printf("Palabra 1: %s\n", palabra_1);
    printf("Palabra 2: %s\n", palabra_2);
    
    // Intercambiar los contenidos de las palabras
    strcpy(temp, palabra_1);
    strcpy(palabra_1, palabra_2);
    strcpy(palabra_2, temp);
    
    // Imprimir las palabras después del intercambio
    printf("Palabras después del intercambio:\n");
    printf("Palabra 1: %s\n", palabra_1);
    printf("Palabra 2: %s\n", palabra_2);
    
    return 0;
}