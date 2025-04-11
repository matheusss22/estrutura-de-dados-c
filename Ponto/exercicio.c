#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Linhas são a cidade de partida
// Colunas são a cidade de destino

#define CIDADES 9

const char* nomes[CIDADES] = { "A", "F", "JP", "M", "N", "R", "S", "SL", "T"};

int distancia[CIDADES][CIDADES] = {
    {   0,  812,  438,  210,  550,  398,  267, 1218, 1272 },
    { 812,    0,  562,  730,  444,  640, 1018,  640,  432 },
    { 438,  562,    0,  294,  144,  118,  758, 1208,  987 },
    { 210,  730,  294,    0,  423,  191,  464, 1220, 1126 },
    { 550,  444,  144,  423,    0,  252,  852, 1064,  843 },
    { 398,  640,  118,  191,  252,    0,  654, 1197,  935 },
    { 267, 1018,  758,  464,  852,  654,    0, 1319, 1000 },
    {1218,  640, 1208, 1220, 1064, 1197, 1319,    0,  320 },
    {1272,  432,  987, 1126,  843,  935, 1000,  320,    0 }
};


// Protótipos
int indice(const char* cidade);
int distancia_cidades(const char* origem, const char* destino);


// Função principal
int main(void) {
    char origem[30], destino[30];

    printf("Digite a cidade de origem: ");
    scanf(" %[^\n]", origem);  // lê inclusive nomes com espaços

    printf("Digite a cidade de destino: ");
    scanf(" %[^\n]", destino);

    int distancia = distancia_cidades(origem, destino);

    if (distancia > 400) {
        
        int distancia;
        int menor_distancia = 10000;

        char escala[3];

        for (int i = 0; i < CIDADES; i++) {
            if (i == indice(destino) || i == indice(origem)) {
                continue;
            }

            distancia = distancia_cidades(origem, nomes[i]) + distancia_cidades(nomes[i], destino);

            if (distancia <= menor_distancia) {
                menor_distancia = distancia;
                strcpy(escala, nomes[i]);
            }
        }

        printf("Precisa fazer escala!\n");
        printf("Viagem: %s/%s/%s\n", origem, escala, destino);
        printf("Distância total = %d\n",menor_distancia);


    } else {
        printf("Não precisa de fazer escala\n");
        printf("Viagem: %s/%s\n", origem, destino);
    }

    return 0;
}


// Definição da Função distancia_cidades
int distancia_cidades(const char* origem, const char* destino) {

    int i_origem = indice(origem);
    int i_destino = indice(destino);

    return distancia[i_origem][i_destino];

}


// Encontra o índice da cidade pelo nome
int indice(const char* cidade) {
    for (int i = 0; i < CIDADES; i++) {
        if (strcmp(nomes[i], cidade) == 0) return i;
    }
    return -1; // cidade não encontrada
}
