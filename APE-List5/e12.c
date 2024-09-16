#include <stdio.h>

#define TAM_VETOR 30

int main() {
    int vetor[TAM_VETOR];
    int numero, contagem = 0;
    
    // Leitura dos elementos do vetor
    for (int i = 0; i < TAM_VETOR; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    // Leitura do número a ser contado
    printf("Digite o número para contar as ocorrências: ");
    scanf("%d", &numero);
    
    // Contagem das ocorrências do número
    for (int i = 0; i < TAM_VETOR; i++) {
        if (vetor[i] == numero) {
            contagem++;
        }
    }
    
    printf("O número %d aparece %d vezes no vetor.\n", numero, contagem);
    
    return 0;
}
