#include <stdio.h>
#include <stdlib.h>

// Exercicio 01 - lista_4

int main(void) {

    int vetor_01[10];
    int vetor_02[10];

    for (size_t i = 0; i < 10; i++) {
        printf("Digite o elemento %ld: ", i);
        scanf("%d", &vetor_01[i]);
        vetor_02[i] = vetor_01[i] * vetor_01[i];
    }

    printf("===================================================================================\n");
    printf("Vetor 01: ");

    for (size_t i = 0; i < 10; i++){
        printf("%3d ", vetor_01[i]);
    }
    
    printf("\n===================================================================================\n");
    printf("Vetor 02: ");

    for (size_t i = 0; i < 10; i++){
        printf("%3d ", vetor_02[i]);
    }

    printf("\n");

    return 0;
}