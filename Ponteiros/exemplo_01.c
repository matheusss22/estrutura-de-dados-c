#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int i = 8;
    int *x;

    x = &i;

    printf("Endereço de x =%d\nValor de x =%d\n", *x, x);
    printf("Endereço de i =%d\nValor de i =%d\n", i, &i);
    
    return 0;
}