#include <stdio.h>

int main() {
    // aqui vou guardar os dados de 4 cartas
    char codigo1[4], codigo2[4], codigo3[4], codigo4[4];
    int populacao1, populacao2, populacao3, populacao4;
    float area1, area2, area3, area4;
    float pib1, pib2, pib3, pib4;
    int pontosTuristicos1, pontosTuristicos2, pontosTuristicos3, pontosTuristicos4;

    // ================= CARTA 1 =================
    printf("\n=== Cadastro da Carta 1 ===\n");
    printf("Digite o codigo da carta: ");
    scanf("%3s", codigo1);
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a area em km²: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // ================= CARTA 2 =================
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o codigo da carta: ");
    scanf("%3s", codigo2);
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a area em km²: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // ================= CARTA 3 =================
    printf("\n=== Cadastro da Carta 3 ===\n");
    printf("Digite o codigo da carta: ");
    scanf("%3s", codigo3);
    printf("Digite a populacao: ");
    scanf("%d", &populacao3);
    printf("Digite a area em km²: ");
    scanf("%f", &area3);
    printf("Digite o PIB: ");
    scanf("%f", &pib3);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos3);

    // ================= CARTA 4 =================
    printf("\n=== Cadastro da Carta 4 ===\n");
    printf("Digite o codigo da carta: ");
    scanf("%3s", codigo4);
    printf("Digite a populacao: ");
    scanf("%d", &populacao4);
    printf("Digite a area em km²: ");
    scanf("%f", &area4);
    printf("Digite o PIB: ");
    scanf("%f", &pib4);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos4);

    // ================= MOSTRANDO TODAS AS CARTAS =================
    printf("\n=== Cartas Cadastradas ===\n");

    printf("\nCarta 1:\n");
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    printf("\nCarta 3:\n");
    printf("Codigo: %s\n", codigo3);
    printf("Populacao: %d\n", populacao3);
    printf("Area: %.2f km²\n", area3);
    printf("PIB: %.2f\n", pib3);
    printf("Pontos Turisticos: %d\n", pontosTuristicos3);

    printf("\nCarta 4:\n");
    printf("Codigo: %s\n", codigo4);
    printf("Populacao: %d\n", populacao4);
    printf("Area: %.2f km²\n", area4);
    printf("PIB: %.2f\n", pib4);
    printf("Pontos Turisticos: %d\n", pontosTuristicos4);

    return 0;
}
