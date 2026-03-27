#include <stdio.h>

int main() {
    // Vetor de caracteres para armazenar a palavra digitada pelo usuário
    char texto[100];

    // Variáveis para controlar o início e o fim da string
    int inicio = 0, fim = 0;

    // Variável que assume que é palíndromo (1 = verdadeiro, 0 = falso)
    int ehPalindromo = 1;

    // Solicita ao usuário que digite uma palavra
    printf("Digite uma palavra: ");

    // Lê a palavra digitada (sem espaços)
    scanf("%s", texto);

    // Percorre a string para encontrar seu tamanho
    // (até encontrar o caractere nulo '\0')
    while (texto[fim] != '\0') {
        fim++;
    }

    // Ajusta para o último índice válido da string
    fim--; 

    // Compara os caracteres do início e do fim
    // até que os índices se encontrem
    while (inicio < fim) {

        // Se os caracteres forem diferentes,
        // não é um palíndromo
        if (texto[inicio] != texto[fim]) {
            ehPalindromo = 0; // marca como falso
            break; // interrompe o loop
        }

        // Avança o início e recua o fim
        inicio++;
        fim--;
    }

    // Verifica o resultado e exibe a mensagem correspondente
    if (ehPalindromo) {
        printf("É um palíndromo\n");
    } else {
        printf("Não é um palíndromo\n");
    }

    return 0;
}
