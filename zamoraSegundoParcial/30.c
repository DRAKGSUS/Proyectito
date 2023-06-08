#include <stdio.h>
#include <stdlib.h>
struct Empleado {
    char nombre[50];
    char sexo;
    float sueldo; 
};
int main() {
    struct Empleado empleados[5];
    printf("\tDATACIC\n");
    printf("Ingrese Datos de sus empleados: \n");
    for (int i = 0; i < 5; i++) {
        printf("Empleado %d:\n", i + 1);
        printf("Nombre: ");
        scanf("%s", empleados[i].nombre);
        printf("Sexo:(M/F) ");
        scanf(" %c", &empleados[i].sexo);
        printf("Sueldo: ");
        scanf("%f", &empleados[i].sueldo);
        printf("\n");
    }
    int PeorPagado= 0;
    for (int i = 1; i < 5; i++) {
        if (empleados[i].sueldo < empleados[PeorPagado].sueldo) {
            PeorPagado = i;
        }
    }
    printf("Empleado con Peor Sueldo:\n");
    printf("Nombre: %s\n", empleados[PeorPagado].nombre);
    printf("Sexo: %c\n", empleados[PeorPagado].sexo);
    printf("Sueldo: %.2f\n", empleados[PeorPagado].sueldo);

    return 0;
}
