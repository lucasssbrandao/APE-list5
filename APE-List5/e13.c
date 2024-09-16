#include <stdio.h>

#define TAM_VETOR 50

int main() {
    int vetor[TAM_VETOR];
    int repetidos = 0;
    
    // Leitura dos elementos do vetor
    for (int i = 0; i < TAM_VETOR; i++) {
        printf("Digite o n�mero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    // Verifica��o de n�meros repetidos
    for (int i = 0; i < TAM_VETOR; i++) {
        for (int j = i + 1; j < TAM_VETOR; j++) {
            if (vetor[i] == vetor[j]) {
                printf("N�mero repetido: %d (Posi��es: %d e %d)\n", vetor[i], i, j);
                repetidos = 1;
                break;
            }
        }
    }
    
    if (!repetidos) {
        printf("Nenhum n�mero repetido encontrado.\n");
    }
    
    return 0;
}
