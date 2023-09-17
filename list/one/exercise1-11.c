#include <stdio.h>
/*

11. Leia o comprimento e a largura de um terreno retangular, além do preço do metro quadrado de
grama. Depois, calcule e imprima:
a) A área a ser coberta de grama.
b) O custo total de grama para gramar o terreno.
*/

int main(void)
{
    float length, width, valueBySquareMeter;
    printf("Digite o valor do comprimento: ");
    scanf("%f", &length);
    printf("Digite o valor da largura: ");
    scanf("%f", &width);
    printf("Digite o valor por metro quadrado de grama: ");
    scanf("%f", &valueBySquareMeter);

    float area = length*width;

    printf("a) A área a ser coberta de grama: %2.f\nb) O custo total de grama para gramar o terreno: %3.f", area, (area*valueBySquareMeter));

    return 0;
}