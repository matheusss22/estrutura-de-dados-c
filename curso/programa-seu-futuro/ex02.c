#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // Leitura de um vetor do teclado
    int tamanho = 10;
    int valores[tamanho];

    // Percorre o vetor para inputar os elementos
    for (size_t i = 0; i < tamanho; i++) {
        printf("Digite o valor %ld: ", i+1);
        scanf("%d", &valores[i]);
        getchar();
    }

    // Percorre o vetor para dobrar seus elementos
    for (size_t i = 0; i < tamanho; i++) {
        valores[i]*=2;
    }

    printf("====================================================================================\n");
    printf("Valores digitados: ");

    // Percorre o vetor para imprimir o resultado
    for (size_t i = 0; i < tamanho; i++) {
        printf("%d ",valores[i]);
    }
    printf("\n");

    printf("====================================================================================\n");
    printf("Gerando números aleatórios: ");

    srand(time(NULL));

    // Percorre o vetor para armazenar valores aleatórios
    for (size_t i = 0; i < tamanho; i++) {
        // Gera números aleatórios de 1 até 100:
        valores[i] = rand() % 101 + 1; 
    }

    // Percorre o vetor para imprimir os números aleatórios
    for (size_t i = 0; i < tamanho; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");
    
    return 0;
}
