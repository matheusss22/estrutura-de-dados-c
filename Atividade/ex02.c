#include <stdio.h>  

int main(void){     
    int a, b, c;     
    printf("Digite dois números\n");     
    scanf("%d%d", &a, &b);     
    c = a;     
    a = b;     
    b = a;     
    printf("%d %d\n", a, b);     
    return 0;  
}

// Alternativa - C