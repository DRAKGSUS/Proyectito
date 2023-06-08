#include <stdio.h>
#include <string.h>


int main() {
    char palabra1[50];
    char palabra2[50];
    int n;

    printf("Introduce la primera palabra: ");
    scanf("%s", palabra1);
    printf("Introduce la segunda palabra: ");
    scanf("%s", palabra2);

    n = strlen(palabra1);

    for (int i = 0; i < n; i++) {
        strcat(palabra1, palabra2);
    }

    printf("La palabra resultante es: %s\n", palabra1);

    return 0;
}