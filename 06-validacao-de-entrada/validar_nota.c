#include <stdio.h>

int main() {
    int nota;

    printf("Digite uma nota entre 0 e 100: ");
    scanf("%d", &nota);

    while (nota < 0 || nota > 100) {
        printf("Valor inválido. Digite uma nota entre 0 e 100: ");
        scanf("%d", &nota);
    }

    printf("Nota válida: %d\n", nota);

    return 0;
}
