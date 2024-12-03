#include <stdio.h>

int main(){

    int dinheiro;
    float desconto10 = 0.10;
    float desconto5 = 0.05;
    float valorfinal;

    printf("Digite o valor da compra: ");
    scanf("%d", &dinheiro);
    
    if (dinheiro >= 100)
    {
        valorfinal = dinheiro * (1 - desconto10);
        printf("voce pagara o valor de:%.2f\n", valorfinal);
    }
    else if (dinheiro > 50 && dinheiro < 100)
    {
        valorfinal = dinheiro * (1 - desconto5);
        printf("voce pagara o valor de:%.2f\n", valorfinal);
    }
    else
    {
        printf("voce nao possui descontos, vai pagar %d\n", dinheiro);

    }

    printf("pressione uma tecla para fechar.");
    getchar();
    getchar();

    return 0;
}