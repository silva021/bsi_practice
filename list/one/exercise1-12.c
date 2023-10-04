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
    float length, width, valueByMeter;
    printf("Digite o valor do comprimento: ");
    scanf("%f", &length);
    printf("Digite o valor da largura: ");
    scanf("%f", &width);
    printf("Digite o valor por metro de arame: ");
    scanf("%f", &valueByMeter);

    float area = length*width;

    printf("a) A metragem de arame gasta para cercar o terreno, sabendo que o terreno será cercado com 4 voltas de arame farpado.: %2.f\n", area * 4  );
    printf("b) O custo total com o arame farpado: %3.f", (area*valueByMeter) * 4);

    return 0;
}