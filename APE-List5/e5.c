#include <stdio.h>

#define TAM_VETOR 20

int main() {
    int numeros[TAM_VETOR];
    
    // Leitura dos elementos do vetor
    for (int i = 0; i < TAM_VETOR; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    // Impressão do vetor em ordem inversa
    printf("Vetor em ordem inversa:\n");
    for (int i = TAM_VETOR - 1; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
    
    return 0;
}
