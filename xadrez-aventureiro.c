#include <stdio.h>

#define MOVIMENTOS_CAVALO 3 

int main() {
    int i, j;

    printf("Movimentação do Cavalo:\n");

    for (i = 1; i <= MOVIMENTOS_CAVALO; i++) {
        printf("Movimento %d: ", i);

        j = 1; 
        while (j <= 2) {
            printf("Baixo ");
            j++;
        }

        printf("Esquerda\n");
    }

    return 0;
}
