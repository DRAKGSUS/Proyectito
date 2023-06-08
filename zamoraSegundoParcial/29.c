#include <stdio.h>
#include<stdio.h>
struct Atleta {
    char nombre[50];
    char deporte[50];
    char pais[50];
    int num_medallas;
};
int main() {
    struct Atleta atl;
    printf("Ingrese el nombre del Atleta: ");
    fgets(atl.nombre, sizeof(atl.nombre), stdin);
    printf("Ingrese el deporte que practica: ");
    fgets(atl.deporte, sizeof(atl.deporte), stdin);
    printf("Ingrese el país del atleta: ");
    fgets(atl.pais, sizeof(atl.pais), stdin);
    printf("Ingrese el número de medallas que ha obtenido el Atleta: ");
    scanf("%d", &atl.num_medallas);

    printf("\n|| Información Atleta ||\n");
    printf("Nombre: %s", atl.nombre);
    printf("Deporte: %s", atl.deporte);
    printf("País: %s", atl.pais);
    printf("Número de Medallas obtenidas: %d\n", atl.num_medallas);

    return 0;
}
