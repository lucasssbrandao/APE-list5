#include <stdio.h>

#define TAM_VETOR 30

int main() {
    int vetor[TAM_VETOR];
    int numero, contagem = 0;
    
    // Leitura dos elementos do vetor
    for (int i = 0; i < TAM_VETOR; i++) {
        printf("Digite o n�mero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    // Leitura do n�mero a ser contado
    printf("Digite o n�mero para contar as ocorr�ncias: ");
    scanf("%d", &numero);
    
    // Contagem das ocorr�ncias do n�mero
    for (int i = 0; i < TAM_VETOR; i++) {
        if (vetor[i] == numero) {
            contagem++;
        }
    }
    
    printf("O n�mero %d aparece %d vezes no vetor.\n", numero, contagem);
    
    return 0;
}
