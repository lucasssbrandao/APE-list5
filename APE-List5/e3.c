#include <stdio.h>

#define TAM_VETOR 20

int main() {
    int Q[TAM_VETOR];
    int menor, pos_menor;
    
    // Leitura dos elementos do vetor
    for (int i = 0; i < TAM_VETOR; i++) {
        do {
            printf("Digite um número positivo para a posição %d: ", i + 1);
            scanf("%d", &Q[i]);
        } while (Q[i] < 0);
    }
    
    // Inicializa o menor valor com o primeiro elemento
    menor = Q[0];
    pos_menor = 0;
    
    // Encontrar o menor elemento e sua posição
    for (int i = 1; i < TAM_VETOR; i++) {
        if (Q[i] < menor) {
            menor = Q[i];
            pos_menor = i;
        }
    }
    
    printf("Menor elemento: %d\n", menor);
    printf("Posição do menor elemento: %d\n", pos_menor);
    
    return 0;
}
