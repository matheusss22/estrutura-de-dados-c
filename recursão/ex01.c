#include <stdio.h>

long int fat(int n) {
    if (n == 0 || n ==1) {
        return 1;
    } else {
        return (n*fat(n-1));
    }
}

int main(void) {

    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);
    getchar();

    numero= fat(numero);
    printf("%d\n", numero);
}