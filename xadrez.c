#include <stdio.h>

// Desafio de Xadrez - MateCheck

// Função para validar a opção de direção e retornar em uma variável string
char *validaDirecao(int opcao)
{

    char *direcao;

    // Atribuindo uma string de acordo com o número da opção escolhida para o movimento final
    switch (opcao)
    {
    case 1:
        direcao = "Cima";
        break;
    case 2:
        direcao = "Baixo";
        break;
    case 3:
        direcao = "Esquerda";
        break;
    case 4:
        direcao = "Direita";
        break;
    default:
        printf("Opção inválida");
        break;
    };

    return direcao;
}

// Função para oferecer ao usuário as opções de direção e de acordo com sua resposta atribuir essa opção ao uma variável string
char *opcoesMovimento()
{

    char *direcao;
    int opcao;

    // Pedindo ao usuário a direção do movimento
    printf("1 - Para cima\n"
           "2 - Para baixo\n"
           "3 - Para esquerda\n"
           "4 - Para direita\n");
    // Lendo a opção escolhida e armazendo na variável
    scanf("%d", &opcao);

    direcao = validaDirecao(opcao);

    return direcao;
}

// Função para a repetitividade do movimento da Rainha
void recursividade(int repeticao, char *direcao)
{

    if (repeticao > 0)
    {

        printf("%s\n", direcao);

        recursividade(repeticao - 1, direcao);
    };
}

int main()
{
    // Nível Novato - Movimentação das Peças
    int opcao, movimento;
    int contador = 1;
    char *direcao;

    // Exibindo as opções de peças, pedindo ao usuário que escolha e atribuindo o valor à variavél
    printf("MateCheck - Vamos jogar Xadrez?\n"
           "Digite o número da peça que deseja movimentar: \n"
           "1 - Torre\n"
           "2 - Bispo\n"
           "3 - Rainha\n"
           "4 - Cavalo\n");
    scanf("%d", &opcao);

    // Decidindo a caso de acordo com a opção selecionada pelo usuário
    switch (opcao)
    {
    // Implementação de Movimentação da Torre
    case 1:

        // Solicitando e atribuindo a string com a direção de movimento da peça
        printf("\nDigite a direção do movimento da sua Torre:\n");
        direcao = opcoesMovimento();

        // Solicitando ao usuário o número de movimentações da peça
        printf("Digite a quantidade de casas que a sua Torre deve avançar: ");
        scanf("%d", &movimento);

        // Passando os paramentros de direção e número de repetições para a função recursiva
        recursividade(movimento, direcao);
        break;

    // Implementação de Movimentação do Bispo com estrutura WHILE
    case 2:
        /*Solicitando ao usuário o número de movimentações da peça e atribuindo como contador
        da estrutura de repetição*/
        printf("Digite a quantidade de casas que o seu Bispo deve avançar: ");
        scanf("%d", &movimento);

        while (contador <= movimento)
        {
            /*Enquanto a condição for verdadeira o sistema irá imprimir a direção
            de movimentação da peça*/
            printf("Cima, esquerda\n");
            contador++;
        }
        break;

    // Implementação de Movimentação da Rainha
    case 3:

        // Solicitando ao usuário e atribuindo a uma string com a direção de movimento da peça
        printf("\nDigite a direção do movimento da sua Rainha:\n");
        direcao = opcoesMovimento();

        // Solicitando ao usuário o número de movimentações da peça
        printf("Digite a quantidade de casas que a sua Rainha deve avançar: ");
        scanf("%d", &movimento);

        // Passando os paramentros de direção e número de repetições para a função recursiva
        recursividade(movimento, direcao);
        break;

    // Implementação de Movimentação do Cavalo
    case 4:
        int inicioMovimento, finalMovimento;
        char *direcaoInicial, *direcaoFinal;

        // Solicitando ao usuário e atribuindo a uma string com a direção de movimento da peça
        printf("\nDigite a direção do movimento inicial do seu Cavalo:\n");
        direcaoInicial = opcoesMovimento();

        // Solicitando ao usuário a quantidade de casas para formar o L
        printf("\nQuantas casas ele deve avançar para %s? 1 ou 2 casas?", direcaoInicial);
        scanf("%d", &inicioMovimento);

        // Solicitando ao usuário  a direção de movimento final da peça
        printf("\nDigite a direção final do movimento: \n");

        // Validando se a direção escolhida é vertical ou horizontal e oferencendo as opções opostas para o final do movimento
        if (direcaoInicial == "Cima" || direcaoInicial == "Baixo")
        {
            printf("3 - Para esquerda\n"
                   "4 - Para direita\n");
        }
        else
        {
            printf("1 - Para cima\n"
                   "2 - Para baixo\n");
        };

        // Atribuindo a variável a direção de movimento final da peça
        scanf("%d", &opcao);

        // Usando um case para definir a string com a direção escolhida
        direcaoFinal = validaDirecao(opcao);

        // Definindo a quantidade de casas á percorrer para cada direção
        finalMovimento = (inicioMovimento == 1) ? 2 : 1;

        
        // imprime o resultado da opção escolhida pelo usuário no movimento inicial
        for (int i = 0; i < inicioMovimento; i++)
        {
            printf("\n%s ", direcaoInicial);
        };

        // imprime o resultado da opção escolhida pelo usuário no movimento final
        for (int j = 0; j < finalMovimento; j++)
        {
            printf("\n%s ", direcaoFinal);
        };

        break;

    // Caso nenhum número válido para as opções seja digitado
    default:
        printf("Opçãos inválida!");
        break;
    };

    return 0;
}
