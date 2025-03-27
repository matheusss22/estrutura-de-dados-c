#include <stdio.h>

// Faça uma Função recursiva que retorna o máximo divisor 
// comum(MDC) de dois inteiros positivos.

int mdc(int n1, int n2);

int main(void) {

    int n1, n2;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    getchar();

    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    getchar();

    int num_mdc = mdc(n1, n2);

    printf("MDC de %d e %d = %d\n", n1, n2, num_mdc);

    return 0;
}

int mdc(int n1, int n2) {
    
    if (n1 < n2)
        return mdc(n2, n1);
    
    if (n1 - n2 == 0)
        return n1;

    return mdc(n2, (n1 - n2));   
}