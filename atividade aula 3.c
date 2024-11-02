#include <stdio.h>

int main() {
    char nome[50];
    int idade;
    float nota_final;

    // Solicita ao usuário os dados
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua nota final: ");
    scanf("%f", &nota_final);

    // Exibe os dados formatados
    printf("\n--- Dados do Usuário ---\n");
    printf("Nome: %s", nome);
    printf("Idade: %d\n", idade);
    printf("Nota Final: %.2f\n", nota_final);

    // Espera o usuário pressionar uma tecla para fechar o programa
    printf("\nPressione qualquer tecla para fechar o programa...\n");
    getchar(); // Limpa o buffer de entrada
    getchar(); // Aguarda uma tecla

    return 0;
}
