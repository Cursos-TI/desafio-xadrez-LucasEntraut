#include <stdio.h>

int main() {
    // Movimento da Torre (5 casas para a direita) usando FOR
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 0; i < 5; i++) { 
        printf("Direita\n");
    }
    
    // Movimento do Bispo (5 casas na diagonal para cima e direita) usando WHILE
    printf("\nMovimento do Bispo (5 casas na diagonal para cima e direita):\n");
    int casas_bispo = 0; // Contador para o número de casas
    while (casas_bispo < 5) {
        printf("Cima, Direita\n");
        casas_bispo++; // Incrementa o contador dentro do WHILE

    }
    
    // Movimento da Rainha (8 casas para a esquerda) usando DO-WHILE
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    int casas_rainha = 0;
    do {
        printf("Esquerda\n");
        casas_rainha++; // Incrementa o contador dentro do DO-WHILE
    } while (casas_rainha < 8);
    
    return 0;
}