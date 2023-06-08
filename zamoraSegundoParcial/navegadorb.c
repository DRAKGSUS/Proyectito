#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void obtenerCiclosReloj(clock_t inicio, clock_t fin, unsigned long long *ciclos_reloj) {
    *ciclos_reloj = (unsigned long long)(fin - inicio);
}

int main() {
    clock_t inicio, fin;
    unsigned long long ciclos_reloj;

    // Inicio de la medición
    inicio = clock();

    // Código a medir (apertura de Firefox)
    system("firefox");

    // Fin de la medición
    fin = clock();

    // Obtener los ciclos de reloj utilizando apuntadores
    obtenerCiclosReloj(inicio, fin, &ciclos_reloj);

    printf("Ciclos de reloj: %llu\n", ciclos_reloj);

    return 0;
}
