#include <stdio.h>
#include <string.h>

int main(void) {
    // ================== CARTAS (pré-cadastradas para simplificar) ==================
    char estado1[] = "SP", estado2[] = "RJ";
    char cidade1[] = "São Paulo", cidade2[] = "Rio de Janeiro";

    unsigned long int populacao1 = 12300000, populacao2 = 6710000;
    float area1 = 1521.11f, area2 = 1182.30f;
    float pib1 = 714.0f, pib2 = 350.0f; // bilhões
    int pontosTuristicos1 = 20, pontosTuristicos2 = 15;

    float densidade1 = (float)populacao1 / area1;
    float densidade2 = (float)populacao2 / area2;
    float pibPerCapita1 = (pib1 * 1000000000.0f) / populacao1;
    float pibPerCapita2 = (pib2 * 1000000000.0f) / populacao2;

    // ================== MENU PARA ESCOLHA DOS ATRIBUTOS ==================
    int op1, op2;
    printf("\n=== Super Trunfo - Comparação de Dois Atributos ===\n");
    printf("Escolha o primeiro atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Opção: ");
    scanf("%d", &op1);

    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 6; i++) {
        if (i != op1) {
            switch(i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turísticos\n"); break;
                case 5: printf("5 - Densidade Populacional\n"); break;
                case 6: printf("6 - PIB per Capita\n"); break;
            }
        }
    }
    printf("Opção: ");
    scanf("%d", &op2);

    if (op1 == op2 || op1 < 1 || op1 > 6 || op2 < 1 || op2 > 6) {
        printf("\nErro: escolha inválida! Os dois atributos devem ser diferentes e válidos (1 a 6).\n");
        return 1;
    }

    // ================== FUNÇÃO AUXILIAR: pegar valor ==================
    float valor1, valor2; // armazenar valores dos atributos
    float soma1 = 0, soma2 = 0;

    for (int k = 1; k <= 2; k++) {
        int escolha = (k == 1) ? op1 : op2;

        switch (escolha) {
            case 1: // População
                valor1 = populacao1; valor2 = populacao2;
                printf("\nComparação por População:\n");
                printf("%s: %lu | %s: %lu\n", cidade1, populacao1, cidade2, populacao2);
                break;
            case 2: // Área
                valor1 = area1; valor2 = area2;
                printf("\nComparação por Área:\n");
                printf("%s: %.2f km² | %s: %.2f km²\n", cidade1, area1, cidade2, area2);
                break;
            case 3: // PIB
                valor1 = pib1; valor2 = pib2;
                printf("\nComparação por PIB:\n");
                printf("%s: %.2f bi | %s: %.2f bi\n", cidade1, pib1, cidade2, pib2);
                break;
            case 4: // Pontos Turísticos
                valor1 = pontosTuristicos1; valor2 = pontosTuristicos2;
                printf("\nComparação por Pontos Turísticos:\n");
                printf("%s: %d | %s: %d\n", cidade1, pontosTuristicos1, cidade2, pontosTuristicos2);
                break;
            case 5: // Densidade (regra invertida)
                valor1 = -densidade1; valor2 = -densidade2; // inverte para que menor seja maior
                printf("\nComparação por Densidade Populacional (vence o menor):\n");
                printf("%s: %.2f hab/km² | %s: %.2f hab/km²\n", cidade1, densidade1, cidade2, densidade2);
                break;
            case 6: // PIB per Capita
                valor1 = pibPerCapita1; valor2 = pibPerCapita2;
                printf("\nComparação por PIB per Capita:\n");
                printf("%s: %.2f | %s: %.2f\n", cidade1, pibPerCapita1, cidade2, pibPerCapita2);
                break;
            default:
                printf("\nErro inesperado.\n");
                return 1;
        }

        // Usa operador ternário para decidir pontos
        soma1 += (valor1 > valor2) ? valor1 : 0;
        soma2 += (valor2 > valor1) ? valor2 : 0;
        if (valor1 == valor2) { soma1 += valor1; soma2 += valor2; } // empate, ambos recebem
    }

    // ================== RESULTADO FINAL ==================
    printf("\n=== Resultado Final ===\n");
    printf("%s - Soma dos atributos: %.2f\n", cidade1, soma1);
    printf("%s - Soma dos atributos: %.2f\n", cidade2, soma2);

    if (soma1 > soma2) {
        printf("\nVencedora: %s\n", cidade1);
    } else if (soma2 > soma1) {
        printf("\nVencedora: %s\n", cidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
