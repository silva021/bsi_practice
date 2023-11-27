#include <stdio.h>

/*

Escreva UM programa completo que leia uma matriz de números inteiros A(7)(9) em um procedimento,
em seguida faça à multiplicação pela sua transposta usando um outro procedimento com apenas dois parametros (a matriz de entrada, e a matriz resultante), 
e por último imprima a matriz resultante da multiplicação usando um terceiro procedimento a ser chamado do programa principal.

Cuidado: É possível criar outra matriz para guardar à transposta dentro do procedimento ou pode usar à mesma matriz, tenha cuidado.
 
*/

const int LINHAS = 2;
const int COLUNAS = 2;

void lerMatriz(int matrizA[LINHAS][COLUNAS])
{
    for (int linha = 0; linha < LINHAS; linha++)
    {
        for (int coluna = 0; coluna < COLUNAS; coluna++)
        {
            scanf("%d", &matrizA[linha][coluna]);
        }
    }
}

void criarMatrizTransposta(int matrizA[LINHAS][COLUNAS])
{
    int temp;
    for (int linha = 0; linha < LINHAS; linha++)
    {
        for (int coluna = linha + 1; coluna < COLUNAS; coluna++)
        {
            temp = matrizA[linha][coluna];
            matrizA[linha][coluna] = matrizA[coluna][linha];
            matrizA[coluna][linha] = temp;
        }
    }
}

int main()
{
    //int matrizA[LINHAS][COLUNAS];

        int matrizA[LINHAS][COLUNAS] = {
            {2, 3},
            {4, 1}
        };
    //lerMatriz(matrizA);

    for (int linha = 0; linha < LINHAS; linha++)
    {
        for (int coluna = 0; coluna < COLUNAS; coluna++)
            printf("%5d ", matrizA[linha][coluna]);

        putchar('\n');
    }
    printf("MATRIZ TRANSPOSTA \n");
    criarMatrizTransposta(matrizA);

    for (int linha = 0; linha < LINHAS; linha++)
    {
        for (int coluna = 0; coluna < COLUNAS; coluna++)
            printf("%5d ", matrizA[linha][coluna]);

        putchar('\n');
    }
}