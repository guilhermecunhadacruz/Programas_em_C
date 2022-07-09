#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int mes;

    printf("Digite o número do mês para descobrir quantos dias tem: ");
    scanf("%d", &mes);

    switch(mes)
    {
    case 1:
        printf("\n\n\nJaneiro tem 31 dias.\n");
        break;
    case 2:
        printf("\n\n\nFevereiro tem 28 dias.\n");
        break;
    case 3:
        printf("\n\n\nMarço tem 31 dias.\n");
        break;
    case 4:
        printf("\n\n\nAbril tem 30 dias.\n");
        break;
    case 5:
        printf("\n\n\nMaio tem 31 dias.\n");
        break;
    case 6:
        printf("\n\n\nJunho tem 30 dias.\n");
        break;
    case 7:
        printf("\n\n\nJulho tem 31 dias.\n");
        break;
    case 8:
        printf("\n\n\nAgosto tem 31 dias.\n");
        break;
    case 9:
        printf("\n\n\nSetembro tem 30 dias.\n");
        break;
    case 10:
        printf("\n\n\nOutubro tem 31 dias.\n");
        break;
    case 11:
        printf("\n\n\nNovembro tem 30 dias.\n");
        break;
    case 12:
        printf("\n\n\nDezembro tem 31 dias.\n");
        break;
    default:
        printf("\nNúmero do mês inválido!!");
        break;
    }
    return 0;
}
