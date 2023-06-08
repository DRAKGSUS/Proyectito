#include <stdio.h>
#include <time.h>

int main() {
    clock_t start, end;
    double cpu_time_used;

    // Iniciar el contador de tiempo
    start = clock();

    // Ejecutar LibreOffice Writer
    system("libreoffice --writer");

    // Detener el contador de tiempo
    end = clock();

    // Calcular el tiempo utilizado en segundos
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    // Imprimir el tiempo utilizado en segundos y ciclos de reloj
    printf("Tiempo utilizado: %f segundos\n", cpu_time_used);
    printf("Ciclos de reloj utilizados: %ld\n", (end - start));

    return 0;
}