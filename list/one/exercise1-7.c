#include <stdio.h>
#include <math.h> 
 /* 
 
Leia o raio de uma esfera, calcule e imprima seu volume, sabendo que:
 
*/

int main(void) {
    float radius, volume;
    printf("Digite o raio da esfera: ");
    scanf("%f", &radius);
    volume = (4* M_PI * pow(radius, 3))/ 3;
    printf("O volume da esfera:  %.2f", volume);
    return 0;
}