#include <stdio.h>
#include <time.h>

int main()
{
    // Introducir la fecha de nacimiento en formato "yyyy-mm-dd"
    char fecha_nacimiento[11];
    printf("Introduce tu fecha de nacimiento en formato \"yyyy-mm-dd\": ");
    scanf("%s", fecha_nacimiento);
    
    // Convertir la fecha de nacimiento en una estructura de tiempo
    struct tm fecha_nacimiento_tm;
    strptime(fecha_nacimiento, "%Y-%m-%d", &fecha_nacimiento_tm);
    time_t fecha_nacimiento_t = mktime(&fecha_nacimiento_tm);
    
    // Obtener la fecha y hora actual
    time_t ahora = time(NULL);
    
    // Calcular la cantidad de segundos vividos
    double segundos_vividos = difftime(ahora, fecha_nacimiento_t);
    
    printf("Has vivido %.0lf segundos.\n", segundos_vividos);
    
    return 0;
}