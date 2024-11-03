#include <stdio.h>

int main() {

int numero1;

printf("digite um numero\n: ");
scanf("%d", &numero1);

if (numero1 % 2 == 0){


    printf("Este numero e par\n.");

}
else{

    printf("Este numero e impar\n");

}
printf("pressione Enter para fechar o programa");
getchar();
getchar();


    return 0;
}