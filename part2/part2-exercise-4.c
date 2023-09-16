#include <stdio.h>


 /* 
 
Calcular e apresentar o volume de uma lata de
óleo, utilizando a fórmula: 
volume = 3.14159 * raio * raio * altura.
 
  */

int main(void) {
    float radius, height;
    printf("Digite o valor do Raio da Lata: ");
    scanf("%f", &radius);
    printf("Digite o valor da altura da Lata: ");
    scanf("%f", &height);

    float volume = 3.14159 * (radius * radius) * height;

    printf("O volume desta lata:  %.2f", volume);
    return 0;
}