#include <stdio.h>
#include<stdio.h>
struct Empleado {
    char nombre[50];
    char sex; 
    float suel;
};
int main() {
    struct Empleado empl;
    printf("Ingrese el nombre del empleado: ");
    fgets(empl.nombre, sizeof(empl.nombre), stdin);
    printf("Ingrese el sexo del empleado (M/F): ");
    scanf("%c", &empl.sex);
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &empl.suel);
    printf("\nInformación del empleado:\n");
    printf("Nombre: %s", empl.nombre);
    printf("Sexo: %c\n", empl.sex);
    printf("Sueldo: %.2f\n", empl.suel);

    return 0;
}
