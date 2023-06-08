#include <stdio.h>

int main() {
    int antiguedad, sueldo, porcentaje_sueldo;

    printf("Ingrese la antigüedad en años en su trabajo: ");
    scanf("%d", &antiguedad);

    printf("Ingrese su sueldo: ");
    scanf("%d", &sueldo);

    porcentaje_sueldo = sueldo * 0.1;

    if (antiguedad >= 5 && porcentaje_sueldo > 1000) {
        printf("Usted está sujeto a un crédito hipotecario.\n");
    } else {
        printf("Lo siento, no cumple con los requisitos para un crédito hipotecario.\n");
    }

    return 0;
}