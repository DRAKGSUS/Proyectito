#include <stdio.h>
#include <stdlib.h>

int main() {
    int size, i;
    int *arr;

    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &size);

    // Crear el arreglo dinámicamente
    arr = (int *)malloc(size * sizeof(int));

    // Llenar el arreglo con datos ingresados por el usuario
    for (i = 0; i < size; i++) {
        printf("Ingrese el valor del elemento %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Imprimir los elementos del arreglo
    printf("\nLos elementos del arreglo son:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    // Liberar la memoria reservada para el arreglo
    free(arr);

    return 0;
}