#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Desafio Batalha Naval - MateCheck

int main() {
    // Definindo as constantes do jogo
    #define TAMANHO_TABULEIRO 10
    #define TAMANHO_NAVIO 3
    #define AGUA 0
    #define NAVIO 3
 // Nova constante para a área de efeito da habilidade
     #define AREA_AFETADA 5

    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    // Inicia todo o tabuleiro 10x10 com água (valor 0).
        for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }

    // Posicionando NAVIO 1: Horizontal
    for (int i = 0; i < TAMANHO_NAVIO; i++) { tabuleiro[2][1 + i] = NAVIO; }
    // Posicionando NAVIO 2: Vertical
    for (int i = 0; i < TAMANHO_NAVIO; i++) { tabuleiro[0 + i][0] = NAVIO; }
    // Posicionando NAVIO 3: Diagonal
    for (int i = 0; i < TAMANHO_NAVIO; i++) { tabuleiro[4 + i][4 + i] = NAVIO; }
    // Posicionando NAVIO 4: Diagonal
    for (int i = 0; i < TAMANHO_NAVIO; i++) { tabuleiro[1 + i][8 - i] = NAVIO; }


    // Nível mestre: Habilidades especiais com matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Altere o valor para escolher a habilidade a ser testada: 1 = Cruz; 2 = Cone; 3 = Octaedro
    #define HABILIDADE_ATIVA 1 

    int origem_linha = 5;
    int origem_coluna = 4;

    #define TAMANHO_HABILIDADE 5
    int centro = TAMANHO_HABILIDADE / 2;
    
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // CORREÇÃO: A linha abaixo estava faltando, quebrando a estrutura de loops aninhados.
    for (int i = 0; i < TAMANHO_HABILIDADE; i++) {
        for (int j = 0; j < TAMANHO_HABILIDADE; j++) {

            bool faz_parte_da_habilidade = false;

            switch (HABILIDADE_ATIVA) {
                case 1: // HABILIDADE 1: CRUZ
                    if (i == centro || j == centro) {
                        faz_parte_da_habilidade = true;
                    }
                    break;

                case 2: // HABILIDADE 2: CONE
                    if (i <= centro && (j >= centro - i && j <= centro + i)) {
                        faz_parte_da_habilidade = true;
                    }
                    break;

                case 3: // HABILIDADE 3: OCTAEDRO
                    if ((abs(i - centro) + abs(j - centro)) <= centro) {
                        faz_parte_da_habilidade = true;
                    }
                    break;
            }

            if (faz_parte_da_habilidade) {
                int linha_real = origem_linha - centro + i;
                int coluna_real = origem_coluna - centro + j;

                if (linha_real >= 0 && linha_real < TAMANHO_TABULEIRO &&
                    coluna_real >= 0 && coluna_real < TAMANHO_TABULEIRO)
                {
                    tabuleiro[linha_real][coluna_real] = AREA_AFETADA;
                }
            }
        }
    }
    
// Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.
    printf("--- Batalha Naval: Tabuleiro com Habilidad ---\n\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("\nLegenda: %d = Agua | %d = Navio | %d = Area Afetada pela Habilidade\n", AGUA, NAVIO, AREA_AFETADA);

    return 0;
}