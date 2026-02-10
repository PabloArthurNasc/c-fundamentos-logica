#include <stdio.h>

int main() {

    int opcao;   // Variável que armazena a opção escolhida pelo usuário

    // Laço principal do menu
    // O menu será exibido enquanto a opção for diferente de 0
    do {
        // Exibição das opções do menu
        printf("\n=== MENU PRINCIPAL ===\n");
        printf("1 - Mensagem de boas-vindas\n");
        printf("2 - Mostrar numeros de 1 a 10\n");
        printf("3 - Mostrar numeros pares de 1 a 20\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        // Estrutura switch para tratar a opção escolhida
        switch (opcao) {

            case 1:
                // Exibe uma mensagem simples ao usuário
                printf("\nBem-vindo ao sistema!\n");
                break;

            case 2:
                // Exibe os números de 1 a 10 usando um laço for
                printf("\nNumeros de 1 a 10:\n");
                for (int i = 1; i <= 10; i++) {
                    printf("%d ", i);
                }
                printf("\n");
                break;

            case 3:
                // Exibe os números pares de 1 a 20
                printf("\nNumeros pares de 1 a 20:\n");
                for (int i = 2; i <= 20; i += 2) {
                    printf("%d ", i);
                }
                printf("\n");
                break;

            case 0:
                // Encerra o programa
                printf("\nEncerrando o programa...\n");
                break;

            default:
                // Trata opções inválidas digitadas pelo usuário
                printf("\nOpcao invalida!\n");
        }

    } while (opcao != 0);  // Repete o menu até o usuário escolher sair

    return 0;
}
