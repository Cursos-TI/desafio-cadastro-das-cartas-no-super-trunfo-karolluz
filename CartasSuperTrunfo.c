#include <stdio.h>

int main() {
// Carta 1
char Estado[50] = ("Parana");
char Carta = " A";
char NomedaCidade[50]= "Curitiba";
int Populacao = 1774;
float Area = 434892;
float Pib = 1197739215013;
int turismo = 30;
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    printf ("Estado:\n");
    printf("%s", Estado);
    printf ("Código da Carta:\n");
    scanf("%s", Carta);
    printf ("nome da Cidade:\n");
    scanf(" %s",NomedaCidade) ;
    printf ("População:\n");
    scanf ("%d",Populacao);
    printf ("Área em km²:\n");
    scanf ("%f",Area);
    printf ("Pib:");
    scanf ("%f", Pib);
    printf ("Quantidade de Pontos Turísticos:");
    scanf ("%d",turismo);

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
