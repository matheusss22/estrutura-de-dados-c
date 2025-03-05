#include <stdio.h>
#include <stdlib.h>

int main() {

    // Somando duas matrizes
    int matriz_01[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int matriz_02[3][3] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int matriz_03[3][3];

    for (size_t i = 0; i < 3; i++) {
        for (size_t j = 0; j < 3; j++) {
            matriz_03[i][j] = matriz_01[i][j] + matriz_02[i][j];
        }  
    }

    printf("\n==================================================\n");
    printf("Matriz 01:\n\n");
    
    for (size_t i = 0; i < 3; i++) {
        for (size_t j = 0; j < 3; j++) {
            printf("%d ", matriz_01[i][j]);
        }
        printf("\n");
    }

    printf("\n==================================================\n");
    printf("Matriz 02:\n\n");
    
    for (size_t i = 0; i < 3; i++) {
        for (size_t j = 0; j < 3; j++) {
            printf("%d ", matriz_02[i][j]);
        }
        printf("\n");
    }

    printf("\n==================================================\n");
    printf("Matriz 03:\n\n");

    for (size_t i = 0; i < 3; i++) {
        for (size_t j = 0; j < 3; j++) {
            printf("%d ", matriz_03[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}