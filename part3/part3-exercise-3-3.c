#include <stdio.h>

/*

Crie um programa com duas variáveis inteiras
inicializadas e imprima seus valores. Em seguida troque o
valor de uma variável com a outra e imprima novamente os
valores.

*/

int main(void) {
    int numberOne = 4, numberTwo = 8;
    printf("primeiro valor: %d \nSegundo valor %d\n", numberOne, numberTwo);
    numberOne = numberTwo;
    printf("Agora com valores alterado\nprimeiro valor: %d \nSegundo valor %d", numberOne, numberTwo);
    return 0;
}