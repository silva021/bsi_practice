#include <stdio.h>

/*

Leia a base e a altura de um triângulo, calcule e imprima sua área.

*/

int main(void) {
    float base, height;
    printf("Digite a base do triangulo: ");
    scanf("%f", &base);
    printf("Digite a altura do triangulo: ");
    scanf("%f", &height);
    float volume = (base * height) /2;
    printf("Aréa do triangulo: %2.f", volume);

    return 0;
}