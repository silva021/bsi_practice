#include <stdio.h>
/*

Leia 3 notas de um aluno e seus respectivos pesos. Depois, calcule e imprima a média ponderada
do aluno.

*/

int main(void)
{
    float note[3], weight[3];
    for (int indice = 0; indice < 3; indice++)
    {
        printf("Digite sua nota: ");
        scanf("%f", &note[indice]);
        printf("Digite o peso dessa nota: ");
        scanf("%f", &weight[indice]);
    }
    float weightTotal = weight[0] + weight[1] + weight[2];
    float average = (note[0] * weight[0] + note[1] * weight[1] + note[2] * weight[2]) / weightTotal;
    printf("Média ponderada desse usuário é:  %.2f", average);
    return 0;
}