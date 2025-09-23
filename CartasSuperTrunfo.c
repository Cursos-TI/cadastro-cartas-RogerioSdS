#include <stdio.h>
#include <string.h>

int main(void) {
    // Dados das cartas
    char carta1[4], carta2[4];
    char estado1[3], estado2[3];
    char codigo1[6], codigo2[6];
    char cidade1[50], cidade2[50];

    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2; // PIB em bilhões de reais
    int   pontosTuristicos1, pontosTuristicos2;

    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;

    // ================= CARTA 1 =================
    printf("\n=== Cadastro da Carta 1 ===\n");
    printf("Digite o codigo da carta: ");
    scanf("%3s", carta1);
    printf("Digite o estado: ");
    scanf("%2s", estado1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);
    printf("Digite a area em km²: ");
    scanf("%f", &area1);
    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // ================= CARTA 2 =================
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o codigo da carta: ");
    scanf("%3s", carta2);
    printf("Digite o estado: ");
    scanf("%2s", estado2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);
    printf("Digite a area em km²: ");
    scanf("%f", &area2);
    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Monta os códigos
    sprintf(codigo1, "%s%s", estado1, carta1);
    sprintf(codigo2, "%s%s", estado2, carta2);

    // Calcula densidade e PIB per capita
    densidadePopulacional1 = (float)populacao1 / area1;
    densidadePopulacional2 = (float)populacao2 / area2;

    pibPerCapita1 = (pib1 * 1000000000.0f) / (float)populacao1;
    pibPerCapita2 = (pib2 * 1000000000.0f) / (float)populacao2;

    // ================= MOSTRANDO TODAS AS CARTAS =================
    printf("\n=== Cartas Cadastradas ===\n");

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // ================= COMPARAÇÃO =================
    // Escolha do atributo para comparação
    // Troque "populacao" pelo atributo que quiser testar
    printf("\n=== Comparação de Cartas (Atributo: População) ===\n");

    printf("\nCarta 1 - %s (%s): %lu\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
