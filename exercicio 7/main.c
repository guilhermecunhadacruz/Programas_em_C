#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int numero;

    printf("digite o número da tabuada: ");
    scanf("%i",&numero);

        for (int i=1; i<=10; i++)
            {
                printf("%i X %i = %i\n", numero,i,numero*i);
            }

        return 0;
}
