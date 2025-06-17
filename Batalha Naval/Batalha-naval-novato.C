#include <stdio.h>

// Desafio Batalha Naval - MateCheck

int main() {
    // Definindo constantes para o jogo
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    #define TAMANHO_TABULEIRO 5
    #define TAMANHO_NAVIO 3
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

   // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
   /// Para posicionar os navios, primeiro precisamos de um "mar" limpo, então vamos inicializar o tabuleiro com água. 0 = água
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posicionando o NAVIO HORIZONTAL
    // Posições: [2,1], [2,2], [2,3]. Cabe perfeitamente no tabuleiro 5x5.
    int linha_navio_h = 2;
    int coluna_navio_h = 1;
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha_navio_h][coluna_navio_h + i] = 3;
    }

    // Posicionando o NAVIO VERTICAL
    int linha_navio_v = 0;
    int coluna_navio_v = 0;
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha_navio_v + i][coluna_navio_v] = 3;
    }

    // Sugestão: Utilize printf para exibir as coordenadas de cada parte dos navios.
    printf("--- Batalha Naval: Posição dos Navios ---\n\n");

    // Coordenadas do navio horizontal
    printf("Navio Horizontal (Tamanho %d):\n", TAMANHO_NAVIO);
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        printf("  - Parte %d esta na posicao [linha %d, coluna %d]\n", i + 1, linha_navio_h, coluna_navio_h + i);
    }

    printf("\n");

    // Coordenadas do navio vertical
    printf("Navio Vertical (Tamanho %d):\n", TAMANHO_NAVIO);
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        printf("  - Parte %d esta na posicao [linha %d, coluna %d]\n", i + 1, linha_navio_v + i, coluna_navio_v);
    }

    return 0;
}