#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int var01 = 0, var02 = 0;

    scanf("%d %d", &var01, &var02);

    printf("%p %p\n", &var01, &var02);

    if (var01 > var02)
        printf("A variável 1 é maior que a variável 2\n");
    else
        printf("A variável 2 é maior que a variável 1\n");
\
    return 0;
}