#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    // loop principal do programa
    do {
        // exibe o menu
        printf("\n====================\n");
        printf("     CALCULADORA     \n");
        printf("====================\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        // verifica se a opcao escolhida precisa de numeros
        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);

            printf("Digite o segundo numero: ");
            scanf("%f", &num2);
        }

        // executa a operacao escolhida
        switch (opcao) {
            case 1:
                resultado = num1 + num2;
                printf("Resultado: %.2f\n", resultado);
                break;

            case 2:
                resultado = num1 - num2;
                printf("Resultado: %.2f\n", resultado);
                break;

            case 3:
                resultado = num1 * num2;
                printf("Resultado: %.2f\n", resultado);
                break;

            case 4:
                // verifica divisao por zero
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("Resultado: %.2f\n", resultado);
                } else {
                    printf("Erro: divisao por zero\n");
                }
                break;

            case 0:
                printf("Encerrando o programa...\n");
                break;

            default:
                // caso o usuario digite uma opcao invalida
                printf("Opcao invalida, tente novamente.\n");
        }

    } while (opcao != 0); // repete ate o usuario escolher sair

    return 0;
}
