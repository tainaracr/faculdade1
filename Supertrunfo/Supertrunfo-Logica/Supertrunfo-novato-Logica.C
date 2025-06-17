#include <stdio.h>
int main() {
    
char  estado1;
char  codigo1[10];
char  cidade1[50];
int   populacao1;
float area1;
float pib1;
int   pontosTuristicos1;

char  estado2;
char  codigo2[10];
char  cidade2[50];
int   populacao2;
float area2;
float pib2;
int   pontosTuristicos2;

// --- Cadastro CARTA 1 ---
printf("--- Cadastro CARTA 1 ---\n");

printf("Estado (uma letra): ");
scanf(" %c", &estado1);

printf("Codigo (ex: A01): ");
scanf(" %s", &codigo1);

printf("Nome da Cidade: ");
scanf(" %[^\n]", &cidade1);

printf("Populacao: ");
scanf("%d", &populacao1);

printf("Area (em km2): ");
scanf("%f", &area1);

printf("PIB (em bilhoes): ");
scanf("%f", &pib1);

printf("Numero de Pontos Turisticos: ");
scanf("%d", &pontosTuristicos1);

printf("\n");

// --- Cadastro CARTA 2 ---
printf("--- Cadastro CARTA 2 ---\n");

printf("Estado (uma letra): ");
scanf(" %c", &estado2);

printf("Codigo (ex: A01): ");
scanf(" %s", codigo2);

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

// --- Mostrar na tela ---
printf("\n\n--- CARTAS CADASTRADAS ---\n\n");

printf("Carta 1:\n");
printf("Estado: %c\n", estado1);
printf("Codigo: %s\n", codigo1);
printf("Nome da Cidade: %s\n", cidade1);
printf("Populacao: %d\n", populacao1);
printf("Area: %.2f km2\n", area1);
printf("PIB: %.2f bilhoes de reais\n", pib1);
printf("Numero de Pontos Turisticos: %d\n\n", pontosTuristicos1);

printf("Carta 2:\n");
printf("Estado: %c\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Nome da Cidade: %s\n", cidade2);
printf("Populacao: %d\n", populacao2);
printf("Area: %.2f km2\n", area2);
printf("PIB: %.2f bilhoes de reais\n", pib2);
printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

 // --- NOVO ---
float densidade1;
float pibPerCapita1;
float densidade2;
float pibPerCapita2;

// Calculo densidade pop. e PIB per capita
densidade1 = (float)populacao1 / area1;
pibPerCapita1 = (pib1 * 1000000000) / populacao1;

densidade2 = (float)populacao2 / area2;
pibPerCapita2 = (pib2 * 1000000000) / populacao2;

//Logica de comparacao
 printf("\n\n==================================\n");
printf("###      START!      ###\n");
printf("==================================\n\n");

printf("Comparacao de cartas (Atributo: Populacao):\n\n");

if (populacao1 > populacao2) {
    //  Vence se a população da carta 1 for maior
    printf("Carta 1 - %s (%c): %d habitantes\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %d habitantes\n", cidade2, estado2, populacao2);
    printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);

} else if (populacao2 > populacao1) {
    // Senão, vence se a população da carta 2 for maior
    printf("Carta 1 - %s (%c): %d habitantes\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %d habitantes\n", cidade2, estado2, populacao2);
    printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);

} else {
    // Empate se nenhuma condição for verdade
    printf("Carta 1 - %s (%c): %d habitantes\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %d habitantes\n", cidade2, estado2, populacao2);
    printf("\nResultado: Houve um empate!\n");
}

return 0;
}