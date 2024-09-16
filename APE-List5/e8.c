#include <stdio.h>

#define TAM_VETOR 10

int main() {
    int vetor[TAM_VETOR];
    int temp;
    
    // Leitura dos elementos do vetor
    for (int i = 0; i < TAM_VETOR; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    // Ordenação do vetor usando o algoritmo de bolha
    for (int i = 0; i < TAM_VETOR - 1; i++) {
        for (int j = 0; j < TAM_VETOR - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                // Troca dos elementos
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
    
    // Impressão do vetor ordenado
    printf("Vetor ordenado em ordem crescente:\n");
    for (int i = 0; i < TAM_VETOR; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    return 0;
}
