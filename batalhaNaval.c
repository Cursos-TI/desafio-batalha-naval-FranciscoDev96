#include <stdio.h>

int main () {
    
    // Declaração da matriz
    char coluna[10] = {'A', 'B', 'C', 'D','E', 'F', 'G', 'H', 'I', 'J'};
    

    // Escreve as colunas
    int tabuleiro [10][10];

    // Inicializa o tabuleiro com 0

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

     
    // Navio vertical 
    for (int i = 2; i < 5; i++) { 
        tabuleiro[i][2] = 3;
    }

    // Navio horizontal 
    for (int j = 5; j < 8; j++) { 
        tabuleiro[6][j] = 3;
    }

    printf("Tabuleiro de jogo naval:\n\n");
    printf("  ");
    for(int j = 0; j < 10; j++) {
        printf("  %c", coluna[j]);
        
    }

    
    printf("\n");
    
    for (int a = 0; a < 10; a++) {
        printf("%2d", a+1);
        for (int b = 0; b < 10; b++) {
            printf(" %2d", tabuleiro[a][b]);
            
        }
        printf("\n");
    }

    return 0;
}