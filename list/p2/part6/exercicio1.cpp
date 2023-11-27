#include <stdio.h>

const int TAM_VET = 10;

int main() 
{
    int v[TAM_VET];
    int w[TAM_VET];

    printf("Digite 3 numeros inteiros:\n");
    for (int i = 0; i < TAM_VET; ++i) {
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < TAM_VET; ++i) {
        w[i] = v[i] * v[i];
    }

    for (int i = 0; i < TAM_VET; ++i) {
        printf("%d ", w[i]);
    }

    return 0;
}