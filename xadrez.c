#include <stdio.h>

#define BISPO 5
#define TORRE 5
#define RAINHA 8

int main() {
    // Movimentação do Bispo
    printf("Movimentação do Bispo:\n");
    for (int i = 1; i <= BISPO; i++) {
        printf("Diagonal superior direita, casa %d\n", i);
    }
    
    // Movimentação da Torre
    printf("Movimentação da Torre:\n");
    for (int i = 1; i <= TORRE; i++) {
        printf("Direita, casa %d\n", i);
    }
    
    // Movimentação da Rainha
    printf("Movimentação da Rainha:\n");
    for (int i = 1; i <= RAINHA; i++) {
        printf("Esquerda, casa %d\n", i);
    }
    
    return 0;
}
