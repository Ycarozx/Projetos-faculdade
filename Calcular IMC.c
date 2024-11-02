#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite o peso (em kg): ");
    scanf("%f", &peso);

    printf("Digite a altura com . (em metros): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("O IMC E: %.2f\n", imc);

    // Pausa o programa até pressionar uma tecla
    printf("Pressione qualquer tecla para fechar...");
    getchar();  // Para capturar o 'Enter' do scanf
    getchar();  // Aguarda outra tecla ser pressionada

    return 0;
}
