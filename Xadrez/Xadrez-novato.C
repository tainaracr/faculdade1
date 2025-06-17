#include <stdio.h>

int main() {

    // A Torre deve se mover 5 casas para a direita.
    printf("--- Movimento da TORRE ---\n");

    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    printf("\n"); 


    // O Bispo deve se mover 5 casas na diagonal (Cima, Direita).
    printf("--- Movimento do BISPO ---\n");
    
    int contador_bispo = 0; // controle começa em 0
    
    while (contador_bispo < 5) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }

    printf("\n");


    // A Rainha deve se mover 8 casas para a esquerda.
    printf("--- Movimento da RAINHA ---\n");
    
    int contador_rainha = 0; // Variável de controle
    
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < 8); // verificar condição


    return 0;
}