#include <stdio.h>

/*

Altere o tipo das duas variáveis do exercício 3.1 para
ponto flutuante.
*/

int main(void) {
    float numberOne, numberTwo;
    printf("Digite um número: ");
    scanf("%f", &numberOne);
    printf("Digite outro número: ");
    scanf("%f", &numberTwo);
    float sum = numberOne + numberTwo;
    float subtraction = numberOne - numberTwo;
    float multiplication = numberOne * numberTwo;
    float division = numberOne / numberTwo;
    int remainderDivision = (int)numberOne % (int)numberTwo;
    printf("Soma: %2.f \n", sum);
    printf("Substração: %2.f \n", subtraction);
    printf("Multiplicação: %2.f \n", multiplication);
    printf("Divisão: %2.f \n", division);
    printf("Resto: %d \n", remainderDivision);

    return 0;
}