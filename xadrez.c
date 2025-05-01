#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    int opcao, movimento;
    int contador = 1;


    //Exibindo as opções de peças, pedindo ao usuário que escolha e atribuindo o valor à variavél
    printf("MateCheck - Vamos jogar Xadrez?\n"
           "Digite o número da peça que deseja movimentar: \n"
           "1 - Torre\n"
           "2 - Bispo\n"
           "3 - Rainha\n"
           "4 - Cavalo\n");
    scanf("%d", &opcao);

    
    //Decidindo a caso de acordo com a opção selecionada pelo usuário
    switch (opcao)
    {

        // Implementação de Movimentação da Torre com estrutura DO WHILE
        case 1:

            /*Solicitando ao usuário o número de movimentações da peça e atribuindo como contador 
            da estrutura de repetição*/
            printf("Digite a quantidade de casas que a sua Torre deve avançar: ");
            scanf("%d", &movimento);

            do
            {
                /*Enquanto a condição for verdadeira o sistema irá imprimir a direção
                de movimentação da peça*/
                printf("Direita\n");
                contador ++;
            } while (contador <= movimento);
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
                contador ++;
            }
        break;

        
        // Implementação de Movimentação da Rainha com estrutura FOR
        case 3:

            /*Solicitando ao usuário o número de movimentações da peça e atribuindo como contador 
            da estrutura de repetição*/
            printf("Digite a quantidade de casas que a sua Rainha deve avançar: ");
            scanf("%d", &movimento);

            for (contador = 1; contador < movimento; contador++)
            {
                /*Enquanto a condição for verdadeira o sistema irá imprimir a direção
                de movimentação da peça*/
                printf("Esquerda\n");
            };
        break;



        // Nível Aventureiro - Movimentação do Cavalo
        // Implementação de Movimentação do Cavalo com looping aninhado
        case 4:
            int movimento =1;
            int direcaoInicial, direcaoFinal;
            char *direcao1, *direcao2;
            //Pedindo ao usuário a direção inicial do movimento
            printf("\nDigite a direção inicial do movimento do cavalo:\n"
                "1 - Para cima\n"
                "2 - Para baixo\n"
                "3 - Para esquerda\n"
                "4 - Para direita\n");
            //Lendo a opção escolhida e armazendo na variável
            scanf("%d", &direcaoInicial);


            //Atribuindo uma string de acordo com o número da opção escolhida para o movimento inicial
            switch (direcaoInicial)
            {
            case 1:
                direcao1 = "Cima";
                break;
            
            case 2:
                direcao1 = "Baixo";
                break;
            case 3:
                direcao1 = "Esquerda";
                break;
            case 4:
                direcao1 = "Direita";
            default:
                printf("Opção inválida");
                break;
            }


            //Pedindo ao usuário a direção final do movimento
            printf("\nDigite a direção final do movimento da sua peça:\n"
                "1 - Para cima\n"
                "2 - Para baixo\n"
                "3 - Para esquerda\n"
                "4 - Para direita\n");
            //Lendo a opção escolhida e armazendo na variável
            scanf("%d", &direcaoFinal);


            //Atribuindo uma string de acordo com o número da opção escolhida para o movimento final
            switch (direcaoFinal)
            {
            case 1:
                direcao2 = "Cima";
                break;
            
            case 2:
                direcao2 = "Baixo";
                break;
            case 3:
                direcao2 = "Esquerda";
                break;
            case 4:
                direcao2 = "Direita";
            default:
                printf("Opção inválida");
                break;
            }


            //Movimento de looping aninhando para imprimir a movimentação da peça
            while (movimento--)
            {
                for (int i = 0; i < 2; i++)
                {
                    printf("\n%s",direcao1); //imprime o resultado da opção escolhida pelo usuário no momvimento inicial
                }

                printf("\n%s", direcao2); //imprime o resultado da opção escolhida pelo usuário no momvimento final
            };
        
        break;

        // Caso nenhum número válido para as opções seja digitado
        default:
            printf("Opçãos inválida!");
        break;
    };

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
