#include <stdio.h>
#include <math.h> 
 /* 
 
Calcule e imprima o volume de um cilindro que será enchido de água para um espetáculo de
mágica. Para isso, seu programa deverá ler o raio e a altura do cilindro. Considere:

*/

int main(void) {
    float radius, height, volume;
    printf("Digite o raio do cilindro: ");
    scanf("%f", &radius);
    printf("Digite a altura raio do cilindro: ");
    scanf("%f", &height);
    volume = M_PI * pow(radius, 2) * height;
    printf("O volume do cilindro:  %.2f", volume);
    return 0;
}