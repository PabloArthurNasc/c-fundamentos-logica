#include <stdio.h>

int main() {
    char texto[100];
    int inicio = 0, fim = 0;
    int ehPalindromo = 1;

    printf("Digite uma palavra: ");
    scanf("%s", texto);

    while (texto[fim] != '\0') {
        fim++;
    }

    fim--; // último índice

    while (inicio < fim) {
        if (texto[inicio] != texto[fim]) {
            ehPalindromo = 0;
            break;
        }
        inicio++;
        fim--;
    }

    if (ehPalindromo) {
        printf("É um palíndromo\n");
    } else {
        printf("Não é um palíndromo\n");
    }

    return 0;
}
