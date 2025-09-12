#include <stdio.h>
// Função para mover a Torre usando um loop for!

// Mover torre 5 casas para frente!
void moverTorre(int casas) {
        printf("\nPara Frente:\n");
        int i = 1;
        for (int i = 1; i <= 5;) {
        printf("Movendo Torre para frente %d casa(s)\n", i, (i == 1) ? "" : "s");
        i++;
        
    }

}

// Função para mover o Bispo usando um loop while!

// Mover Bispo 5 casas na diagonal direita!
void moverBispo(int casas) {
    printf("\nDiagonal Direita:\n");
    int i = 1;
    while (i <= 5) {
        printf("Movendo Bispo na diagonal direita %d casa(s)\n", i, (i == 1) ? "" : "s");
        i++;

    }
}

// Função para mover a Rainha usando um loop do-while!

// Mover Rainha 8 casas para diagonal esquerda!
void moverRainha(int casas) {
    printf("\nDiagonal Esquerda:\n");
    int i = 1;
    do {
        printf("Movendo Rainha na diagonal esquerda %d casa(s)\n", i, (i == 1) ? "" : "s");
        i++;
    } while (i <= 8);
}

// Número de casas que cada peça vai se mover!

int main() {       
    moverTorre(5);
    moverBispo(5);
    moverRainha(8);

// FIM DO JOGO!

    return 0;


}

