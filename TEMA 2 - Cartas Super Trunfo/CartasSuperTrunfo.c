#include <stdio.h>

int main() {
    // Declaração das variáveis
    char estado1, estado2;
    char codigoCarta1[5], codigoCarta2[5];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;

    // Cadastro da primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Código da carta %c01\n: ", estado1);
    scanf("%s", codigoCarta1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade1); 
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculo da densidade populacional e PIB per capita da primeira carta
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // Cadastro da segunda carta
    printf("\nCadastro da segunda carta:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Código da carta %c02\n: ", estado2);
    scanf("%s", codigoCarta2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade populacional e PIB per capita da segunda carta
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Exibição dos dados das cartas, incluindo Densidade Populacional e PIB per capita
    printf("\nDados das cartas:\n");

    printf("\nCarta 1 - %s (%c):\n", nomeCidade1, estado1, estado1);
    printf("  População: %d habitantes\n", populacao1);
    printf("  Área: %.2f km²\n", area1);
    printf("  PIB: %.2f bilhões de reais\n", pib1);
    printf("  Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("  Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("  PIB per capita: %.2f bilhões de reais/hab\n", pibPerCapita1);

    printf("\nCarta 2 - %s (%c):\n", nomeCidade2, estado2, estado2);
    printf("  População: %d habitantes\n", populacao2);
    printf("  Área: %.2f km²\n", area2);
    printf("  PIB: %.2f bilhões de reais\n", pib2);
    printf("  Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("  Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("  PIB per capita: %.2f bilhões de reais/hab\n", pibPerCapita2);
  
    // Comparação e exibição do resultado com base no atributo fixo (População)
    printf("\nComparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%c) : %d\n", nomeCidade1, estado1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %d\n", nomeCidade2, estado2, estado2, populacao2);
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 - %s venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 - %s venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: As cidades têm a mesma população (%d habitantes).\n", populacao1);
    }

    return 0;
}