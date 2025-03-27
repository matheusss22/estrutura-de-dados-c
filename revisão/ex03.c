#include <stdio.h>

int main(void) {
    int x,y;
    printf("Digite o número da tabuada: ");
    scanf("%d", &x);
    getchar();

    printf("Tabuada do %d\n", x);

    int result = x;
    
    // Gera a tabuada
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", i, x, i*x);
    }
    
    return 0;
}
