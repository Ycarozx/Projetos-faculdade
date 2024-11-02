#include <stdio.h>

int main() {
    int numero, i;
    unsigned long long fatorial = 1;

    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Fatorial n?o existe para numeros negativos.\n");
    } else {
        for (i = 1; i <= numero; ++i) {
            fatorial *= i;
        }
        printf("O fatorial de %d e: %llu\n", numero, fatorial);
    }

    // Pausa o programa até pressionar uma tecla
    printf("Pressione qualquer tecla para fechar...");
    getchar();  // Para capturar o 'Enter' do scanf
    getchar();  // Aguarda outra tecla ser pressionada

    return 0;
}
