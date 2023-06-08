#include <stdio.h>

// Función para mostrar la tabla de multiplicar de un número dado
void mostrarTabla(int numero) {
    int tabla[10]; // Arreglo para almacenar los resultados de la tabla
    int i;
    
    // Calcula los valores de la tabla y los almacena en el arreglo
    for (i = 0; i < 10; i++) {
        tabla[i] = numero * (i + 1);
    }
    
    // Imprime la tabla de multiplicar
    printf("Tabla de multiplicar de %d:\n", numero);
    
    for (i = 0; i < 10; i++) {
        printf("%d x %d = %d\n", numero, i + 1, tabla[i]);
    }
}

int main() {
    int numero;
    
    // Solicita al usuario que ingrese un número
    printf("Ingrese un número: ");
    scanf("%d", &numero);
    
    // Llama a la función mostrarTabla y pasa el número ingresado como argumento
    mostrarTabla(numero);
    
    return 0;
}
