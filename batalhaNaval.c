#include <stdio.h>

// Cria o tabuleiro
int main() {
    int tabuleiro[10][10] = {0}; 

// Estrutura for com a posição dos navios 
    for (int i = 4; i <= 7; i++)
    {
        tabuleiro[2][i] = 3;
    }

    for (int i = 5; i <= 8; i++)
    {
        tabuleiro[i][1] = 3;
    }

    for (int i = 0; i < 4; i++)
    {
        tabuleiro[i][i] = 3;
    }

    for (int i = 0; i < 4; i++) 
    {
        tabuleiro[i][9 - i] = 3;
    }

// Exibe as informações dos navios
    printf("\nTabuleiro:\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
        
    }
    

    return 0;
}
