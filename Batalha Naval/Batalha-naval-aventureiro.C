#include <stdio.h>

// Desafio Batalha Naval - MateCheck

int main() {
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro.
    // Definindo constantes para o jogo
    // Expandir o tabuleiro.
    #define TAMANHO_TABULEIRO 10
    #define TAMANHO_NAVIO 3
    #define AGUA 0
    #define NAVIO 3

    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    // Inicia todo o tabuleiro 10x10 com água (valor 0).
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }

    // Posicionando o NAVIO 1: HORIZONTAL
    int linha_navio_h = 2;
    int coluna_navio_h = 1;
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha_navio_h][coluna_navio_h + i] = NAVIO;
    }

    // Posicionando o NAVIO 2: VERTICAL
    int linha_navio_v = 0;
    int coluna_navio_v = 0;
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha_navio_v + i][coluna_navio_v] = NAVIO;
    }

    printf("--- Batalha Naval: Posição dos Navios ---\n\n");

    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Posicionando o NAVIO 3: DIAGONAL
    // Posições: [4,4], [5,5], [6,6]
    int linha_d1 = 4;
    int coluna_d1 = 4;
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha_d1 + i][coluna_d1 + i] = NAVIO;
    }

    // Posicionando o NAVIO 4: DIAGONAL
    // Posições: [1,8], [2,7], [3,6]
    int linha_d2 = 1;
    int coluna_d2 = 8;
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha_d2 + i][coluna_d2 - i] = NAVIO;
    }

    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.
    printf("--- Batalha Naval: Tabuleiro com 4 Navios Posicionados ---\n\n");
    // Print tabuleiro 10x10
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            // Print valor da célula (0 ou 3) e um espaço para alinhar.
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("\nLegenda: %d = Agua | %d = Navio\n", AGUA, NAVIO);

    return 0;
}