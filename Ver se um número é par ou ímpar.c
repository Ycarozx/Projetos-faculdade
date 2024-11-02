#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int numero;

    printf("Digite um n�mero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O n�mero � par.\n");
    } else {
        printf("O n�mero � �mpar.\n");
    }

    // Pausa o programa at� pressionar uma tecla
    printf("Pressione qualquer tecla para fechar...");
    getchar();  // Para capturar o 'Enter' do scanf
    getchar();  // Aguarda outra tecla ser pressionada

    return 0;
}
