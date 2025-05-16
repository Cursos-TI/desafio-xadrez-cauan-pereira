""#include <stdio.h>

// Funções recursivas para Torre, Bispo e Rainha
void moverTorre(int casas, int contador) {
    if (contador < casas) {
        printf("Direita
");
        moverTorre(casas, contador + 1);
    }
}

void moverBispo(int x, int y, int limite) {
    if (x < limite && y < limite) {
        printf("Cima Direita
");
        moverBispo(x + 1, y + 1, limite);
    }
}

void moverRainha(int casas, int contador) {
    if (contador < casas) {
        printf("Esquerda
");
        moverRainha(casas, contador + 1);
    }
}

// Função para movimentar o Cavalo com loops aninhados
void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");
    for (int i = 0; i < 2; i++) {
        printf("Cima
");
    }
    for (int j = 0; j < 1; j++) {
        printf("Direita
");
    }
}

int main() {
    // Movimentação da Torre
    printf("Movimento da Torre:\n");
    moverTorre(5, 0);

    printf("\n");

    // Movimentação do Bispo
    printf("Movimento do Bispo:\n");
    moverBispo(0, 0, 5);

    printf("\n");

    // Movimentação da Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(8, 0);

    printf("\n");

    // Movimentação do Cavalo
    moverCavalo();

    return 0;
}
""
