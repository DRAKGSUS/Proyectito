#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j = 0;
    char *buffer;

    printf("Ingrese el tamaño de Arreglo[]:   ");
    scanf("%d", &i); 

    buffer = (char *)malloc((i + 1) * sizeof(char));
    if (buffer == NULL)
        exit(1);

    for (int n = 0; n < i; n++)
    {
        printf("Ingrese el valor del elemento [%d]: ", n);
        scanf("%s", &buffer[n]);
    }

    buffer[i] = '\0';

    printf("\nLos elementos del arreglo son:\n");

    for (j = 0; j < 1; j++)
    {
        printf("%s", &buffer[j]);
    }

    free(buffer);

    return 0;
}