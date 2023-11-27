#include <stdio.h>

/*

Escreva um programa que gerencie o estoque de uma empresa.
Faça à leitura dos produtos que contenham OS seguintes campos:

nome do produto,
quantidade em estoque
preço unitário.

À empresa possui 30 Brodutos.
Ao final, imprima as informações de todos os produtos.
Informe também O produto que esteja com O menor estoque.

Utilize procedimentos para realizar operações de leitura e escrita de um único produto.

Além desses procedimentos, opcionalmente poderão ser criados procedimentos para ler e imprimir vários produtos, desde que estes chamem OS procedimentos anteriores.

Dica: utilize estrutura.

*/

const int MAX = 2;

struct Estoque
{
    char nome[50];
    int qtn;
    int preco;
};

void escreverEstoque(Estoque estoque)
{
    printf("\nNome: %sQuantidade: %d\nPreco: %d", estoque.nome, estoque.qtn, estoque.preco);
}

void lerEstoque(Estoque *estoque)
{   
    printf("Nome: ");
    fgets(estoque->nome, sizeof(estoque->nome), stdin);
    printf("Quantidade: ");
    scanf("%d", &estoque->qtn);
    printf("Preco: ");
    scanf("%d", &estoque->preco);
    printf("---------------------- \n");
    fflush(stdin);
}

int main()
{
    Estoque estoques[MAX];

    for (int i = 0; i < MAX; i++)
    {
        lerEstoque(&estoques[i]);
    }

    int posicaoMenor = 0;

    for (int i = 0; i < MAX; i++)
    {
        if (estoques[i].qtn < estoques[posicaoMenor].qtn)
        {
            posicaoMenor = i;
        }
    }

    printf("Produto com menor estoque\nNome: %sQuantidade de estoque: %d itens\n", estoques[posicaoMenor].nome, estoques[posicaoMenor].qtn);

    for (int i = 0; i < MAX; i++)
    {
        printf("\n\nProduto ---------------------------");
        escreverEstoque(estoques[i]);
    }
}