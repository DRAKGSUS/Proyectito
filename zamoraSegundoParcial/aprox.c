#include <stdio.h>

// Calcula la raíz cuadrada de un número utilizando el método de aproximaciones sucesivas.
// x: El número del cual se desea calcular la raíz cuadrada.
// resultado: Puntero a una variable donde se almacenará el resultado.
// Retorna la aproximación de la raíz cuadrada del número.
float aproximacion_sucesiva(float x, float *resultado) {
    float aproximacion = x / 2;  // Aproximación inicial

    while (1) {
        float siguiente_aprox = (aproximacion + x / aproximacion) / 2;

        // Verificar si la diferencia entre las aproximaciones es lo suficientemente pequeña
        if (siguiente_aprox == aproximacion || siguiente_aprox - aproximacion < 0.00001) {
            *resultado = siguiente_aprox;  // Asignar el resultado a través del puntero
            return siguiente_aprox;
        }

        aproximacion = siguiente_aprox;  // Actualizar la aproximación
    }
}

int main() {
    float numero;
    float raiz;

    printf("Ingrese un número: ");
    scanf("%f", &numero);

    if (numero < 0) {
        printf("Error: No se puede calcular la raíz cuadrada de un número negativo.\n");
    } else {
        aproximacion_sucesiva(numero, &raiz);  // Calcular la raíz cuadrada utilizando el método de aproximaciones sucesivas
        printf("La raíz cuadrada de %.2f es aproximadamente %.5f.\n", numero, raiz);
    }

    return 0;
}
