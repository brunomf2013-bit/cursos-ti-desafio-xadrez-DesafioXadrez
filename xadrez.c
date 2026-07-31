
#include <stdio.h>

int main() {

    int i;

    printf("====================================\n");
    printf("       MOVIMENTOS NO XADREZ\n");
    printf("====================================\n\n");

    // ==========================================
    // RAINHA - Movimento: 5 casas para a direita
    // ==========================================

    printf("RAINHA - Movimento para a direita:\n");

    for (i = 1; i <= 5; i++) {
        printf("Casa %d -> Direita\n", i);
    }

    printf("\n");


    // ==========================================
    // TORRE -  Movimento: 5 casas na diagonal
    // ==========================================

    printf("TORRE - Movimento para a esquerda:\n");

    i = 1;

    while (i <= 5) {
        printf("Casa %d -> Esquerda\n", i);
        i++;
    }

    printf("\n");


    // ==========================================
    // BISPO -  Movimento: 5 casas na diagonal
    // ==========================================

    printf("BISPO - Movimento na diagonal:\n");

    i = 1;

    do {
        printf("Casa %d -> Diagonal cima/direita\n", i);
        i++;

    } while (i <= 5);


    printf("\n====================================\n");
    printf("        FIM DOS MOVIMENTOS\n");
    printf("====================================\n");

    return 0;
}


