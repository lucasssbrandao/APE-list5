#include <stdio.h>

#define DIAS_ANO 365

int main() {
    float temperaturas[DIAS_ANO];
    float menor, maior, soma = 0.0;
    int dias_abaixo_media = 0;
    
    // Leitura das temperaturas
    for (int i = 0; i < DIAS_ANO; i++) {
        printf("Digite a temperatura do dia %d: ", i + 1);
        scanf("%f", &temperaturas[i]);
        soma += temperaturas[i];
    }
    
    // Inicializa menor e maior temperatura com a primeira temperatura
    menor = maior = temperaturas[0];
    
    // Encontrar a menor e a maior temperatura
    for (int i = 1; i < DIAS_ANO; i++) {
        if (temperaturas[i] < menor) {
            menor = temperaturas[i];
        }
        if (temperaturas[i] > maior) {
            maior = temperaturas[i];
        }
    }
    
    // Cálculo da temperatura média
    float media = soma / DIAS_ANO;
    
    // Contagem de dias abaixo da média
    for (int i = 0; i < DIAS_ANO; i++) {
        if (temperaturas[i] < media) {
            dias_abaixo_media++;
        }
    }
    
    printf("Menor temperatura do ano: %.2f\n", menor);
    printf("Maior temperatura do ano: %.2f\n", maior);
    printf("Temperatura média anual: %.2f\n", media);
    printf("Número de dias com temperatura abaixo da média: %d\n", dias_abaixo_media);
    
    return 0;
}
