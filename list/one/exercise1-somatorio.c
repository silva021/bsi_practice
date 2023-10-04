#include <stdio.h>
/*

12. Leia o comprimento e a largura de um terreno retangular, além do preço do metro de arame
farpado. Depois, calcule e imprima:
a) A metragem de arame gasta para cercar o terreno, sabendo que o terreno será cercado com 4
voltas de arame farpado.
b) O custo total com o arame farpado.

*/

int main(void)
{
    int size;
    double total = 1;
    printf("Digite um valor: ");
    scanf("%d", &size);

    /*  Somatorio
    for (int indice = 1; indice <= size; indice++) {
        total += (2 * indice) - 1;
    }
    */

    printf("%f + ", total);
    for (int indice = 1; indice <= size; indice++)
    {
        total += 1/indice;
        printf("1/%d + ", indice);
    }

    printf("\n\nValor: %d", total);
    return 0;
}