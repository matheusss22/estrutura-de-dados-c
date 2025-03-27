#include <stdio.h>

int main(void) {

    int tabela[15];

    for (int i = 0; i < 15; i++) {
        printf("Digite o elemento %d: ", i);
        scanf("%d", &tabela[i]);
    }

    printf("\n\n");

    for (int i = 0; i < 15; i++) {
        printf("Valor de [%d] %d\n", i, tabela[i]);
    }
    
    return 0;
}