#include <stdio.h>
#include <stdlib.h>
#include <math.h>>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int base, expoente, potencia;

    printf("Digite a base da potencia��o: ");
    scanf("%d", &base);

    printf("Digite o expoente da potencia��o: ");
    scanf("%d", &expoente);

    potencia = pow(base, expoente);

    printf("%d", potencia);

    return 0;

}
