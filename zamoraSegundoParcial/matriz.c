#include <stdio.h>

#define ROWS 10
#define COLS 10

void calcularMultiplicativo(int matriz[][COLS], int *multiplicativos) {
    int i, j;
    
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            int producto = 1;
            
            if (matriz[i][j] != 0) {
                producto = matriz[i][j];
            }
            
            multiplicativos[i * COLS + j] = producto;
        }
    }
}

void dibujarMatriz(int matriz[][COLS]) {
    int i, j;
    
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[ROWS][COLS];
    int multiplicativos[ROWS * COLS];
    int *ptr_multiplicativos = multiplicativos;
    int i, j;
    
    // Inicializar la matriz
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            matriz[i][j] = i * j;
        }
    }
    
    // Calcular los productos y almacenarlos en el arreglo multiplicativos
    calcularMultiplicativo(matriz, multiplicativos);
    
    // Dibujar la matriz original
    printf("Matriz original:\n");
    dibujarMatriz(matriz);
    
    // Dibujar los productos
    printf("\nProductos:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%3d ", *ptr_multiplicativos);
            ptr_multiplicativos++;
        }
        printf("\n");
    }
    
    return 0;
}