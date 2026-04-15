#include <stdio.h>

int main() {
    float A, B, resultado;
    int operacao;

    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");

    printf("Escolha: ");
    scanf("%d", &operacao);

    printf("Digite o primeiro numero: ");
    scanf("%f", &A);

    printf("Digite o segundo numero: ");
    scanf("%f", &B);

    if (operacao == 1)
        resultado = A + B;
    else if (operacao == 2)
        resultado = A - B;
    else if (operacao == 3)
        resultado = A * B;
    else if (operacao == 4)
        resultado = A / B;
    else {
        printf("Opcao invalida\n");
        return 0;
    }

    printf("Resultado = %.2f\n", resultado);

    return 0;
}