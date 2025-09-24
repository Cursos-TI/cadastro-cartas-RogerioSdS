#include <stdio.h>
#include <string.h>

int main(void) {
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

    // ================= MENU INTERATIVO =================
    int opcao;
    printf("\n=== Super Trunfo - Escolha o atributo para comparar ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\n=== Resultado da Comparação ===\n");

    // ================= COMPARAÇÃO =================
    switch (opcao) {
        case 1: // População
            printf("Comparação por População:\n");
            printf("%s: %lu\n", cidade1, populacao1);
            printf("%s: %lu\n", cidade2, populacao2);

            if (populacao1 > populacao2) {
                printf("Vencedora: %s\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("Vencedora: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Área
            printf("Comparação por Área:\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);

            if (area1 > area2) {
                printf("Vencedora: %s\n", cidade1);
            } else if (area2 > area1) {
                printf("Vencedora: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Comparação por PIB:\n");
            printf("%s: %.2f bilhões\n", cidade1, pib1);
            printf("%s: %.2f bilhões\n", cidade2, pib2);

            if (pib1 > pib2) {
                printf("Vencedora: %s\n", cidade1);
            } else if (pib2 > pib1) {
                printf("Vencedora: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Pontos Turísticos
            printf("Comparação por Pontos Turísticos:\n");
            printf("%s: %d\n", cidade1, pontosTuristicos1);
            printf("%s: %d\n", cidade2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Vencedora: %s\n", cidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Vencedora: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade (menor vence)
            printf("Comparação por Densidade Populacional:\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidadePopulacional1);
            printf("%s: %.2f hab/km²\n", cidade2, densidadePopulacional2);

            if (densidadePopulacional1 < densidadePopulacional2) {
                printf("Vencedora: %s\n", cidade1);
            } else if (densidadePopulacional2 < densidadePopulacional1) {
                printf("Vencedora: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 6: // PIB per Capita
            printf("Comparação por PIB per Capita:\n");
            printf("%s: %.2f reais\n", cidade1, pibPerCapita1);
            printf("%s: %.2f reais\n", cidade2, pibPerCapita2);

            if (pibPerCapita1 > pibPerCapita2) {
                printf("Vencedora: %s\n", cidade1);
            } else if (pibPerCapita2 > pibPerCapita1) {
                printf("Vencedora: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Escolha um número de 1 a 6.\n");
    }

    return 0;
}
