#include <stdio.h>

const int TAM_VET = 3;

int main() {

    int v[TAM_VET];

    for (int i = 0; i < TAM_VET; i++)
    {
        printf("Numero %d: ", i+1);
        scanf("%d", &v[i]);
    }

    for (int i = TAM_VET; i >= 0; --i) {
        if (v[i] % 2 == 0) {
            printf("| %d ", v[i]);
        }
    }

    return 0;    
}