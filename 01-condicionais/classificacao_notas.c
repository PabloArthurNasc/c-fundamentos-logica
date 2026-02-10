#include <stdio.h>

int main() {

    // Declaração das variáveis
    int i;                     // Contador do laço
    int nota[5];               // Vetor para armazenar as notas
    int soma = 0;              // Soma das notas válidas
    int notasValidas = 0;      // Contador de notas válidas
    int aprovados = 0;         // Contador de aprovados
    int recuperacao = 0;       // Contador de alunos em recuperação
    int reprovados = 0;        // Contador de reprovados
    int invalidas = 0;         // Contador de notas inválidas
    float media;               // Média das notas válidas

    // Laço para leitura e classificação das notas
    for (i = 0; i < 5; i++) {

        // Solicita ao usuário a nota
        printf("Insira a nota %d: ", i + 1);
        scanf("%d", &nota[i]);

        // Verifica se a nota é inválida (fora do intervalo permitido)
        if (nota[i] < 0 || nota[i] > 10) {
            printf("Nota invalida\n");
            invalidas++;
        } 
        else {
            // A nota é válida, então entra nos cálculos
            notasValidas++;
            soma += nota[i];

            // Classificação da nota
            if (nota[i] >= 7) {
                printf("Você foi aprovado\n");
                aprovados++;
            } 
            else if (nota[i] >= 5) {
                printf("Você esta de recuperação\n");
                recuperacao++;
            } 
            else {
                printf("Você foi reprovado\n");
                reprovados++;
            }
        }
    }

    // Exibe o resumo das classificações
    printf("\nResumo:\n");
    printf("Notas invalidas: %d\n", invalidas);
    printf("Aprovados: %d\n", aprovados);
    printf("Recuperação: %d\n", recuperacao);
    printf("Reprovados: %d\n", reprovados);

    // Calcula a média apenas se houver notas válidas
    if (notasValidas == 0) {
        printf("Não houve notas validas\n");
    } 
    else {
        // Conversão explícita para evitar divisão inteira
        media = (float)soma / notasValidas;

        printf("Total de notas validas: %d\n", notasValidas);
        printf("Media das notas: %.2f\n", media);
    }

    return 0;
}
