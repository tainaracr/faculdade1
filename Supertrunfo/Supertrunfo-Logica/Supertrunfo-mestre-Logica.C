#include <stdio.h>
#include <string.h>

int main() {
   
    // VARIÁVEIS ---
    char  estado1, estado2;
    char  codigo1[10], codigo2[10];
    char  cidade1[50], cidade2[50];
    int   populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int   pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // Variáveis para a lógica
    int escolha1, escolha2;
    float valor_attr1_carta1, valor_attr1_carta2;
    float valor_attr2_carta1, valor_attr2_carta2;
    float soma_carta1, soma_carta2;
    char nome_attr1[30], nome_attr2[30];

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

    // Menu e logica
    printf("\n\n--- ESCOLHA O PRIMEIRO ATRIBUTO ---\n");
    printf("1. Populacao | 2. Area | 3. PIB | 4. Pontos Turisticos | 5. Densidade Demografica\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha1);

    switch(escolha1) {
        case 1: strcpy(nome_attr1, "Populacao"); valor_attr1_carta1 = (float)populacao1; valor_attr1_carta2 = (float)populacao2; break;
        case 2: strcpy(nome_attr1, "Area"); valor_attr1_carta1 = area1; valor_attr1_carta2 = area2; break;
        case 3: strcpy(nome_attr1, "PIB"); valor_attr1_carta1 = pib1; valor_attr1_carta2 = pib2; break;
        case 4: strcpy(nome_attr1, "Pontos Turisticos"); valor_attr1_carta1 = (float)pontosTuristicos1; valor_attr1_carta2 = (float)pontosTuristicos2; break;
        case 5: strcpy(nome_attr1, "Densidade (Menor=Melhor)"); valor_attr1_carta1 = densidade1; valor_attr1_carta2 = densidade2; break;
        default: printf("Erro: Escolha invalida!\n"); return 1;
    }

        printf("\n--- ESCOLHA O SEGUNDO ATRIBUTO ---\n");
    // não mostrar a opção já escolhida
    if (escolha1 != 1) printf("1. Populacao | ");
    if (escolha1 != 2) printf("2. Area | ");
    if (escolha1 != 3) printf("3. PIB | ");
    if (escolha1 != 4) printf("4. Pontos Turisticos | ");
    if (escolha1 != 5) printf("5. Densidade Demografica");
    printf("\nDigite sua escolha: ");
    scanf("%d", &escolha2);

    // Validação de atributos diferentes
    if (escolha1 == escolha2) {
        printf("\nErro: Voce nao pode escolher o mesmo atributo duas vezes!\n");
        return 1;
    }

    switch(escolha2) {
        case 1: strcpy(nome_attr2, "Populacao"); valor_attr2_carta1 = (float)populacao1; valor_attr2_carta2 = (float)populacao2; break;
        case 2: strcpy(nome_attr2, "Area"); valor_attr2_carta1 = area1; valor_attr2_carta2 = area2; break;
        case 3: strcpy(nome_attr2, "PIB"); valor_attr2_carta1 = pib1; valor_attr2_carta2 = pib2; break;
        case 4: strcpy(nome_attr2, "Pontos Turisticos"); valor_attr2_carta1 = (float)pontosTuristicos1; valor_attr2_carta2 = (float)pontosTuristicos2; break;
        case 5: strcpy(nome_attr2, "Densidade (Menor=Melhor)"); valor_attr2_carta1 = densidade1; valor_attr2_carta2 = densidade2; break;
        default: printf("Erro: Escolha invalida!\n"); return 1;
    }

    // Resultado Final ---
     printf("\n\n=========================================\n");
    printf("###           RESULTADO FINAL           ###\n");
    printf("=========================================\n\n");
    
    printf("--- Atributos Escolhidos ---\n");
    printf("  %s:\n", nome_attr1);
    printf("    > %s: %.2f\n", cidade1, valor_attr1_carta1);
    printf("    > %s: %.2f\n", cidade2, valor_attr1_carta2);
    printf("  %s:\n", nome_attr2);
    printf("    > %s: %.2f\n", cidade1, valor_attr2_carta1);
    printf("    > %s: %.2f\n", cidade2, valor_attr2_carta2);
    printf("\n");

    if (escolha1 == 5) { valor_attr1_carta1 = 1.0 / valor_attr1_carta1; valor_attr1_carta2 = 1.0 / valor_attr1_carta2; }
    if (escolha2 == 5) { valor_attr2_carta1 = 1.0 / valor_attr2_carta1; valor_attr2_carta2 = 1.0 / valor_attr2_carta2; }
    
    soma_carta1 = valor_attr1_carta1 + valor_attr2_carta1;
    soma_carta2 = valor_attr1_carta2 + valor_attr2_carta2;

    printf("--- Pontuacao Total ---\n");
    printf("  > Soma da Carta 1 (%s): %.2f\n", cidade1, soma_carta1);
    printf("  > Soma da Carta 2 (%s): %.2f\n", cidade2, soma_carta2);
    printf("\n");

    // <<< A CORREÇÃO ESTÁ AQUI >>>
    // Adicionamos 'const' para que o tipo da variável seja compatível
    // com os textos constantes "Carta 1" e "Carta 2".
    const char* vencedor = (soma_carta1 > soma_carta2) ? "Carta 1" : "Carta 2";
    
    if (soma_carta1 == soma_carta2) {
        printf("### Resultado: EMPATE! ###\n");
    } else {
        printf("### VENCEDOR DA RODADA: %s! ###\n", vencedor);
    }

    return 0;
}