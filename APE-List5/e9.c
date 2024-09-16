#include <stdio.h>

#define TAM_VETOR 10

int main() {
    int vetor[TAM_VETOR + 1];
    int i, j, numero, posicao;
    
    // Leitura dos elementos do vetor
    for (i = 0; i < TAM_VETOR; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    // Ordenação do vetor usando o algoritmo de bolha
    for (i = 0; i < TAM_VETOR - 1; i++) {
        for (j = 0; j < TAM_VETOR - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                // Troca dos elementos
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
    
    // Leitura do novo número
    printf("Digite o novo número a ser inserido: ");
    scanf("%d", &numero);
    
    // Encontrar a posição correta para o novo número
    for (posicao = 0; posicao < TAM_VETOR; posicao++) {
        if (numero < vetor[posicao]) {
            break;
        }
    }
    
    // Inserir o número na posição correta
    for (i = TAM_VETOR; i > posicao; i--) {
        vetor[i] = vetor[i - 1];
    }
    vetor[posicao] = numero;
    
    // Impressão do vetor atualizado
    printf("Vetor após inserção do novo número:\n");
    for (i = 0; i <= TAM_VETOR; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    return 0;
}
