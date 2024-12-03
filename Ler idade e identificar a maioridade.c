#include <stdio.h>

int main(){

int idade;

    printf("Qual sua idade?: ");
    scanf("%d", &idade);

    if (idade >= 18 && idade < 60)
    {
        printf("Voce e maior de idade.\n");

    }
    else if (idade < 18)
    {

        printf("Voce e menor de idade.\n");

    }
    else if (idade >= 60)
    {

        printf("Voce e idoso\n");

    }
    printf("Pressione Enter para fechar.");
    getchar();

    getchar();

    return 0;

}