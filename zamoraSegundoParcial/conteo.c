#include <stdio.h>
#include <ctype.h>

int main() {
    char palabra[100];
    int letras[26] = {0};
    int i, longitud;

    printf("Ingrese una palabra: ");
    scanf("%s", palabra);

    longitud = strlen(palabra);

    for(i = 0; i < longitud; i++) {
        if(isalpha(palabra[i])) {
            letras[tolower(palabra[i]) - 'a']++;
        }
    }

    printf("Conteo de letras:\n");
    for(i = 0; i < 26; i++) {
        if(letras[i] > 0) {
            printf("%c: %d\n", 'a' + i, letras[i]);
        }
    }

    return 0;
}