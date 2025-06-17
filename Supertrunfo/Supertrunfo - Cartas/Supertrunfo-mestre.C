#include <stdio.h>

int main() {
   
    // VARIÁVEIS
    // Carta 1
    char  estado1;
    char  codigo1[10];
    char  cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int   pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    // Carta 2
    char  estado2;
    char  codigo2[10];
    char  cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int   pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    //CADASTRO DAS CARTAS ---
    printf("--- Cadastro CARTA 1 ---\n");
    printf("Estado (uma letra): ");
    scanf(" %c", &estado1);
    printf("Codigo (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Populacao: ");
    scanf("%lu", &populacao1);
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
    scanf("%lu", &populacao2);
    printf("Area (em km2): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

        // Densidade e PIB per Capita
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Cálculo do Super Poder
    // menor densidade = maior poder.
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + (float)pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + (float)pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    // RESULTADOS ---
    printf("\n\n--- Comparacao de Cartas ---\n");

    // Comparação da População (Maior vence)
    if (populacao1 > populacao2) {
        printf("Populacao: Carta 1 venceu (1)\n");
    } else {
        printf("Populacao: Carta 2 venceu (0)\n");
    }

    // Comparação da Área (Maior vence)
    if (area1 > area2) {
        printf("Area: Carta 1 venceu (1)\n");
    } else {
        printf("Area: Carta 2 venceu (0)\n");
    }

    // Comparação do PIB (Maior vence)
    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu (1)\n");
    } else {
        printf("PIB: Carta 2 venceu (0)\n");
    }
    
    // Comparação dos Pontos Turísticos (Maior vence)
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Pontos Turisticos: Carta 1 venceu (1)\n");
    } else {
        printf("Pontos Turisticos: Carta 2 venceu (0)\n");
    }

    // Comparação da Densidade Populacional (MENOR vence)
    if (densidade1 < densidade2) {
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
    }

    // Comparação do PIB per Capita (Maior vence)
    if (pibPerCapita1 > pibPerCapita2) {
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    } else {
        printf("PIB per Capita: Carta 2 venceu (0)\n");
    }

    // Comparação do Super Poder (Maior vence)
    if (superPoder1 > superPoder2) {
        printf("Super Poder: Carta 1 venceu (1)\n");
    } else {
        printf("Super Poder: Carta 2 venceu (0)\n");
    }

    return 0;
}