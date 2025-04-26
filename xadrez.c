#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    int opcao, movimento;
    int contador = 1;


    //Exibindo as opções de peças, pedindo ao usuário que escolha e atribuindo o valor à variavél
    printf("Vamos jogar Xadrez?\n"
           "Digite o número da peça que deseja movimentar: \n"
           "1 - Torre\n"
           "2 - Bispo\n"
           "3 - Rainha\n");
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


        // Caso nenhum número válido para as opções seja digitado
        default:
            printf("Opçãos inválida!");
        break;
    };

    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
