#include <stdio.h>

#define TAM_VETOR 20

int main() {
    int Q[TAM_VETOR];
    int maior, pos_maior;
    
    // Leitura dos elementos do vetor
    for (int i = 0; i < TAM_VETOR; i++) {
        do {
            printf("Digite um n�mero positivo para a posi��o %d: ", i + 1);
            scanf("%d", &Q[i]);
        } while (Q[i] < 0);
    }
    
    // Inicializa o maior valor com o primeiro elemento
    maior = Q[0];
    pos_maior = 0;
    
    // Encontrar o maior elemento e sua posi��o
    for (int i = 1; i < TAM_VETOR; i++) {
        if (Q[i] > maior) {
            maior = Q[i];
            pos_maior = i;
        }
    }
    
    printf("Maior elemento: %d\n", maior);
    printf("Posi��o do maior elemento: %d\n", pos_maior);
    
    return 0;
}
