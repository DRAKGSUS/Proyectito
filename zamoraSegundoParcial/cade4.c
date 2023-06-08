#include <stdio.h>
#include <string.h>

int main() {
    
    char palabra1[50], palabra2[50];
    int resultado;

    printf("Ingrese la primera palabra: ");
    scanf("%s", palabra1);

    printf("Ingrese la segunda palabra: ");
    scanf("%s", palabra2);

    resultado = strcmp(palabra1, palabra2);

    if(resultado == 0) {
        printf("Ambas palabras son iguales");
    } else if(resultado < 0) {
        printf("La palabra \"%s\" es menor que la palabra \"%s\"", palabra1, palabra2);
    } else {
        printf("La palabra \"%s\" es mayor que la palabra \"%s\"", palabra1, palabra2);
    }

    return 0;
}
