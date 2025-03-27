#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("======================================\n");

    // Leitura de elementos de uma matriz
    int matriz_01[3][4];

    for (size_t i = 0; i < 3; i++) {
        for (size_t j = 0; j < 4; j++) {
            printf("Digite o elemento %ldx%ld: ", i, j);
            scanf("%d", &matriz_01[i][j]);
        }
    }

    printf("======================================\n");

    // Imprimindo a matriz:

    for (size_t i = 0; i < 3; i++) {
        for (size_t j = 0; j < 4; j++) {
            printf("%d ", matriz_01[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("======================================\n");

    // Dobrando elementos da matriz:

    for (size_t i = 0; i < 3; i++) {
        for (size_t j = 0; j < 4; j++) {
            matriz_01[i][j] *= 2;
        }
    }

    // Imprimindo a matriz:

    for (size_t i = 0; i < 3; i++) {
        for (size_t j = 0; j < 4; j++) {
            printf("%d ", matriz_01[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    printf("======================================\n");
    

    return 0;
}