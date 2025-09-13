#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

#define MOVIMENTOS_BISPO 5 
#define MOVIMENTOS_TORRE 5
#define MOVIMENTOS_RAINHA 8


int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int i;

    printf("Movimentação do Bispo:\n");
    for (i = 1; i <= MOVIMENTOS_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    printf("\nMovimentação da Torre:\n");
    for (i = 1; i <= MOVIMENTOS_TORRE; i++) {
        printf("Direita\n");
    }

    printf("\nMovimentação da Rainha:\n");
    for (i = 1; i <= MOVIMENTOS_RAINHA; i++) {
        printf("Esquerda\n");
    }


    return 0;
}
