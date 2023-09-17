#include <stdio.h>
 /* 
 
Realize a conversão de km para milhas, imprimindo o resultado da conversão. Sabe-se que:

*/

int main(void) {
    double distanceKm, distanceMilhas;

    printf("Digite a distância em quilômetros: ");
    scanf("%lf", &distanceKm);

    distanceMilhas = distanceKm * 0.621371;

    printf("%.2lf quilômetros equivalem a %.2lf milhas.\n", distanceKm, distanceMilhas);

    return 0;
}