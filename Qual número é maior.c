#include <stdio.h>

int main(){

int n1;
int n2;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    printf("Digite outro numero: ");
    scanf("%d", &n2);

    if (n1 > n2)
    {
        printf("O numero %d e maior\n", n1);
    }
    else if (n1 == n2)

    {
        printf("Os numeros sao iguais\n");
    }
    else
    {
        printf("O numero %d e maior\n", n2);
    }

    printf("pressione alguma tecla para fechar\n");
    getchar();
    getchar();

    return 0;
}