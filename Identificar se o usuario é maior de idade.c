#include <stdio.h>

int main(){

int idade;

printf("qual sua idade?: ");
scanf("%d", &idade);

if (idade >= 18)
{
    printf("Voce e maior de idade!");
}
else
{

    printf("Voce e menor de idade :( )");

}

printf("pressione Enter para fechar o programa");

getchar();
getchar();

return 0;
}