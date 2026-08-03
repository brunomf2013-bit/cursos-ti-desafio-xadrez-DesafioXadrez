
#include <stdio.h>

// =====================================================
// FUNÇÃO RECURSIVA DA TORRE
// A Torre se movimenta 5 casas para a direita.
// =====================================================

void moverTorre(int casas) {

    // Caso base: quando chegar a zero, para a recursividade.
    if (casas <= 0) {
        return;
    }

    printf("Direita\n");

    // Chamada recursiva: diminui uma casa.
    moverTorre(casas - 1);
}


// =====================================================
// FUNÇÃO RECURSIVA DA RAINHA
// A Rainha se movimenta 5 casas para a esquerda.
// =====================================================

void moverRainha(int casas) {

    // Caso base.
    if (casas <= 0) {
        return;
    }

    printf("Esquerda\n");

    // Chamada recursiva.
    moverRainha(casas - 1);
}


// =====================================================
// FUNÇÃO RECURSIVA DO BISPO
//
// O Bispo se movimenta na diagonal:
// 5 casas para cima e 5 para a direita.
//
// Além da recursividade, utilizamos loops aninhados.
// O loop externo controla o movimento vertical.
// O loop interno controla o movimento horizontal.
// =====================================================

void moverBispo(int casas) {

    // Caso base da recursividade.
    if (casas <= 0) {
        return;
    }

    int vertical;
    int horizontal;

    // Loop externo: movimento vertical.
    for (vertical = 0; vertical < 1; vertical++) {

        // Loop interno: movimento horizontal.
        for (horizontal = 0; horizontal < 1; horizontal++) {

            printf("Cima\n");
            printf("Direita\n");
        }
    }

    // Chamada recursiva para a próxima casa.
    moverBispo(casas - 1);
}


// =====================================================
// MOVIMENTO DO CAVALO
//
// O Cavalo faz um movimento em "L":
//
// 2 casas para CIMA
// 1 casa para a DIREITA
//
// Utilizamos loops aninhados com condições.
// =====================================================

void moverCavalo() {

    int cima = 0;
    int direita = 0;

    printf("Cima\n");

    // Loop aninhado para controlar as duas casas para cima.
    for (cima = 1; cima <= 2; cima++) {

        // O continue faz o loop continuar
        // enquanto ainda não completamos as 2 casas.
        if (cima < 2) {
            continue;
        }

        printf("Cima\n");
    }

    // Loop para uma casa à direita.
    for (direita = 1; direita <= 1; direita++) {

        printf("Direita\n");

        // break encerra o loop após uma casa.
        break;
    }
}


// =====================================================
// FUNÇÃO PRINCIPAL
// =====================================================

int main() {

    // Número de casas para cada movimento.
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 5;


    // =================================================
    // TORRE
    // =================================================

    printf("===== TORRE =====\n");

    moverTorre(casasTorre);

    printf("\n");


    // =================================================
    // BISPO
    // =================================================

    printf("===== BISPO =====\n");

    moverBispo(casasBispo);

    printf("\n");


    // =================================================
    // RAINHA
    // =================================================

    printf("===== RAINHA =====\n");

    moverRainha(casasRainha);

    printf("\n");


    // =================================================
    // CAVALO
    // =================================================

    printf("===== CAVALO =====\n");

    moverCavalo();

    printf("\n");

    printf("===== FIM DO PROGRAMA =====\n");

    return 0;
}

