#include <stdio.h>

int main(){

    int n1;
    int n2;
    int escolha;


    printf("Digite um n�mero: \n");
    scanf("%d", &n1);
    printf("Digite outro n�mero: \n");
    scanf("%d", &n2);

    printf("Escolha o seu operador: \n");
    printf("1:Soma\n");
    printf("2:Subtra��o\n");
    printf("3:Multiplica��o\n");
    printf("4:Divis�o\n");
    printf("Digite o n�mero da sua escolha: \n");
    scanf("%d", &escolha);

    int ad = n1 + n2;
    int sub = n1 - n2;
    int mult = n1 * n2;
    float div = n1 / n2;


    switch (escolha)
{

        case 1:
            printf("a soma entre eles �:%d\n", ad);
            break;
        case 2:
            printf("a subtra��o entre eles �:%d\n", sub);
            break;
        case 3:
            printf("a multiplica��o entre eles �:%d\n", mult);
            break;
        case 4:
            printf("a divis�o entre eles �:%f\n", div);
            break;
    default:
        printf("Op��o inv�lida\n");
    break;
}
    printf("Pressione qualquer tecla para fechar :)\n");
    getchar();
    getchar();

    return 0;

}