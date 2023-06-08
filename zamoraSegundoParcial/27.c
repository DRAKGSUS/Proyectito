#include<stdio.h>
#include<stdlib.h>

struct CD { 
    char titulo[50];
    char artista[50];
    int num_canciones;
    int año;
    int precio;
};
int main(void) {
    struct CD cd1;
    printf("Ingresa el Titulo: ");
    fgets(cd1.titulo, sizeof(cd1.titulo), stdin);
    printf("Ingresa el Artista: ");
    fgets(cd1.artista, sizeof(cd1.artista), stdin);
    printf("Ingresa el Numero de Canciones: ");
    scanf("%d", &cd1.num_canciones);
    printf("Ingresa el Anio: ");
    scanf("%d", &cd1.año);
    printf("Ingresa el Precio: ");
    scanf("%d", &cd1.precio);

    printf("\n|||SU DISCO|||\n");
    printf("Titulo: %s", cd1.titulo);
    printf("Artista: %s\n", cd1.artista);
    printf("Numero de Canciones: %d\n", cd1.num_canciones);
    printf("Anio: %d\n", cd1.año);
    printf("Precio: %d\n", cd1.precio);
    return 0;
}

