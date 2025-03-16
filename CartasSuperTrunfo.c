#include <stdio.h>
 
int main() {

    char estado = 'A';
    char estado2 = 'B';
    char codigo[20] ="A01";
    char codigo2 [20] ="B02";
    char cidade[30];
    char cidade2 [50];
    int populacao;
    int populacao2;
    int turismo;
    int turismo2;
    float area;
    float area2 ;
    float pib;
    float pib2;
    // Carta 1
    printf("Cadastrar Carta 1\n");
    printf ("Digite o nome do Estado: ");
    scanf ("%c", &estado);
    printf (" o Estado é : %c\n" ,estado);

    printf ("Código da Carta: ");
    scanf ("%s",&codigo);
    printf ("O código da Carta é : %s\n", codigo);
   
   printf (" Digite o nome da Cidade: ");
   scanf ("%s", &cidade);
   printf ("A cidade é: %s\n", cidade);
    
   printf ("Digite a População da Cidade: ");
   scanf ("%d", &populacao);
   printf ("A população é: %d\n" , populacao);

   printf ("Digite a area do metros km² bruto da Cidade: ");
   scanf ("%f", &area);
   printf (" A àrea em km² é:  %f\n" , area);

   printf ("Digite o PIB bruto da Cidade: ");
   scanf ("%f", &pib);
   printf (" O PIB é:  %f\n" , pib);

   printf ("Digite a quantidade de pontos turístico da cidade: ");
   scanf ("%d", &turismo);
   printf ("A quantidade de ponto Turístico é:  %d\n" , turismo);
   printf ("Cadastro Concluído!\n");
// Carta 2
printf("Cadastrar Carta 2\n");
printf ("Digite o nome do Estado: ");
scanf ("%c\n", &estado2);
printf (" o Estado é  : %c\n" ,estado2);

    printf ("Código da Carta: ");
    scanf ("%s",&codigo2);
    printf ("O código da Carta é: %s\n", codigo2);
   
   printf (" Digite o nome da Cidade: ");
   scanf ("%s", &cidade2);
   printf ("A cidade é: %s\n", cidade2);
    
   printf ("Digite a População da Cidade: ");
   scanf ("%d", &populacao2);
   printf ("A população é: %d\n" , populacao2);

   printf ("Digite a area do metros km² bruto da Cidade: ");
   scanf ("%f", &area2);
   printf (" A àrea em km² é:  %f\n" , area2);

   printf ("Digite o PIB bruto da Cidade: ");
   scanf ("%f", &pib2);
   printf (" O PIB é:  %f\n" , pib2);

   printf ("Digite a quantidade de pontos turístico da cidade: ");
   scanf ("%d", &turismo2);
   printf ("A quantidade de ponto Turístico é:  %d\n" , turismo2);
   printf ("Cadastro Concluído!\n");
return 0;


}