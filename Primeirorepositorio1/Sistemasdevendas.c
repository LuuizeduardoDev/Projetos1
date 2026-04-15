#include <stdio.h>
#include <string.h>

int main() {
    int codigo;
    char descricao[100];
    int quantidade;
    float valor_unitario, total, imposto = 0;
    char tipo;

    // Entrada de dados
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);

    getchar(); // limpar buffer

    printf("Digite a descricao do produto: ");
    fgets(descricao, 100, stdin);
    descricao[strcspn(descricao, "\n")] = 0;

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    printf("Digite o valor unitario: ");
    scanf("%f", &valor_unitario);

    printf("Tipo do produto (I = Importado / N = Nacional): ");
    scanf(" %c", &tipo);

    // Cálculo
    total = quantidade * valor_unitario;

    if (tipo == 'I' || tipo == 'i') {
        imposto = total * 0.10;
    }

    float total_final = total + imposto;

    // Saída
    printf("\n===== CUPOM FISCAL =====\n");
    printf("Codigo: %d\n", codigo);
    printf("Descricao: %s\n", descricao);
    printf("Quantidade: %d\n", quantidade);
    printf("Valor Unitario: R$ %.2f\n", valor_unitario);
    printf("Subtotal: R$ %.2f\n", total);

    if (imposto > 0) {
        printf("Imposto (Importado): R$ %.2f\n", imposto);
    }

    printf("Total a pagar: R$ %.2f\n", total_final);
    printf("========================\n");

    return 0;
}