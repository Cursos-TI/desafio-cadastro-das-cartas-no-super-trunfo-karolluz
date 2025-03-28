#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3

// Função para posicionar um navio no tabuleiro
int posicionar_navio(int tabuleiro[][TAMANHO_TABULEIRO], int navio[], int linha, int coluna, int orientacao) {
    // orientacao: 0 = horizontal, 1 = vertical
    if (orientacao == 0) { // Horizontal
        if (coluna + TAMANHO_NAVIO > TAMANHO_TABULEIRO) {
            return 0; // Navio fora dos limites
        }
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            if (tabuleiro[linha][coluna + i] == 3) {
                return 0; // Sobreposição detectada
            }
        }
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            tabuleiro[linha][coluna + i] = navio[i];
        }
    } else { // Vertical
        if (linha + TAMANHO_NAVIO > TAMANHO_TABULEIRO) {
            return 0; // Navio fora dos limites
        }
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            if (tabuleiro[linha + i][coluna] == 3) {
                return 0; // Sobreposição detectada
            }
        }
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            tabuleiro[linha + i][coluna] = navio[i];
        }
    }
    return 1;
}

// Função para exibir o tabuleiro
int exibir_tabuleiro(int tabuleiro[][TAMANHO_TABULEIRO]) {
    printf("  A B C D E F G H I J\n"); // Cabeçalho das colunas
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        printf("%d ", i); // Número da linha
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]); // Exibe o valor da posição
            if (j < TAMANHO_TABULEIRO - 1) {
                printf("| "); // Imprime um separador entre os elementos
            }
        }
        printf("\n");
        if (i < TAMANHO_TABULEIRO - 1) {
            for (int k = 0; k < TAMANHO_TABULEIRO * 2 + 1; k++) {
                printf("-"); // Imprime uma linha separadora entre as linhas
            }
            printf("\n");
        }
    }
    return 0;
}

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};
    int navio_horizontal[TAMANHO_NAVIO] = {3, 3, 3};
    int navio_vertical[TAMANHO_NAVIO] = {3, 3, 3};
    int linha_navio_horizontal = 2;
    int coluna_navio_horizontal = 1;
    int linha_navio_vertical = 6;
    int coluna_navio_vertical = 4;

    // Posiciona os navios
    if (!posicionar_navio(tabuleiro, navio_horizontal, linha_navio_horizontal, coluna_navio_horizontal, 0)) {
        printf("Erro ao posicionar navio horizontal.\n");
        return 1;
    }
    if (!posicionar_navio(tabuleiro, navio_vertical, linha_navio_vertical, coluna_navio_vertical, 1)) {
        printf("Erro ao posicionar navio vertical.\n");
        return 1;
    }

    // Exibe o tabuleiro
    exibir_tabuleiro(tabuleiro);

    return 0;
    }