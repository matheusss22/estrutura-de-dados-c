#include <stdio.h>

int main() {

    int x,y;

    // Loop para verificar se o usuário entrou com valores repetidos
    while (1) {
        printf("Digite o primeiro numero: ");
        scanf("%d", &x);
        getchar();

        printf("Digite o segundo numero: ");
        scanf("%d", &y);
        getchar();


        if (x==y) {
            printf("Não digite valores iguais!\n");
            continue;
        }
        break;
    }

    int result = 1;
    
    // Um número x elevado a potência y é mesma coisa que multiplicar x em y vezes, exemplo 2 ^ 4 = 2 * 2 * 2 * 2
    for (int i = 0; i < y; i++) {
        result *= x;
    }

    printf("Resultado de %d ^ %d = %d\n\n", x, y, result);       
    
    return 0;
}