#include <stdio.h> 

int main(void) {
    
    int x = 1;

    int m = -1;

    int count = 0;

    for (int a = 0; x; a++) {
        m++;
        if(m % 10 == 0) {
            x = 0;
        }
        count++;
    }
    printf("%d\n", (-1)%10);
    printf("%d\n", count);

    return 0;
}

// Alternativa - B