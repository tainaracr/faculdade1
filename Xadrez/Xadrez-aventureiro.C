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
    int contador_bispo = 0;  // controle começa em 0
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
    printf("\n");


    // O Cavalo se move em "L": 2 casas em uma direção e 1 em outra.
    printf("--- Movimento do CAVALO ---\n");

    //número de casas para cada parte do movimento "L".
    const int movimentos_verticais = 2; // Para baixo
    const int movimentos_horizontais = 1; // Para a esquerda

    /*
     * Lógica de movimento do Cavalo:
     * O loop 'for' (externo) vai controlar as etapas do movimento:
     * - Fase 0: Movimento vertical (para baixo).
     * - Fase 1: Movimento horizontal (para a esquerda).
     *
     * O loop 'while' (interno) vai executar os passos de cada etapa.
    */

    // Loop FOR para controlar as esapas do movimento
    for (int fase = 0; fase < 2; fase++) {

        if (fase == 0) { // Fase 0: Mover para baixo
            
            // Loop WHILE para os passos verticais
            int passos_dados = 0;
            while (passos_dados < movimentos_verticais) {
                printf("Baixo\n");
                passos_dados++;
            }

        } else { // Fase 1: esquerda
        
            // Loop WHILE para os passos horizontais
            int passos_dados = 0;
            while (passos_dados < movimentos_horizontais) {
                printf("Esquerda\n");
                passos_dados++;
            }
        }
    }


    return 0;
}