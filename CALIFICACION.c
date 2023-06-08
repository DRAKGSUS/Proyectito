#include <stdio.h>

int main() {
    float calificacion;
    
    printf("Ingresa tu calificación del examen: ");
    scanf("%f", &calificacion);
    
    if (calificacion >= 8) {
        printf("¡Felicidades, aprobaste el curso!\n");
    } else {
        printf("Lo siento, no aprobaste el curso.\n");
    }
    
    return 0;
}