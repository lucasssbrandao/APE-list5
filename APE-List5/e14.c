#include <stdio.h>

#define TAM 3

int main() {
    int matriz[TAM][TAM];
    int determinante;
    
    // Leitura dos elementos da matriz
    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    // Cálculo do determinante usando a fórmula para uma matriz 3x3
    determinante = matriz[0][0] * (matriz[1][1] * matriz[2][2] - matriz[1][2] *
