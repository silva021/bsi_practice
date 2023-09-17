#include <stdio.h>

/*

Leia o lado de um cubo, calcule e imprima seu volume.

*/

int main(void) {
    float sideOfTheCube;
    printf("Qual é o lado desse cubo: ");
    scanf("%f", &sideOfTheCube);
    float volume = pow(sideOfTheCube, 3);
    printf("Volume do cubo: %2.f", volume);

    return 0;
}