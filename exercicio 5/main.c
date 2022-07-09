/*Atividade proposta em questão foi que de acordo com os números digitado pelo usuário deve ser realizado a conferencia para saber se o número é impar ou par*/
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

    printf("           Digite um número: ");
    scanf("%i",&numero);

    if(numero%2 == 0)
    {
        printf("\n\n                                                    O NÚMERO %i É PAR!!", numero);
    }
    else
    {
        printf("\n\n                                                    O NÚMERO %i É IMPAR!!", numero);
    }

    return 0;
}
