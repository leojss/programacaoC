#include <stdio.h>

int main() {
    // Declaração de todas as variáveis
    char estado1, estado2, codigo1[20], nomeCidade1[100], codigo2[20], nomeCidade2[100];
    unsigned long int populacao1, populacao2;
    int numPontosTuristicos1, numPontosTuristicos2;
    float area1, pib1, area2, pib2;
    float densidade1, pibPerCapita1, densidade2, pibPerCapita2;
    float superPoder1, superPoder2;

    // Exibe o label "Carta 1:"
    printf("Carta 1:\n");

    // Solicita e valida o estado da primeira carta
    do {
        printf("Digite o estado (A até H): ");
        scanf(" %c", &estado1);
        getchar();
    } while (estado1 < 'A' || estado1 > 'H');

    printf("Digite o código da Carta: ");
    scanf(" %s", codigo1);
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);

    printf("Digite a população: ");
    scanf(" %lu", &populacao1);

    printf("Digite a área: ");
    scanf(" %f", &area1);

    printf("Digite o PIB: ");
    scanf(" %f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &numPontosTuristicos1);
    getchar();

    // Cálculos da carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    // Cálculo do super poder (soma de todos os atributos numéricos + inverso da densidade)
    superPoder1 = populacao1 + area1 + pib1 + numPontosTuristicos1 + pibPerCapita1 + (1.0/densidade1);

    // Carta 2
    printf("\nCarta 2:\n");

    do {
        printf("Digite o estado (A até H): ");
        scanf(" %c", &estado2);
        getchar();
    } while (estado2 < 'A' || estado2 > 'H');

    printf("Digite o código: ");
    scanf(" %s", codigo2);
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);

    printf("Digite a população: ");
    scanf(" %lu", &populacao2);

    printf("Digite a área: ");
    scanf(" %f", &area2);

    printf("Digite o PIB: ");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &numPontosTuristicos2);

    // Cálculos da carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    // Cálculo do super poder (soma de todos os atributos numéricos + inverso da densidade)
    superPoder2 = populacao2 + area2 + pib2 + numPontosTuristicos2 + pibPerCapita2 + (1.0/densidade2);

    // Exibindo os dados coletados das duas cartas
    printf("\n=== Dados das Cartas ===\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos1);
    printf("Densidade Demográfica: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos2);
    printf("Densidade Demográfica: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    return 0;
}
