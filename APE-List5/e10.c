#include <stdio.h>

#define TAM_VETOR 20

int main() {
    int vetor[TAM_VETOR];
    int numero, i, j, encontrado = 0;
    
    // Leitura dos elementos do vetor
    for (i = 0; i < TAM_VETOR; i++) {
        printf("Digite o n�mero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    // Leitura do n�mero a ser removido
    printf("Digite o n�mero a ser removido: ");
    scanf("%d", &numero);
    
    // Verifica��o e remo��o do n�mero
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
        // Impress�o do vetor ap�s a remo��o
        printf("Vetor ap�s remo��o do n�mero:\n");
        for (i = 0; i < TAM_VETOR - 1; i++) {
            printf("%d ", vetor[i]);
        }
        printf("\n");
    } else {
        printf("N�mero n�o encontrado no vetor.\n");
    }
    
    return 0;
}
