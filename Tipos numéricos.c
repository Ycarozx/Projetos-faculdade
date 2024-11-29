#include <stdio.h>

int main(){

    int n1;
    int n2;
    int escolha;


    printf("Digite um número: \n");
    scanf("%d", &n1);
    printf("Digite outro número: \n");
    scanf("%d", &n2);

    printf("Escolha o seu operador: \n");
    printf("1:Soma\n");
    printf("2:Subtração\n");
    printf("3:Multiplicação\n");
    printf("4:Divisão\n");
    printf("Digite o número da sua escolha: \n");
    scanf("%d", &escolha);

    int ad = n1 + n2;
    int sub = n1 - n2;
    int mult = n1 * n2;
    float div = n1 / n2;


    switch (escolha)
{

        case 1:
            printf("a soma entre eles é:%d\n", ad);
            break;
        case 2:
            printf("a subtração entre eles é:%d\n", sub);
            break;
        case 3:
            printf("a multiplicação entre eles é:%d\n", mult);
            break;
        case 4:
            printf("a divisão entre eles é:%f\n", div);
            break;
    default:
        printf("Opção inválida\n");
    break;
}
    printf("Pressione qualquer tecla para fechar :)\n");
    getchar();
    getchar();

    return 0;

}