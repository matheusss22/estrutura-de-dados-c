#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int tamanho_lista;

    printf("Digite a quantidade de produtos da lista: ");
    scanf("%d", &tamanho_lista);
    getchar();

    // Alocações de memória para os produtos	
    char **produto = (char **)malloc(tamanho_lista * sizeof(char *));
    for (__uint8_t i = 0; i < tamanho_lista; i++) {
        produto[i] = (char *)malloc(50 * sizeof(char));
    }

    // Alocação de memória para as quantidades de produtos
    int *quantidades_produto = (int *)malloc(tamanho_lista * sizeof(int));
    
    // Alocação de memória para os valores dos produtos
    float *valores_produtos = (float *)malloc(tamanho_lista * sizeof(float));

    // Caso ocorre um erro na alocação de memórias, imprime a mensagem de erro e encerra o programa.
    if (produto == NULL || quantidades_produto == NULL || valores_produtos == NULL) {
        printf("Erro ao alocar memória.");
        return 1;
    }

    printf("========================================\n");

    // Entrada dos nomes dos produtos:
    for (__uint8_t i = 0; i < tamanho_lista; i++) {
        printf("Digite o nome do produto %d: ", i + 1);
        fgets(produto[i], 50, stdin);
        produto[i] = strtok(produto[i], "\n");
    }

    printf("========================================\n");

    // Entrada da quantidade de cada produto:
    for (__uint8_t i = 0; i < tamanho_lista; i++) {
        printf("Digite a quantidade de %s: ", produto[i]);
        scanf("%d", &quantidades_produto[i]);
        getchar();
    }

    printf("========================================\n");

    // Entrada do valor de cada produto:
    for (__uint8_t i = 0; i < tamanho_lista; i++) {
        printf("Digite o valor unitário de %s: R$", produto[i]);
        scanf("%f", &valores_produtos[i]);
        getchar();

    }

    printf("========================================\n");

    float total = 0.0;

    // Imprime relatório de compra
    printf("Retalório de compra:\n");
    for (__uint8_t i = 0; i < tamanho_lista; i++) {
        printf("%d x %s = R$%.2f\n", quantidades_produto[i], produto[i], quantidades_produto[i] * valores_produtos[i]);
        total += quantidades_produto[i] * valores_produtos[i];
    }
    printf("Total = R$%.2f\n", total);

    // Libera a memória alocada
    for (__uint8_t i = 0; i < tamanho_lista; i++) {
        free(produto[i]);
    }
    free(produto);
    free(quantidades_produto);
    free(valores_produtos);

    return 0;
}