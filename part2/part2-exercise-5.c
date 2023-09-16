#include <stdio.h>


 /* 
 
Elaborar um programa que calcule e apresente
o volume de uma caixa retangular, por meio da
fórmula volume = comprimento*largura*altura.
 
  */

int main(void) {
    float length, height, width;
    printf("Digite o valor do comprimento da caixa: ");
    scanf("%f", &length);
    printf("Digite o valor da largura da caixa: ");
    scanf("%f", &width);
    printf("Digite o valor da altura da  caixa: ");
    scanf("%f", &height);

    float volume = length * height * width;

    printf("O volume desta caixa:  %.2f", volume);
    return 0;
}