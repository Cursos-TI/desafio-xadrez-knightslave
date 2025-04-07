#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

void moverbispo(int casas){
    if(casas > 0){
        printf("Cima + Direita \n");
        moverbispo(casas -1);
    }
}

void movertorre(int casas){
    if(casas > 0){
        printf("Direita \n");
        movertorre(casas -1);
    }
}

void moverRainha(int casas){
    if(casas > 0){
        printf("Esquerda \n");
        moverRainha(casas -1);
    }
}


int main() {
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("______Movimento do Bispo______\n");
    moverbispo(5);
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("______Movimento da torre______\n");
    movertorre(5);
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("______Movimento da Rainha______\n");
    moverRainha(8);
    // Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("______Movimento do Cavalo______\n");
    
    int movimento = 1;

    for (int m = movimento, i = 0; m > 0 && i < movimento * 3; m--, i += 3) {
        for (int j = 0; j < 3; j++) {
            if (j < 2) {
                printf("Cima \n");
            } else {
                printf("Direita \n");
            }
        }
    }

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
