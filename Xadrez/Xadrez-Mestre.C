#include <stdio.h>
// Protótipo das funções
void moverTorreRecursivo(int casas_restantes);
void moverBispoRecursivo(int casas_restantes);
void moverRainhaRecursivo(int casas_restantes);
void moverBispoComLoopsAninhados(int casas);
void moverCavaloComLoopComplexo(int mov_verticais, int mov_horizontais);


// FUNÇÃO PRINCIPAL
int main() {

    printf("### MOVIMENTAÇÃO ###\n\n");

    // Movimento da Torre Recursivo ---
    printf("--- Movimento da TORRE---\n");
    moverTorreRecursivo(5); // Mover 5 casas para a direita
    printf("\n");

    // Movimento do Bispo ---
    // a) Com Recursivo
    printf("--- Movimento do BISPO ---\n");
    moverBispoRecursivo(5); // Mover 5 casas na diagonal
    printf("\n");

    // b) Com loops
    printf("--- Movimento do BISPO ---\n");
    moverBispoComLoopsAninhados(5); // Mover 5 casas na diagonal
    printf("\n");

    // Movimento da Rainha com Recursivo
    printf("--- Movimento da RAINHA ---\n");
    moverRainhaRecursivo(8); // Mover 8 casas para a esquerda
    printf("\n");
    
    // Movimento do Cavalo com loop ---
    printf("--- Movimento do CAVALO) ---\n");
    // Mover 2 casas para cima e 1 para a direita
    moverCavaloComLoopComplexo(2, 1);
    printf("\n");

    return 0;
}


// Definição de funções

/**
 * LÓGICA RECURSIVA:
 * 1. CASO BASE (condição de parada): Se não houver mais casas para mover
 *    (casas_restantes <= 0), a função simplesmente retorna e para a "cadeia" de chamadas.
 * 2. PASSO RECURSIVO: Se ainda houver casas, a função imprime um passo
 *    e chama a si mesma com um problema menor (casas_restantes - 1).
 */
void moverTorreRecursivo(int casas_restantes) {
    if (casas_restantes <= 0) {
        return;
    }
    
    // Passo atual
    printf("Direita\n");
    
    moverTorreRecursivo(casas_restantes - 1);
}

/**
  * A lógica é igual à da Torre, a saída muda.
 */
void moverBispoRecursivo(int casas_restantes) {
    if (casas_restantes <= 0) {
        return;
    }
    printf("Cima, Direita\n");
    moverBispoRecursivo(casas_restantes - 1);
}

void moverRainhaRecursivo(int casas_restantes) {
    if (casas_restantes <= 0) {
        return;
    }
    printf("Esquerda\n");
    moverRainhaRecursivo(casas_restantes - 1);
}

/**
 * @brief Move o Bispo usando loops aninhados para simular um movimento diagonal.
 * @param casas O número de passos na diagonal.
 *
 * LÓGICA DE LOOPS ANINHADOS:
 * - O loop externo (i) representa o movimento vertical.
 * - O loop interno (j) representa o movimento horizontal.
 * - Para simular uma diagonal perfeita, o movimento só ocorre quando o passo
 *   vertical é igual ao passo horizontal (i == j). Isso demonstra o controle
 *   de um grid 2D para traçar uma linha.
 */
void moverBispoComLoopsAninhados(int casas) {
    // Loop externo para o movimento vertical
    for (int i = 0; i < casas; i++) {
        // Loop interno para o movimento horizontal
        for (int j = 0; j < casas; j++) {
            // A condição para um movimento diagonal é que o passo
            // vertical (i) seja igual ao passo horizontal (j).
            if (i == j) {
                printf("Cima, Direita (passo %d)\n", i + 1);
            }
        }
    }
}

void moverCavaloComLoopComplexo(int mov_verticais, int mov_horizontais) {
    int passos_v_dados = 0;
    int passos_h_dados = 0;
    int total_passos = mov_verticais + mov_horizontais;

    for (int turno = 0; turno < 10; turno++) {
        
        // Fase 1: Movimentos verticais (para cima)
        if (passos_v_dados < mov_verticais) {
            printf("Cima\n");
            passos_v_dados++;
            continue;
        }

        // Fase 2: Movimentos horizontais (para a direita)
        if (passos_h_dados < mov_horizontais) {
            printf("Direita\n");
            passos_h_dados++;
        }

        // Se todos os passos foram dados, encerra o loop.
        if (passos_v_dados == mov_verticais && passos_h_dados == mov_horizontais) {
            printf("--> Movimento em 'L' do Cavalo concluido.\n");
            break;
        }
    }
}