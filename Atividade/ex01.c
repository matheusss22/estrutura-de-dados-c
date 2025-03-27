#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int matriz[5][6] = {0};

    for (int i = 0 ; i <= 4 ; i++){ 
        for (int j = 0 ; j <= 5 ; j++){ 
          printf("%d ", matriz[i][j]); 
        }
        printf("\n"); 
      }

    return 0;
}

// Alternativa - A