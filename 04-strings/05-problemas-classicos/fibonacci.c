#include <stdio.h>

int main() {
    int n, i;
    int primeiro = 0, segundo = 1, proximo;

    printf("Quantos termos da sequência de Fibonacci você quer ver? ");
    scanf("%d", &n);

    printf("Sequência de Fibonacci:\n");

    for (i = 0; i < n; i++) {
        printf("%d ", primeiro);

        proximo = primeiro + segundo;
        primeiro = segundo;
        segundo = proximo;
    }

    return 0;
}
