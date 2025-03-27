#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Exercicio 02 - lista_4

int main(void) {

    int vetor_01[25];
    int vetor_02[25];
    int vetor_03[25];

    srand(time(NULL));

    for (size_t i = 0; i < 25; i++) {
        vetor_01[i] = rand() % 100 + 1;
        vetor_02[i] = rand() % 100 + 1;
        vetor_03[i] = vetor_01[i] + vetor_02[i];
    }

    printf("Vetor 01: ");
    for (size_t i = 0; i < 25; i++) {
        printf("%3d ", vetor_01[i]);
    }
    printf("\n");

    printf("Vetor 02: ");
    for (size_t i = 0; i < 25; i++) {
        printf("%3d ", vetor_02[i]);
    }
    printf("\n");

    printf("Vetor 03: ");
    for (size_t i = 0; i < 25; i++) {
        printf("%3d ", vetor_03[i]);
    }
    printf("\n");

    return 0;
}