#include <stdio.h>
#include <string.h>

int lerfloat(float *num) {
int status;
printf("digite um numero: ");
status = scanf("%f", num);
while(getchar() != '\n');
return status;
}

int main()  {
    float numero1, numero2;

while (lerfloat(&numero1) != 1)
{
    printf("insira um numero valido\n");
}

while (lerfloat(&numero2) != 1)

{
    printf("insira um numero valido\n");

}

if  (numero1 > numero2)
{

printf("%.2f é o maior\n", numero1);

}  

else if (numero2 > numero1){

    printf("%.2f o maior\n", numero2);
}
 else 
 {
    printf("os numeros são iguais\n");
}

printf("Pressione Enter para sair");
getchar();
getchar();

return 0;
}