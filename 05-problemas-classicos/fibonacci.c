#include <stdio.h>

int main() {
    // Variável para armazenar a quantidade de termos desejados
    int n;

    // Variável de controle do loop
    int i;

    // Primeiros valores da sequência de Fibonacci
    int primeiro = 0, segundo = 1, proximo;

    // Solicita ao usuário quantos termos ele quer ver
    printf("Quantos termos da sequência de Fibonacci você quer ver? ");
    scanf("%d", &n);

    // Exibe um título antes da sequência
    printf("Sequência de Fibonacci:\n");

    // Loop que vai repetir 'n' vezes
    for (i = 0; i < n; i++) {

        // Exibe o valor atual da sequência
        printf("%d ", primeiro);

        // Calcula o próximo termo somando os dois anteriores
        proximo = primeiro + segundo;

        // Atualiza os valores:
        // o "primeiro" passa a ser o "segundo"
        primeiro = segundo;

        // o "segundo" passa a ser o "próximo"
        segundo = proximo;
    }

    return 0;
}
