#include <stdio.h>

// Função para imprimir uma matriz 5x5
void imprimir(int matriz[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Habilidade Cone
void cone() {
    int m[5][5] = {0};
    m[0][2] = 1;
    m[1][1] = m[1][2] = m[1][3] = 1;
    for (int j = 0; j < 5; j++) {
        m[2][j] = 1;
    }
    printf("Habilidade - Cone:\n");
    imprimir(m);
}

// Habilidade Cruz
void cruz() {
    int m[5][5] = {0};
    for (int i = 0; i < 5; i++) {
        m[2][i] = 1; // linha do meio
        m[i][2] = 1; // coluna do meio
    }
    printf("Habilidade - Cruz:\n");
    imprimir(m);
}

// Habilidade Octaedro
void octaedro() {
    int m[5][5] = {0};
    m[0][2] = m[1][1] = m[1][2] = m[1][3] = 1;
    m[2][2] = 1;
    m[3][1] = m[3][2] = m[3][3] = 1;
    m[4][2] = 1;
    printf("Habilidade - Octaedro:\n");
    imprimir(m);
}

// Tabuleiro e chamadas das habilidades
int main() {
    int tabuleiro[10][10] = {0}; 

    
    for (int i = 4; i <= 7; i++)
        tabuleiro[2][i] = 3;

    
    for (int i = 5; i <= 8; i++)
        tabuleiro[i][1] = 3;

    
    for (int i = 0; i < 4; i++)
        tabuleiro[i][i] = 3;

    
    for (int i = 0; i < 4; i++)
        tabuleiro[i][9 - i] = 3;

    // Exibe tabuleiro com navios
    printf("\nTabuleiro:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Exibe habilidades especiais
    printf("\n=== Habilidades Especiais ===\n");
    cone();
    cruz();
    octaedro();

    return 0;
}
