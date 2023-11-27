#include <stdio.h>

int main(void)
{
    int quantidadeDeJogadas = -1;
    int partidasVencidadasCoroa = 0;
    int partidasVencidadasCara = 0;

    do
    {
        printf("Quantas rodadas teve: ");
        scanf("%d", &quantidadeDeJogadas);
    } while (quantidadeDeJogadas < 0 || quantidadeDeJogadas > 10000);

    for (int c = 1; c <= quantidadeDeJogadas; c++)
    {
        int vencedor;

        printf("%d - Quem foi o vencedor: ", c);
        scanf(" %d", &vencedor);

        if (vencedor != 0 && vencedor != 1)
        {
            printf("Ocorreu um erro");
            break;
        }

        if (vencedor == 0)
        {
            partidasVencidadasCara++;
        }
        else
        {
            partidasVencidadasCoroa++;
        }

        if (c == quantidadeDeJogadas)
        {
            printf("Maria venceu %d vez(es) e Joao venceu %d vez(es).", partidasVencidadasCara, partidasVencidadasCoroa);
        }
    }

    return 0;
}