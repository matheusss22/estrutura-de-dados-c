#include <stdio.h>

long int fibonacci(int n) {
    if (n == 0) {
        return 1;
    } else {
        return (n+fat(n-1));
    }
}

int main(void) {
    int numero = fat(10);
    printf("%d\n", numero);

    return 0;
}