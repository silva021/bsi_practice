#include <stdio.h>

/*

Leia o peso e altura de uma pessoa, calcule e imprima seu IMC. Sabe-se que IMC = peso/altura2

*/

int main(void) {
    float weight, height;
    printf("Digite o seu peso: ");
    scanf("%f", &weight);
    printf("Digite a sua altura: ");
    scanf("%f", &height);
    float imcValue = weight / pow(height, 2);
    printf("Seu imc: %3.f", imcValue);

    return 0;
}