#include <stdio.h>
#include <string.h>

int main() {

char nome[50];
int idade;
float notafinal;

printf("Qual seu nome: ");
fgets(nome, 50, stdin);

printf("Qual sua idade: ");
scanf("%d", &idade);

printf("Qual sua nota final: ");
scanf("%f", &notafinal);

getchar();

printf("\n--- Dados do Usuário ---\n");
printf("Nome: %s", nome);
printf("Idade: %d\n", idade);
printf("Nota Final: %.2f\n", notafinal);

printf("Pressione qualquer tecla para fechar o programa...");

getchar();
getchar();

return 0;
}
