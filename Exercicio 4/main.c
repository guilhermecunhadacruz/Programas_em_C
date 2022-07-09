/*Atividade proposta em questão foi que de acordo com os números digitado pelo usuário deve ser realizado a verificação para descobrir qual número é maior*/
/*Atividade realizada em sala no inicio do primeiro periodo e aprimorada com estudo*/
/*Autor: Guilherme Cunha da Cruz*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void limpa_tela(void);//identifica o sistema operacional e limpa a tela conforme o sistema

void comparar(int Primeiro_n, int Segundo_n);

int main()
{
    setlocale(LC_ALL, "");
    int Primeiro_n, Segundo_n;

    printf("\n\n\t\t     COMPARADOR DE NÚMEROS\n\n");
    printf("\n\tDigite 3 números para descobrir qual é o maior\n");

    printf("\n\nDigite o primeiro número: ");
    scanf("%i", &Primeiro_n);

    printf("\nDigite o segundo número: ");
    scanf("%i", &Segundo_n);

    limpa_tela();
    comparar(Primeiro_n, Segundo_n);

    return 0;
}

void limpa_tela(void)//identifica o sistema operacional e limpa a tela conforme o sistema
{
// Limpa tela para sys windows
#ifdef _WIN32
    system("cls");
// Limpa tela para sys linux e apple
#elif defined __linux__ || defined __APPLE__
    system("clear");
// Se não for nenhum desses dois vai aparecer essa mensagem
#else
    #pragma message ("So não detectado!")
#endif
}

void comparar(int Primeiro_n, int Segundo_n)
{

if(Primeiro_n != Segundo_n)
    {
        if (Primeiro_n > Segundo_n)
        {
            printf("\nResultado: %i é maior que %i\n", Primeiro_n, Segundo_n);
        }
        else
        {
            printf("\nResultado: %i é maior que %i\n", Segundo_n, Primeiro_n);
        }
    }
    else
    {
     printf("\n\nOs dois números são iguais");
    }
}
