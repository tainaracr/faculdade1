#include <stdio.h>

int main() {
   
    // VARIÁVEIS ---
    // Carta 1
    char  estado1;
    char  codigo1[10];
    char  cidade1[50];
    int   populacao1;
    float area1;
    float pib1;
    int   pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;

    // Carta 2
    char  estado2;
    char  codigo2[10];
    char  cidade2[50];
    int   populacao2;
    float area2;
    float pib2;
    int   pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;

    int escolha;

    // CADASTRO DAS CARTAS ---
    printf("--- Cadastro CARTA 1 ---\n");
    printf("Estado (uma letra): ");
    scanf(" %c", &estado1);
    printf("Codigo (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (em km2): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n");

    printf("--- Cadastro CARTA 2 ---\n");
    printf("Estado (uma letra): ");
    scanf(" %c", &estado2);
    printf("Codigo: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (em km2): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Densidade populacional e PIB per capita
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Menu e lógica
    printf("\n\n=========================================\n");
    printf("### ESCOLHA O ATRIBUTO PARA A BATALHA ###\n");
    printf("=========================================\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);
    printf("\n");

    switch (escolha) {
        
        case 1: // Se o jogador digitou 1
            printf("Atributo escolhido: Populacao\n");
            if (populacao1 > populacao2) {
                printf("Vencedor: Carta 1 (%s)\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: Carta 2 (%s)\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: // Se o jogador digitou 2
            printf("Atributo escolhido: Area\n");
            if (area1 > area2) {
                printf("Vencedor: Carta 1 (%s)\n", cidade1);
            } else if (area2 > area1) {
                printf("Vencedor: Carta 2 (%s)\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: // Se o jogador digitou 3
            printf("Atributo escolhido: PIB\n");
            if (pib1 > pib2) {
                printf("Vencedor: Carta 1 (%s)\n", cidade1);
            } else if (pib2 > pib1) {
                printf("Vencedor: Carta 2 (%s)\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: // Se o jogador digitou 4
            printf("Atributo escolhido: Pontos Turisticos\n");
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Vencedor: Carta 1 (%s)\n", cidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Vencedor: Carta 2 (%s)\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: // Se o jogador digitou 5
            printf("Atributo escolhido: Densidade Demografica (Menor vence!)\n");
            if (densidade1 < densidade2) { // REGRA INVERTIDA: usamos '<' (menor que)
                printf("Vencedor: Carta 1 (%s)\n", cidade1);
            } else if (densidade2 < densidade1) {
                printf("Vencedor: Carta 2 (%s)\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default: // Se o jogador digitou qualquer outro número
            printf("Opcao invalida! Por favor, escolha um numero do menu.\n");
            break;
    }

    return 0;
}