#include <stdio.h>

int main(){

float dinheiro;
int lazer;

printf("Escolha uma opcao de lazer:\n");
printf("1 - Esportes\n");
printf("2 - Cultura\n");
printf("3 - Natureza\n");
printf("Escolha o lazer desejado: ");
scanf("%d", &lazer);

printf("Quanto voce possui no banco?: ");
scanf("%f", &dinheiro);


switch (lazer)
{
case 1:
    if (dinheiro < 10)
    {
    printf("Voce pode fazer uma caminhada na praca.\n");
    }
    else if (dinheiro >= 10 && dinheiro <= 30)
    {
    printf("Voce pode jogar um jogo de futebol na quadra local.\n");
    }
    else if (dinheiro > 30)
    {
    printf("Voce pode fazer sua inscrição no torneio de volei.\n");
    }
    break;
case 2:
    if (dinheiro < 10)
    {
    printf("Voce pode visitar a biblioteca municipal.\n");
    }
    else if (dinheiro >= 10 && dinheiro <= 30)
    {
    printf("Voce pode ir ao cinema local.\n");
    }
    else if (dinheiro > 30)
    {
    printf("Voce pode ir ao espetaculo de teatro da cidade.\n");
    }
    break;
case 3:
    if (dinheiro < 10)
    {
    printf("Voce pode visitar o parque municipal.\n");
    }
    else if (dinheiro >= 10 && dinheiro <= 30)
    {
    printf("Voce pode fazer um piquinique na cachoeira.\n");    
    }
    else if (dinheiro > 30)
    {
    printf("Voce pode ir a um passeio guiado no sitio ecologico.\n");
    }
    break;
default:
    printf("Opcao de lazer invalida.\n");
    break;
}

    printf("Pressione Enter para fechar o programa.");
    getchar();
    getchar();
    return 0;
}