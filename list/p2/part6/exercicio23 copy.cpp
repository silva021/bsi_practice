#include <stdio.h>

const int LINHA = 2;
const int COLUNA = 2;

int main() {
    int matrizA[LINHA][COLUNA];
    int matrizB[LINHA][COLUNA];

    printf("MATRIZ A \n");
    
    for (int linha = 0; linha < LINHA; linha++) {
        for (int coluna = 0; coluna < COLUNA; coluna++) {
            scanf("%d",&matrizA[linha][coluna]);
        }
    }

    printf("MATRIZ B \n");

    for (int linha = 0; linha < LINHA; linha++) {
        for (int coluna = 0; coluna < COLUNA; coluna++) {
            scanf("%d",&matrizB[linha][coluna]);
        }
    }

    int matrizC[LINHA][COLUNA];

    for (int linha = 0; linha < LINHA; linha++) {
        for (int coluna = 0; coluna < COLUNA; coluna++) {
            matrizC[linha][coluna] = matrizA[linha][coluna] * matrizB[linha][coluna];
        }
    }

    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++)
            printf("%5d ", matrizC[i][j]);

        putchar('\n');
    }

}