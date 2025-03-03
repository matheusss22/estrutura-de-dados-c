#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("===========================================================\n");

    // Primeira forma:
    int matriz_1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (size_t i = 0; i < 3; i++) {
        for (size_t j = 0; j < 3; j++) {
            printf("%d ",matriz_1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("===========================================================\n");

    // Segunda forma:
    int matriz_2[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (size_t i = 0; i < 3; i++) {
        for (size_t j = 0; j < 3; j++) {
            printf("%d ",matriz_2[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("===========================================================\n");

    // Criando matriz zerada:
    int matriz_3[5][5] = {0};

    for (size_t i = 0; i < 5; i++) {
        for (size_t j = 0; j < 5; j++) {
            printf("%d ", matriz_3[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("===========================================================\n");

    // Criando matriz sem inicializar os elementos - lixo de memória
    int matriz_4[4][4];

    for (size_t i = 0; i < 4; i++) {
        for (size_t j = 0; j < 4; j++) {
            printf("%d ", matriz_4[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("===========================================================\n");
    
    // Pode-se criar uma matriz iniciando apenas a quantidade de colunas,
    // a quantidade de linhas será definida pela quantidade de elementos
    // que serão inicializados.

    // Caso a quantidade de elementos não seja suficiente para fechar a 
    // matriz, os restantes será inicializado com zero.

    int matriz_5[][3] = {1, 2, 3, 4, 5, 6, 7};
    int quant_elementos = sizeof(matriz_5)/sizeof(int);
    int quant_linhas = quant_elementos/3;
    int quant_colunas = 3;
    
    printf("Quantidade de elementos: %d\n", quant_elementos);
    printf("Quantidade de linhas: %d\n", quant_linhas);
    printf("Quantidade de colunas: %d\n\n", quant_colunas);

    for (size_t i = 0; i < quant_linhas; i++) {
        for (size_t j = 0; j < quant_colunas; j++) {
            printf("%d ", matriz_5[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}