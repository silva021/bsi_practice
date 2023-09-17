#include <stdio.h>

/*

Crie um programa que declara duas variáveis inteiras.
Em seguida, inicialize essas variáveis e imprima a soma,
subtração, multiplicação, divisão e resto da divisão entre
elas.

*/

int main(void) {
    int numberOne, numberTwo;
    printf("Digite um número: ");
    scanf("%d", &numberOne);
    printf("Digite outro número: ");
    scanf("%d", &numberTwo);
    int sum = numberOne + numberTwo;
    int subtraction = numberOne - numberTwo;
    int multiplication = numberOne * numberTwo;
    int division = numberOne / numberTwo;
    int remainderDivision = numberOne % numberTwo;
    printf("Soma: %d \n", sum);
    printf("Substração: %d \n", subtraction);
    printf("Multiplicação: %d \n", multiplication);
    printf("Divisão: %d \n", division);
    printf("Resto: %d \n", remainderDivision);

    return 0;
}