#include <stdio.h>

#define TAM_VETOR 10

int main() {
    int A[TAM_VETOR];
    int M[TAM_VETOR];
    int X;
    
    // Leitura dos elementos do vetor A
    for (int i = 0; i < TAM_VETOR; i++) {
        printf("Digite o valor do elemento %d de A: ", i + 1);
        scanf("%d", &A[i]);
    }
    
    // Leitura do valor X
    printf("Digite o valor de X: ");
    scanf("%d", &X);
    
    // Multiplicação dos elementos e armazenamento em M
    for (int i = 0; i < TAM_VETOR; i++) {
        M[i] = A[i] * X;
    }
    
    // Impressão do vetor M
    printf("Vetor M:\n");
    for (int i = 0; i < TAM_VETOR; i++) {
        printf("%d ", M[i]);
    }
    printf("\n");
    
    return 0;
}
