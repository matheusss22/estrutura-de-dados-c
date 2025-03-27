#include <stdio.h>

int main(void) {
    int i, j;
    int k=1; 
    int mat[4][4];

    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) {
            mat[i][j]=k;
            k++;
        }
    }

    for(i=0; i<4; i++) {
        for (j=2; j<4; j++) {
            if(i%j==0) {
                printf("%d; ", mat[j][i]);
            }
        }
    }
            
    return 0;
}

// Alternativa - C
