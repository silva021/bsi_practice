#include <stdio.h>


const int NUM_LIN = 2;
const int NUM_COL = 2;

int main() {

    int a[NUM_LIN][NUM_COL];
    int b[NUM_LIN][NUM_COL];
    int multiplicador;

    for (int linha = 0; linha < NUM_LIN; linha++) {
        for (int coluna = 0; coluna < NUM_COL; coluna++) {
            scanf("%d", &a[linha][coluna]);
        }
    }

    printf("Digite o multiplicador");
    scanf("%d", &multiplicador);

    for (int linha = 0; linha < NUM_LIN; linha++) {
        for (int coluna = 0; coluna < NUM_COL; coluna++) {
            b[linha][coluna] = a[linha][coluna] * multiplicador;
        }
    }

    for (int i = 0; i < NUM_LIN; i++) {
        for (int j = 0; j < NUM_COL; j++)
            printf("%5d ", b[i][j]);

        putchar('\n');
    }

}