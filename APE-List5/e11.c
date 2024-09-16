#include <stdio.h>

#define TAM_VETOR 15

int main() {
    int V1[TAM_VETOR], V2[TAM_VETOR];
    int iguais = 0;
    
    // Leitura dos elementos do vetor V1
    printf("Digite os elementos do vetor V1:\n");
    for (int i = 0; i < TAM_VETOR; i++) {
        printf("V1[%d]: ", i);
        scanf("%d", &V1[i]);
    }
    
    // Leitura dos elementos do vetor V2
    printf("Digite os elementos do vetor V2:\n");
    for (int i = 0; i < TAM_VETOR; i++) {
        printf("V2[%d]: ", i);
        scanf("%d", &V2[i]);
    }
    
    // Comparação dos vetores
    for (int i = 0; i < TAM_VETOR; i++) {
        if (V1[i] == V2[i]) {
            iguais++;
        }
    }
    
    printf("Quantidade de posições com os mesmos números em V1 e V2: %d\n", iguais);
    
    return 0;
}
