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

    // Cadastro da primeira carta
    printf("Cadastro da primeira carta:\n");
    
    printf("Estado: ");
    scanf(" %c", &estado1);
    
    printf("Código da carta %c01\n: ", estado1);
    scanf("%s",codigoCarta1);
    
    printf("Nome da cidade: ");
    scanf("%s", nomeCidade1);
    
    printf("População: ");
    scanf("%d", &populacao1);
    
    printf("Área (em km²): ");
    scanf("%f", &area1);
    
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Exibição das informações da primeira carta
    
    printf("\nCarta 1:\n");
    
    printf("Estado: %c\n", estado1);
    printf("Código da carta %c01\n: ", estado1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Cadastro da segunda carta
    
    printf("\nCadastro da segunda carta:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    
    printf("Código da carta %c02\n: ", estado2);
    scanf("%s", codigoCarta2);
    
    printf("Nome da cidade: ");
    scanf("%s", nomeCidade2);
    
    printf("População: ");
    scanf("%d", &populacao2);
    
    printf("Área (em km²): ");
    scanf("%f", &area2);
    
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição das informações da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta %c02\n: ", estado2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}