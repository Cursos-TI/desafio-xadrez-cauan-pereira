#include <stdio.h>

int main() {
    // Movimento da Torre - 5 casas para a direita (usando for)
    printf("Movimento da Torre - 5 casas para a Direita:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Casa %d: Direita\n", i);
    }

    printf("\n-------------------------\n");

    // Movimento do Bispo - 5 casas na diagonal (usando while)
    printf("Movimento do Bispo - 5 casas na Diagonal (Cima Direita):\n");
    int j = 1;
    while (j <= 5) {
        printf("Casa %d: Cima Direita\n", j);
        j++;
    }

    printf("\n-------------------------\n");

    // Movimento da Rainha - 8 casas para a esquerda (usando do-while)
    printf("Movimento da Rainha - 8 casas para a Esquerda:\n");
    int k = 1;
    do {
        printf("Casa %d: Esquerda\n", k);
        k++;
    } while (k <= 8);

    printf("\n-------------------------\n");

    // Movimento do Cavalo - "L" (duas casas para baixo e uma para a esquerda)
    printf("Movimento do Cavalo - L (Baixo, Baixo, Esquerda):\n");

    // Loop para movimento "Baixo"
    for (int m = 1; m <= 2; m++) {
        printf("Casa %d: Baixo\n", m);
    }

    // Loop aninhado para movimento "Esquerda"
    int n = 1;
    while (n <= 1) {
        printf("Casa 3: Esquerda\n");
        n++;
    }

    printf("\nMovimento do Cavalo finalizado!\n");

    return 0;
}
