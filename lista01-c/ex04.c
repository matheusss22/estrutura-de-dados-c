#include <stdio.h>

int main() {
    char nome[100];
    float nota_jurados[7];

    // Maneira de capiturar o nome completo (com espaços):
    printf("Atleta: ");
    fgets(nome, sizeof(nome), stdin);


    for (int i = 0; i < 7; i++) {
        printf("Digite a nota do jurado %d: ", i+1);
        scanf("%f", &nota_jurados[i]);
        getchar();
    }
    
    float melhor_nota = nota_jurados[0];
    float pior_nota = nota_jurados[0];

    for (int i = 1; i < 7; i++) {
        if (melhor_nota<=nota_jurados[i]) {
            melhor_nota=nota_jurados[i];
        }

        if (pior_nota>=nota_jurados[i]) {
            pior_nota=nota_jurados[i];
        }
    }

    float acumulador = 0;
    for (int i = 0; i < 7; i++) {
        acumulador += nota_jurados[i];
    }

    float media = (acumulador - melhor_nota - pior_nota)/5;
    

    printf("\nResultado final:\n");
    printf("Atleta: %s", nome);
    printf("Melhor nota = %.2f\n", melhor_nota);
    printf("Pior nota = %.2f\n", pior_nota);
    printf("Média = %.2f\n", media);

    return 0;
}
