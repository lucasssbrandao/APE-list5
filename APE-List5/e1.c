#include <stdio.h>

#define NUM_ALUNOS 20

int main() {
    float notas[NUM_ALUNOS];
    float soma = 0.0;
    int contagem_acima_media = 0;
    
    // Leitura das notas
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    
    // C�lculo da m�dia
    float media = soma / NUM_ALUNOS;
    printf("M�dia da turma: %.2f\n", media);
    
    // Contagem de alunos com nota acima da m�dia
    for (int i = 0; i < NUM_ALUNOS; i++) {
        if (notas[i] > media) {
            contagem_acima_media++;
        }
    }
    
    printf("N�mero de alunos com nota acima da m�dia: %d\n", contagem_acima_media);
    
    return 0;
}
