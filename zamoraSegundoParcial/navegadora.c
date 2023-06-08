#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    clock_t inicio, fin;
    double tiempo;

    // Inicio de la medición
    inicio = clock();

    // Llamada a la función system para abrir Firefox
    system("firefox");

    // Fin de la medición
    fin = clock();

    // Cálculo del tiempo transcurrido en segundos
    tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;

    // Cálculo de los ciclos de reloj en cantidades grandes
    unsigned long long ciclos_reloj = (unsigned long long)(tiempo * 1e9);

    printf("Ciclos de reloj: %llu\n", ciclos_reloj);

    return 0;
}
