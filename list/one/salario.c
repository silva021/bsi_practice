#include <stdio.h>

void lerFuncionario(char *funcao, int *anosExperiencia, int *horasContratada, int *horasTrabalhada);
void imprimirFolhaPagamento(int salarioBruto, int descontoINSS, int descontoIR,int horasExcendentes);
void calcularSalario(
    char funcao,
    int anosExperiencia,
    int horasContratada,
    int horasTrabalhada,
    int *salarioBruto,
    int *descontoINSS,
    int *descontoIR);

int main(void)
{
    int quantidadeFuncionario;

    do
    {
        printf("\nQtd: ");
        scanf(" %d", &quantidadeFuncionario);

        if (quantidadeFuncionario <= 0)
        {
            printf("ATENÇAO: a quantidade de funcionarios deve ser maior que zero. Informe novamente.");
        }
    } while (quantidadeFuncionario <= 0);

    for (int c = 1; c <= quantidadeFuncionario; c++)
    {
        char funcao;
        int anosExperiencia, horasContratada, horasTrabalhada, salarioBruto, descontoINSS, descontoIR;

        printf("\nFuncionario %d", c);
        lerFuncionario(&funcao, &anosExperiencia, &horasContratada, &horasTrabalhada);
        calcularSalario(funcao, anosExperiencia, horasContratada, horasTrabalhada, &salarioBruto, &descontoINSS, &descontoIR);
        printf("\nFolha de Pagamento do Func. %d", c);
        imprimirFolhaPagamento(salarioBruto, descontoINSS, descontoIR, (horasTrabalhada - horasContratada));

    }

    return 0;
}

void lerFuncionario(
    char *funcao,
    int *anosExperiencia,
    int *horasContratada,
    int *horasTrabalhada)
{
    char auxFuncao;
    int auxAnosExperiencia;
    int auxHorasContratada;
    int auxHorasTrabalhada;
    while (1)
    {
        printf("\n- Funcao: ");
        scanf(" %c", &auxFuncao);

        if (auxFuncao == 'p' || auxFuncao == 'P' || auxFuncao == 'a' || auxFuncao == 'A' ||
            auxFuncao == 'g' || auxFuncao == 'G')
        {
            break;
        }
    }

    while (1)
    {
        printf("- Anos de Exp.: ");
        scanf(" %d", &auxAnosExperiencia);

        if (auxAnosExperiencia > 0)
        {
            break;
        }
    }

    while (1)
    {
        printf("- Horas contratadas: ");
        scanf(" %d", &auxHorasContratada);

        if (auxHorasContratada > 0)
        {
            break;
        }
    }

    while (1)
    {
        printf("- Horas trabalhadas: ");
        scanf(" %d", &auxHorasTrabalhada);

        if (auxHorasTrabalhada > 0)
        {
            break;
        }
    }

    *funcao = auxFuncao;
    *anosExperiencia = auxAnosExperiencia;
    *horasContratada = auxHorasContratada;
    *horasTrabalhada = auxHorasTrabalhada;
}

void calcularSalario(
    char funcao,
    int anosExperiencia,
    int horasContratada,
    int horasTrabalhada,
    int *salarioBruto,
    int *descontoINSS,
    int *descontoIR)
{
    int valorHora;
    int percentualDesconto;
    if (anosExperiencia >= 1 && anosExperiencia <= 2)
    {
        if (funcao == 'p' || funcao == 'P')
        {
            valorHora = 25;
        }
        else if (funcao == 'a' || funcao == 'A')
        {
            valorHora = 45;
        }
        else
        {
            valorHora = 85;
        }
    }
    else if (anosExperiencia >= 3 && anosExperiencia <= 5)
    {
        if (funcao == 'p' || funcao == 'P')
        {
            valorHora = 30;
        }
        else if (funcao == 'a' || funcao == 'A')
        {
            valorHora = 55;
        }
        else
        {
            valorHora = 102;
        }
    }
    else
    {
        if (funcao == 'p' || funcao == 'P')
        {
            valorHora = 38;
        }
        else if (funcao == 'a' || funcao == 'A')
        {
            valorHora = 70;
        }
        else
        {
            valorHora = 130;
        }
    }

    int horasExcedentes = horasTrabalhada - horasContratada;
    int valorHoraExtra = valorHora * horasExcedentes;

    if (horasExcedentes >= 1 && horasExcedentes <= 13)
    {
        valorHoraExtra = valorHoraExtra + ((23 / 100.0) * valorHoraExtra);
    }
    else if (horasExcedentes >= 14 && horasExcedentes <= 22)
    {
        valorHoraExtra = valorHoraExtra + ((37 / 100.0) * valorHoraExtra);
    }
    else if (horasExcedentes > 22)
    {
        valorHoraExtra = valorHoraExtra + ((56 / 100.0) * valorHoraExtra);
    }

    int auxSalarioBruto = (valorHora * horasContratada) + valorHoraExtra;
    if (valorHoraExtra < 0)
    {
        valorHoraExtra = -valorHoraExtra;
    }
    if (auxSalarioBruto >= 0 && auxSalarioBruto <= 1500)
    {
        percentualDesconto = 0;
    }
    else if (auxSalarioBruto >= 1500 && auxSalarioBruto <= 2700)
    {
        percentualDesconto = 15;
    }
    else if (auxSalarioBruto >= 2700 && auxSalarioBruto <= 4200)
    {
        percentualDesconto = 20;
    }
    else
    {
        percentualDesconto = 30;
    }

    double auxDescontoINSS = 0.0;
    auxDescontoINSS = ((11 / 100.0) * auxSalarioBruto);
    double auxDescontoIR = 0.0;
    auxDescontoIR = (percentualDesconto / 100.0) * (auxSalarioBruto - auxDescontoINSS);

    *descontoINSS = auxDescontoINSS;
    *descontoIR = auxDescontoIR;
    *salarioBruto = auxSalarioBruto;
}

void imprimirFolhaPagamento(
    int salarioBruto,
    int descontoINSS,
    int descontoIR,
    int horasExcendentes)
{
    printf("\n- Salario Bruto...(R$): %d", salarioBruto);
    if(horasExcendentes > 0) {
        printf("\n- Horas Excedentes (h): %dhr", horasExcendentes);
    }
    printf("\n- Desconto INSS...(R$): %d", descontoINSS);
    printf("\n- Desconto IR.....(R$): %d", descontoIR);
    printf("\n- Salario Liquido.(R$): %d", (salarioBruto - descontoINSS - descontoIR));
}