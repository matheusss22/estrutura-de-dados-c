#include <stdio.h>
#include <stdlib.h>

int main() {

    // Criando variáveis

    int idade = 22;
    char genero = 'M';
    float nota1 = 10.0;

    // =================================================================================================================================
    // Criando vetores

    // Primeira maneira - Específica o tamanho e inicializa todos os elementos com zero:
    int idades_1[10] = {0};

    for (size_t i = 0; i < 10; i++) {
        printf("%d ", idades_1[i]);
    }
    printf("\nTamanho = %ld\n\n", sizeof(idades_1)/sizeof(int));
    
    // Segunda maneira - Não específica o tamanho, mas inicia cada elemento, logo, o tamanho 
    // do vetor assumirá a quantidade de elementos:
    int idades_2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (size_t i = 0; i < 10; i++) {
        printf("%d ", idades_2[i]);
    }
    printf("\nTamanho = %ld\n\n", sizeof(idades_2)/sizeof(int));

    // Terceira maneira - Específica o tamanho e inicia cada elemento individualmente
    int idades_3[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (size_t i = 0; i < 10; i++) {
        printf("%d ", idades_3[i]);
    }
    printf("\nTamanho = %ld\n\n", sizeof(idades_3)/sizeof(int));

    // Quarta maneira - Sem inicializar valores - Lixo de memória
    int idades_4[10];
    
    for (size_t i = 0; i < 10; i++) {
        printf("%d ", idades_4[i]);
    }
    printf("\nTamanho = %ld\n\n", sizeof(idades_4)/sizeof(int));

    // =================================================================================================================================
    // Vetores de char
    char letra[10];

    for (size_t i = 0; i < 10; i++) {
        printf("%c ", letra[i]);
    }
    printf("\nTamanho = %ld\n\n", sizeof(letra)/sizeof(char));

    char vogais[5] = {'a', 'e', 'i', 'o', 'u'};

    for (size_t i = 0; i < 5; i++) {
        printf("%c ", vogais[i]);
    }
    printf("\nTamanho = %ld\n\n", sizeof(vogais)/sizeof(char));

    // =================================================================================================================================
    // Vetor de floar
    float notas[3] = {1.3, 4.3, 7.8};

    for (size_t i = 0; i < 3; i++) {
        printf("%.2f ", notas[i]);
    }
    printf("\nTamanho = %ld\n\n", sizeof(notas)/sizeof(float));
    
    return 0;
}