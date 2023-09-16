#include <stdio.h>


 /* 
 
Ler uma temperatura em graus Celsius (C) e
apresentá-la convertida em graus Fahrenheit. A
fórmula de conversão é F = (9*C+160)/5.
 
  */

int main(void) {
    float celsius, fahrenheit;
    printf("Digite um valor em graus celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (9*celsius+160)/5;
    printf("O valor em Fahrenheit:  %.2f", fahrenheit);
    return 0;
}