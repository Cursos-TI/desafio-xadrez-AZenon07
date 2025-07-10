#include <stdio.h>

void moverCavalo() {
    const int casasBaixo = 2;
    const int casasEsquerda = 1;
    int posicaoX = 0;
    int posicaoY = 0;
    
    printf("Movimentação do Cavalo em L (para baixo e para a esquerda):\n");
    
    for (int i = 0; i < casasBaixo; i++) {
        posicaoX++;
        printf("Baixo\n");
    }
    
    int j = 0;
    while (j < casasEsquerda) {
        posicaoY--;
        printf("Esquerda\n");
        j++;
    }
    
    printf("Posição final do cavalo: (%d, %d)\n", posicaoX, posicaoY);
}

int main() {
    moverCavalo();
    return 0;
}