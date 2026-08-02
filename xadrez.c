
#include <stdio.h>

int main() {

    int i;

    // ==========================================
    // MOVIMENTOS DA RAINHA
    // ==========================================

    printf("Movimento da Rainha:\n");

    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n");


    // ==========================================
    // MOVIMENTOS DA TORRE
    // ==========================================

    printf("Movimento da Torre:\n");

    i = 1;

    while (i <= 5) {
        printf("Esquerda\n");
        i++;
    }

    printf("\n");


    // ==========================================
    // MOVIMENTOS DO BISPO
    // ==========================================

    printf("Movimento do Bispo:\n");

    i = 1;

    do {
        printf("Cima\n");
        i++;

    } while (i <= 5);

    printf("\n");


    // ==========================================
    // MOVIMENTO DO CAVALO
    // ==========================================

    printf("Movimento do Cavalo:\n");

    int baixo = 0;
    int esquerda = 0;

    for (i = 0; i < 1; i++) {

        while (baixo < 2) {

            printf("Baixo\n");

            baixo++;
        }

        while (esquerda < 1) {

            printf("Esquerda\n");

            esquerda++;
        }
    }

    return 0;
}

