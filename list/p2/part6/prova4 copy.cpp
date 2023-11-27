#include <stdio.h>
#include <string.h>

const int MAX = 5;

int main()
{
    char testString[MAX + 1];
    int qndVogal = 0, qndConsoante = 0;

    printf("Digite uma string de até 20 caracteres: ");
    fgets(testString, sizeof(testString), stdin);

    printf("A string digitada foi: %s\n", testString);

    for (int i = 0; i < strlen(testString); i++)
    {
        char letra = testString[i];
        if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' || letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
        {
            qndVogal++;
        }
        else
        {
            qndConsoante++;
        }
    }

    char vogais[qndVogal + 1], consoantes[qndConsoante + 1];

    int contagemVogais = 0, contagemConsoante = 0;

    for (int i = 0; i < strlen(testString); i++)
    {
        char letra = testString[i];

        if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' || letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
        {
            vogais[contagemVogais] = letra;
            contagemVogais++;
        }
        else
        {
            consoantes[contagemConsoante] = letra;
            contagemConsoante++;
        }
    }

    vogais[qndVogal] = '\0';
    consoantes[qndConsoante] = '\0';

    printf("Vogais: %s\n", vogais);
    printf("Consoantes: %s\n", consoantes);

    return 0;
}
