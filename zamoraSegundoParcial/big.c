#include <stdio.h>

int main() {
    // Se inicializa una variable con el valor hexadecimal 0x01234567
    unsigned int x = 0x01234567;
    // Se crea un puntero a char que apunta a la dirección de x
    char c = (char)&x;

    // Se verifica el valor del primer byte de x a través del puntero c
    if (*c == 0x67) {
        printf("Tu laptop utiliza el ordenamiento Little-endian\n");
    } else if (*c == 0x01) {
        printf("Tu laptop utiliza el ordenamiento Big-endian\n");
    } else {
        printf("No se pudo determinar el ordenamiento de bytes de tu laptop\n");
    }

    return 0;
}