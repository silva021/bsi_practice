#include <stdio.h>

/*

Leia o valor de um produto e o percentual de desconto e exiba seu novo valor com o desconto e o
valor descontado.

*/

int main(void) {
    float produtoValue, discount;
    printf("Digite o valor do produto: ");
    scanf("%f", &produtoValue);
    printf("Digite o seu desconto: ");
    scanf("%f", &discount);
    float discountValue  = produtoValue * (discount/100);
    float discountPercent = produtoValue - discountValue;

    printf("O valor do produto descontado agora: %3.f e foi descontado %3.f", discountValue, discountPercent);

    return 0;
}