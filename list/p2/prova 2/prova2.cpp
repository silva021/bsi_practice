#include <stdio.h>

const int LINHA = 3;
const int COLUNA = 3;

/*

Escreva um programa que inicialmente ler uma matriz de números inteiros A(7)[7) através de um procedimento (este procedimento deve apenas ler os valores da matriz)
e posteriormente chame outro procedimento que deve imprimir à soma dos elementos da diagonal principal)

*/

void lerMatriz(int matrizA[LINHA][COLUNA])
{
    for (int linha = 0; linha < LINHA; linha++)
    {
        for (int coluna = 0; coluna < COLUNA; coluna++)
        {   
            printf("[%d][%d] - ", linha + 1, coluna + 1);
            scanf("%d", &matrizA[linha][coluna]);
        }
    }
}

void imprimiSomaDiagonalPrincipal(int matrizA[LINHA][COLUNA]) {
    int somaDiagonal = 0;

    for (int i = 0; i < LINHA; i++)
    {
        somaDiagonal += matrizA[i][i];
    }

    printf("A soma dos elementos da diagonal principal: %d\n", somaDiagonal);
}

int main()
{
    int matrizA[LINHA][COLUNA];

    lerMatriz(matrizA);

    for (int linha = 0; linha < LINHA; linha++)
    {
        for (int coluna = 0; coluna < COLUNA; coluna++)
            printf("| %d ", matrizA[linha][coluna]);

        putchar('\n');
    }

    imprimiSomaDiagonalPrincipal(matrizA);
}
