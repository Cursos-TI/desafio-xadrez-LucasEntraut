#include <stdio.h>

int main() {
    // Torre: 5 casas para a direita (usando FOR)
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Bispo: 5 casas na diagonal superior direita (usando WHILE)
    printf("\nMovimento do Bispo (5 casas na diagonal para cima e direita):\n");
    int casas_bispo = 0;
    while (casas_bispo < 5) {
        printf("Cima, Direita\n");
        casas_bispo++;
    }

    // Rainha: 8 casas para a esquerda (usando DO-WHILE)
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    int casas_rainha = 0;
    do {
        printf("Esquerda\n");
        casas_rainha++;
    } while (casas_rainha < 8);

    // Cavalo: movimento em L (2 casas para baixo e 1 para esquerda) com for dentro do do-while
    printf("\nMovimento do Cavalo (2 casas para baixo e 1 para esquerda):\n");
    
    int etapa = 0; // Variável para controlar a etapa do movimento
    do {
        if (etapa == 0) {
            // Primeira parte do L: 2 casas para baixo (usando FOR dentro do DO-WHILE)
            for (int i = 0; i < 2; i++) {
                printf("Baixo\n");
            }
        } else {
            // Segunda parte do L: 1 casa para esquerda
            printf("Esquerda\n");
        }
        etapa++;
    } while (etapa < 2); // Executa duas vezes (uma para cada parte do L)

    return 0;
}