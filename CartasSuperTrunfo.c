#include <stdio.h>
 
int main() {

// Carta 1

   char  estado1 , estado2;
    char codigo1[20]="01" , codigo2[20]="02", cidade1[20], cidade2[20];
    int populacao1 , populacao2 , turismo1 , turismo2;
    float area1 ,area2, pib1 ,pib2;
    


    // Carta 2




// Cadastrando o Estado
printf("Cadastrar Carta 1\n");
printf ("Digite o nome do Estado: ");   
scanf ("%c\n", &estado1);
printf (" o Estado é  : %c\n" ,estado1);

// Cadastrando o Código da Carta
 printf ("Codigo da Carta: %s\n", codigo1);
    scanf("%s",&estado1, "%s" ,&codigo1);
  printf ("O código da Carta é: %c%s\n", estado1 ,codigo1);

// Cadastrando a Cidade

   printf (" Digite o nome da Cidade: ");
   scanf ("%s", &cidade1);
   printf (" A cidade é: %s\n", cidade1);

    // Cadastrando a População da Cidade

   printf ("Digite a População da Cidade: ");
   scanf ("%d", &populacao1);
   printf ("A população é: %d\n" , populacao1);

 // Cadastrando a Km² bruto da cidade

   printf ("Digite a area do km² bruto da Cidade: ");
   scanf ("%f", &area1);
   printf ("A área é:  %f\n" , area1);

// Cadastrando o PIB da Cidade

   printf ("Digite o PIB bruto da Cidade: ");
   scanf ("%f", &pib1);
   printf (" O PIB é:  %f\n" , pib1);

// Cadastrando a quantidade de pontos turístico da cidade

   printf ("Digite a quantidade de pontos turístico da cidade: ");
   scanf ("%d", &turismo1);
   printf ("A quantidade de ponto Turístico é:  %d\n" , turismo1);

// Cadastro da carta 1 finalizado

   printf ("O Cadastro foi concluído com sucesso!\n");



   // Carta 2


// Cadastrando o Estado

printf("Cadastrar Carta 2\n");
printf ("Digite o nome do Estado: ");   
scanf ("%c\n", &estado2);
printf (" o Estado é  : %c\n" ,estado2);

// Cadastrando o Código da Carta
 printf ("Codigo da Carta: %s\n", codigo2);
    scanf ("%s",&estado2, "%s",&codigo2);
  printf ("O código da Carta é: %c%s\n", estado2 ,codigo2);

// Cadastrando a Cidade

   printf (" Digite o nome da Cidade: ");
   scanf ("%s", &cidade2);
   printf (" A cidade é: %s\n", cidade2);

    // Cadastrando a População da Cidade

   printf ("Digite a População da Cidade: ");
   scanf ("%d", &populacao2);
   printf ("A população é: %d\n" , populacao2);

 // Cadastrando a Km² bruto da cidade

   printf ("Digite a area do km² bruto da Cidade: ");
   scanf ("%f", &area2);
   printf ("A área é:  %f\n" , area2);

// Cadastrando o PIB da Cidade

   printf ("Digite o PIB bruto da Cidade: ");
   scanf ("%f", &pib2);
   printf (" O PIB é:  %f\n" , pib2);

// Cadastrando a quantidade de pontos turístico da cidade

   printf ("Digite a quantidade de pontos turístico da cidade: ");
   scanf ("%d", &turismo2);
   printf ("A quantidade de ponto Turístico é:  %d\n" , turismo2);

// Cadastro da carta 2 finalizado

   printf ("O Cadastro foi concluído com sucesso!\n");

return 0;


}