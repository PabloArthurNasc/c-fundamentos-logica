#include <stdio.h>

int main() {
    // Vetor para armazenar as 5 notas
    float notas[5];

    // Variáveis auxiliares
    float soma = 0, media;
    float maior, menor;

    // Laço para ler as notas
    for (int i = 0; i < 5; i++) {
        // Solicita a nota ao usuário
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);

        // Soma todas as notas para calcular a média
        soma += notas[i];

        // Na primeira repetição, inicializa maior e menor
        if (i == 0) {
            maior = notas[i];
            menor = notas[i];
        } else {
            // Verifica se a nota atual é maior que a maior registrada
            if (notas[i] > maior) {
                maior = notas[i];
            }

            // Verifica se a nota atual é menor que a menor registrada
            if (notas[i] < menor) {
                menor = notas[i];
            }
        }
    }

    // Calcula a média das notas
    media = soma / 5;

    // Exibe os resultados finais
    printf("\nMedia das notas: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);

    return 0;
}
