#include <stdio.h>
#include <string.h>

int main()
{
    char palabra[100];
    int i, longitud, es_palindroma = 1;

    printf("Ingresa una palabra: ");
    scanf("%s", palabra);

    longitud = strlen(palabra);

    for(i = 0; i < longitud/2; i++)
    {
        if(palabra[i] != palabra[longitud - i - 1])
        {
            es_palindroma = 0;
            break;
        }
    }

    if(es_palindroma)
        printf("%s es palindroma.\n", palabra);
    else
        printf("%s no es palindroma.\n", palabra);

    return 0;
}