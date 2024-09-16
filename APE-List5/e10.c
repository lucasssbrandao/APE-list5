#include <stdio.h>

#define TAM_VETOR 20

int main() {
    int vetor[TAM_VETOR];
    int numero, i, j, encontrado = 0;
    
    // Leitura dos elementos do vetor
    for (i = 0; i < TAM_VETOR; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    // Leitura do número a ser removido
    printf("Digite o número a ser removido: ");
    scanf("%d", &numero);
    
    // Verificação e remoção do número
    for (i = 0; i < TAM_VETOR; i++) {
        if (vetor[i] == numero) {
            encontrado = 1;
            for (j = i; j < TAM_VETOR - 1; j++) {
                vetor[j] = vetor[j + 1];
            }
            break;
        }
    }
    
    if (encontrado) {
        // Impressão do vetor após a remoção
        printf("Vetor após remoção do número:\n");
        for (i = 0; i < TAM_VETOR - 1; i++) {
            printf("%d ", vetor[i]);
        }
        printf("\n");
    } else {
        printf("Número não encontrado no vetor.\n");
    }
    
    return 0;
}
