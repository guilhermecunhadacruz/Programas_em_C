/*Atividade proposta em quest�o foi que de acordo com os n�meros digitado pelo usu�rio deve ser realizado a conferencia para saber se o n�mero � impar ou par*/
/*Atividade realizada em sala no inicio do primeiro periodo e aprimorada com estudo*/
/*Autor: Guilherme Cunha da Cruz*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "");
    int numero;

    printf("\n\n\n\n                                               |IDENTIFICADOR DE PAR E IMPAR|\n\n\n\n");

    printf("           Digite um n�mero: ");
    scanf("%i",&numero);

    if(numero%2 == 0)
    {
        printf("\n\n                                                    O N�MERO %i � PAR!!", numero);
    }
    else
    {
        printf("\n\n                                                    O N�MERO %i � IMPAR!!", numero);
    }

    return 0;
}
