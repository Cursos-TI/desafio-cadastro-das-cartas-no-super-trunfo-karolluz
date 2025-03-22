#include <stdio.h>

int main() {
    
    printf("Batalha de Cartas no Super Trunfo\n");
    // Declaração das variáveis
    char estado1, estado2;
    char codigoCarta1[5], codigoCarta2[5];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2; // Modificação aqui
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;

    int resultadoArea, resultadoPopulacao, resultadoPib, resultadoPontosTuristicos, resultadoDensidadePopulacional, resultadoPibPerCapita;

    // Cadastro da primeira carta
    printf("Cadastro da primeira carta\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Código da carta %c01\n: ", estado1);
    scanf("%s", codigoCarta1);
    printf("Nome da cidade: ");
    scanf("%s", nomeCidade1);
    printf("População: ");
    scanf("%lu", &populacao1); // Modificação aqui
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculo da densidade populacional e PIB per capita da primeira carta
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // Exibição das informações da primeira carta
    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta %c01\n: ", estado1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1); // Modificação aqui
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f bilhões de reais/hab\n", pibPerCapita1);

    // Cadastro da segunda carta
    printf("\nCadastro da segunda carta\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Código da carta %c02\n: ", estado2);
    scanf("%s", codigoCarta2);
    printf("Nome da cidade: ");
    scanf("%s", nomeCidade2);
    printf("População: ");
    scanf("%lu", &populacao2); // Modificação aqui
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade populacional e PIB per capita da segunda carta
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Exibição das informações da segunda carta
    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta %c02\n: ", estado2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2); // Modificação aqui
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f bilhões de reais/hab\n", pibPerCapita2);

    printf("\nComparaçao das Cartas:\n");

    resultadoArea = area1 > area2;
    resultadoPopulacao = populacao1 > populacao2;
    resultadoPib = pib1 > pib2;
    resultadoPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
    resultadoDensidadePopulacional = densidadePopulacional1 > densidadePopulacional2;
    resultadoPibPerCapita = pibPerCapita1 > pibPerCapita2;

    
    printf("População: Carta %d venceu (%d)\n", resultadoPopulacao ? 1 : 2, resultadoPopulacao);
    printf("Área: Carta %d venceu (%d)\n", resultadoArea ? 1 : 2, resultadoArea);
    printf("PIB: Carta %d venceu (%d)\n", resultadoPib ? 1 : 2, resultadoPib);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", resultadoPontosTuristicos ? 1 : 2, resultadoPontosTuristicos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", resultadoDensidadePopulacional ? 1 : 2, resultadoDensidadePopulacional);
    printf("PIB per Capita: Carta %d venceu (%d)\n", resultadoPibPerCapita ? 1 : 2, resultadoPibPerCapita);
    
    

    return 0;
     }