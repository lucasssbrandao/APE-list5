#include <stdio.h>

#define TAM_VETOR 10

int main() {
    int vetor[TAM_VETOR + 1];
    int i, j, numero, posicao;
    
    // Leitura dos elementos do vetor
    for (i = 0; i < TAM_VETOR; i++) {
        printf("Digite o n�mero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    // Ordena��o do vetor usando o algoritmo de bolha
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
    
    // Leitura do novo n�mero
    printf("Digite o novo n�mero a ser inserido: ");
    scanf("%d", &numero);
    
    // Encontrar a posi��o correta para o novo n�mero
    for (posicao = 0; posicao < TAM_VETOR; posicao++) {
        if (numero < vetor[posicao]) {
            break;
        }
    }
    
    // Inserir o n�mero na posi��o correta
    for (i = TAM_VETOR; i > posicao; i--) {
        vetor[i] = vetor[i - 1];
    }
    vetor[posicao] = numero;
    
    // Impress�o do vetor atualizado
    printf("Vetor ap�s inser��o do novo n�mero:\n");
    for (i = 0; i <= TAM_VETOR; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    return 0;
}
