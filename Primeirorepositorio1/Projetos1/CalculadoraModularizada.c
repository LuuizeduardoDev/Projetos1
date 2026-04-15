#include <stdio.h>
#include <stdlib.h>

int valor1, valor2, resultado, operacao;

void Entrada() {
    printf("Digite o primeiro valor\n");
    scanf("%i", &valor1);

    printf("Digite o segundo valor\n");
    scanf("%i", &valor2);
}

void Somar() {
    resultado = valor1 + valor2;
}

void Subtrair() {
    resultado = valor1 - valor2;
}

void Multiplicar() {
    resultado = valor1 * valor2;
}

void Dividir() {
    resultado = valor1 / valor2;
}

void Saida() {
    printf("O resultado da operacao eh: %i\n", resultado);
}

void MenuOperacao() {
    printf("\n====== CALCULADORA SIMPLES ======\n");
    printf("1 - Somar    2 - Subtrair\n");
    printf("3 - Multiplicar  4 - Dividir\n");
    printf("Digite a operacao desejada ou 0 p/ sair\n");
    scanf("%i", &operacao);
}

int main() {
    MenuOperacao();

    if (operacao == 0) return 0;

    Entrada();

    if (operacao == 1) Somar();
    else if (operacao == 2) Subtrair();
    else if (operacao == 3) Multiplicar();
    else if (operacao == 4) Dividir();
    else {
        printf("Opcao invalida!\n");
        return 0;
    }

    Saida();

    return 0;
}