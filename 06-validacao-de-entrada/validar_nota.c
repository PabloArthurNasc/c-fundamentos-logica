#include <stdio.h>

int main() {
    // Variável para armazenar a nota digitada pelo usuário
    int nota;

    // Solicita ao usuário que digite uma nota entre 0 e 100
    printf("Digite uma nota entre 0 e 100: ");
    scanf("%d", &nota);

    // Enquanto a nota estiver fora do intervalo válido (menor que 0 ou maior que 100),
    // o programa continua pedindo uma nova entrada
    while (nota < 0 || nota > 100) {

        // Mensagem de erro para valor inválido
        printf("Valor inválido. Digite uma nota entre 0 e 100: ");

        // Lê novamente a nota
        scanf("%d", &nota);
    }

    // Quando sair do loop, significa que a nota é válida
    printf("Nota válida: %d\n", nota);

    return 0;
}
