#include <stdio.h>

// Função para imprimir o movimento da Torre
// Retorna um valor inteiro (0) para indicar sucesso
int imprimirMovimentoTorre() {
    // Imprimir título do movimento da Torre
    printf("Movimento da Torre:\n");
    
    // Laço de repetição para imprimir o movimento 5 vezes
    for (int i = 0; i < 5; i++) {
        // Imprimir direção do movimento
        printf("Direita\n");
    }
    
    // Retornar 0 para indicar sucesso
    return 0;
}

// Função para imprimir o movimento do Bispo
// Retorna um valor inteiro (0) para indicar sucesso
int imprimirMovimentoBispo() {
    // Imprimir título do movimento do Bispo
    printf("\nMovimento do Bispo:\n");
    
    // Variável para controlar o laço de repetição
    int j = 0;
    
    // Laço de repetição para imprimir o movimento 5 vezes
    while (j < 5) {
        // Imprimir direção do movimento
        printf("Cima, Direita\n");
        
        // Incrementar variável de controle
        j++;
    }
    
    // Retornar 0 para indicar sucesso
    return 0;
}

// Função para imprimir o movimento da Rainha
// Retorna um valor inteiro (0) para indicar sucesso
int imprimirMovimentoRainha() {
    // Imprimir título do movimento da Rainha
    printf("\nMovimento da Rainha:\n");
    
    // Variável para controlar o laço de repetição
    int k = 0;
    
    // Laço de repetição para imprimir o movimento 8 vezes
    do {
        // Imprimir direção do movimento
        printf("Esquerda\n");
        
        // Incrementar variável de controle
        k++;
    } while (k < 8);
    
    // Retornar 0 para indicar sucesso
    return 0;
}

int main() {
    // Imprimir movimentos das peças
    imprimirMovimentoTorre();
    imprimirMovimentoBispo();
    imprimirMovimentoRainha();
    
    // Retornar 0 para indicar sucesso
    return 0;
}