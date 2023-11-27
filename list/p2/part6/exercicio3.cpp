#include <stdio.h>

const int TAM_VET = 3;

int main() {

    int v[TAM_VET];
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    for (int i = 0; i < TAM_VET; i++)
    {
        printf("Numero %d: ", i+1);
        scanf("%d", &v[i]);
    }

    int qntItensMaiores = 0;

    for (int i = 0; i < TAM_VET; i++) {
        if (v[i] > numero) {
            qntItensMaiores++;
        }
    }

    printf("Quantos itens do vetor são maiores que o número (%d) = %d", numero, qntItensMaiores);

    return 0;    
}