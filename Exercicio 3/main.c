/*Atividade proposta em questão foi que de acordo com os números digitado pelo usuário deve ser realizado a conversão de horas para segundo e de minutos para segundos*/
/*Atividade realizada em sala no inicio do primeiro periodo e aprimorada com estudo*/
/*Autor: Guilherme Cunha da Cruz*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void limpa_tela(void);//identifica o sistema operacional e limpa a tela conforme o sistema

int main()
{
    setlocale(LC_ALL, "");
    int horas, minutos, segundos, calculo_h, calculo_m, resultado;


    printf("\n\t\tTransformador de tempo em segundos\n");
    printf("\n\nDigite as horas: ");
    scanf("%i",&horas);
    getchar();

    printf("\nDigite os minutos: ",&minutos);
    scanf("%i",&minutos);
    getchar();

    printf("\nDigite os segundos: ",&segundos);
    scanf("%i",&segundos,"\n");
    getchar();

    limpa_tela();//identifica o sistema operacional e limpa a tela conforme o sistema
    printf("\n========================================================\n\n");
    printf("\n\t\t      Resultado\n\n");
    printf("\n========================================================\n\n");

    calculo_h= horas*3600;//conversor de horas em segundos
    calculo_m= minutos*60;//conversor de minutos em segundos
    resultado= calculo_h + calculo_m + segundos;//soma de todos

    printf("\t%i horas, %i minutos e %i segundos\n\n",horas, minutos, segundos);
    printf("\t   É igual a: %i segundos.\n", resultado);

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
