#include <stdio.h>
// Cria o tabuleiro
int main() {
    int tabuleiro[5][5] = {0}; 
    // Estruturas for com a posição
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[1][i] = 1;
        printf("Navio horizontal: (%d, %d)\n", 1, i);
    }

    for (int i = 0; i < 4; i++)
    {
        tabuleiro[i][3] = 2;
        printf("Navio vertical: (%d, %d)\n", i, 3);
    }
    
    return 0;
}
