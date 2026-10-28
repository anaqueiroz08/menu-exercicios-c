#include <stdio.h>

int main() {
    int opcao;

    do {
        printf("\n========================================\n");
        printf("           MENU DE EXERCICIOS           \n");
        printf("========================================\n");
        printf("1. Calculadora (Soma, Subtracao, Multiplicacao, Divisao)\n");
        printf("2. Classificacao de Idade (Faixa Etaria)\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                // --- EXERCICIO 1: Calculadora ---
                char operacao;
                float num1, num2, resultado;

                printf("\n--- Calculadora ---\n");
                printf("Digite a operacao (+, -, *, /): ");
                scanf(" %c", &operacao);

                printf("Digite o primeiro numero: ");
                scanf("%f", &num1);

                printf("Digite o segundo numero: ");
                scanf("%f", &num2);

                switch (operacao) {
                    case '+':
                        resultado = num1 + num2;
                        printf("Resultado da Soma: %.2f\n", resultado);
                        break;
                    case '-':
                        resultado = num1 - num2;
                        printf("Resultado da Subtracao: %.2f\n", resultado);
                        break;
                    case '*':
                        resultado = num1 * num2;
                        printf("Resultado da Multiplicacao: %.2f\n", resultado);
                        break;
                    case '/':
                        if (num2 == 0) {
                            printf("Erro: Nao e possivel realizar divisao por zero.\n");
                        } else {
                            resultado = num1 / num2;
                            printf("Resultado da Divisao: %.2f\n", resultado);
                        }
                        break;
                    default:
                        printf("Opcao de operacao invalida!\n");
                        break;
                }
                break;
            }

            case 2: {
                // --- EXERCICIO 2: Classificacao de Idade ---
                int idade;

                printf("\n--- Classificacao de Idade ---\n");
                printf("Digite a idade da pessoa: ");
                scanf("%d", &idade);

                if (idade < 0) {
                    printf("Idade invalida! O valor nao pode ser negativo.\n");
                }
                else if (idade <= 11) {
                    printf("Categoria: Crianca\n");
                    printf("Valor do ingresso: Entrada gratuita\n");
                }
                else if (idade <= 17) {
                    printf("Categoria: Adolescente\n");
                    printf("Valor do ingresso: R$ 15.00\n");
                }
                else {
                    printf("Categoria: Adulto\n");
                    printf("Valor do ingresso: R$ 30.00\n");
                }
                break;
            }

            case 0:
                printf("\nEncerrando o programa. Ate logo!\n");
                break;

            default:
                printf("\nOpcao invalida no menu! Tente novamente.\n");
                break;
        }

    } while (opcao != 0);

    return 0;
}