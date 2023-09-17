#include <stdio.h>

/*

Leia a quantidade de bytes de um arquivo e a velocidade de transmissão em bytes por segundo e
imprimir quantos segundos serão necessários para fazer o download do arquivo.

*/

int main(void) {
    int totalByte, timeDownload;
    printf("Digite a quantidade de bytes: ");
    scanf("%d", &totalByte);
    printf("Digite a velocidade de transmissão em bytes por segundo: ");
    scanf("%d", &timeDownload);

    int timeDownloaded = totalByte/timeDownload;

    printf("Seu arquivo irá demorar: %d segundos", timeDownloaded);

    return 0;
}