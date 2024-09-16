#include <stdio.h>

int main() {
    int N;
    
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &N);
    
    int A[N], B[N], Soma[N];
    
    // Leitura dos elementos do vetor A
    printf("Digite os elementos do vetor A:\n");
    for (int i = 0; i < N; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }
    
    // Leitura dos elementos do vetor B
    printf("Digite os elementos do vetor B:\n");
    for (int i = 0; i < N; i++) {
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);
    }
    
    // Cálculo da soma dos vetores
    for (int i = 0; i < N; i++) {
        Soma[i] = A[i] + B[i];
    }
    
    // Impressão do vetor Soma
    printf("Vetor Soma:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", Soma[i]);
    }
    printf("\n");
    
    return 0;
}
