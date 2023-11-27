#include <stdio.h>

int main() {
    int votosPrimeiroCand = 0, votosSegundoCand= 0, votosTerceiroCand= 0, votosQuartoCand= 0, votosNulos= 0, votosBrancos= 0;
    while (1)
    {
        int voto;
        scanf(" %d", &voto);

        if (voto == 0) {
            break;
        } else if(voto == 1) {
            votosPrimeiroCand++;

        } else if(voto == 2) {
            votosSegundoCand++;
        } else if(voto == 3) {
            votosTerceiroCand++;
        } else if(voto == 4) {
            votosQuartoCand++;
            
        } else if(voto == 5) {
            votosNulos++;
            
        } else if(voto == 6) {
            votosBrancos++;
            
        }
    }

    printf("\nPrimeiro candidato recebeu %d votos", votosPrimeiroCand);
    printf("\nSegundo candidato recebeu %d votos", votosSegundoCand);
    printf("\nTerceiro candidato recebeu %d votos", votosTerceiroCand);
    printf("\nQuarto candidato recebeu %d votos", votosQuartoCand);
    printf("\nVotos nulos recebeu %d votos", votosNulos);
    printf("\nVotos brancos recebeu %d votos", votosBrancos);

    return 0;
    
}

int divisao(int dividendo, int divisor, int *resto) {
    *resto = dividendo%divisor;
    return dividendo/divisor;
}