#include <stdio.h>

// Função recursiva para o movimento da Torre
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

void executarTorre() {
    printf("\nMovimento da Torre (5 casas para a direita - recursivo):\n");
    moverTorre(5);
}

// Função do Bispo com recursão e loops aninhados
void executarBispo(int casas_restantes) {
    if (casas_restantes <= 0) return;
    
    // Loop externo (vertical)
    for (int vertical = 0; vertical < 1; vertical++) { 
        // Loop interno (horizontal)
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Cima, Direita\n");
        }
    }
    
    executarBispo(casas_restantes - 1);
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

void executarRainha() {
    printf("\nMovimento da Rainha (8 casas para a esquerda - recursivo):\n");
    moverRainha(8);
}

// Função do Cavalo com loops complexos
void moverCavalo() {
    printf("\nMovimento do Cavalo (2 casas para cima e 1 para direita):\n");
    
    int passos = 0;
    int max_passos = 3;
    int cima_feito = 0;
    int direita_feito = 0;
    
    while (passos < max_passos) {
        if (cima_feito < 2) {
            printf("Cima\n");
            cima_feito++;
            passos++;
            continue;
        }
        
        if (direita_feito < 1) {
            printf("Direita\n");
            direita_feito++;
            passos++;
            continue;
        }
        
        if (passos > max_passos) break;
    }
}

void executarCavalo() {
    moverCavalo();
}

int main() { 
    executarTorre();
    printf("\nMovimento do Bispo (5 casas na diagonal):\n");
    executarBispo(5);
    executarRainha();
    executarCavalo();
    
    return 0;
}