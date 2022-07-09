/*Atividade proposta em quest�o foi que de acordo com os n�meros digitado pelo usu�rio deve ser realizado a convers�o da temperatura*/
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
    float C, Aux_K, Aux_F;

    Aux_F= C*9/5+32;//calculo de fahrenheit
    Aux_K= C+273.15;//calculo de kelvin

    limpa_tela();
    printf("\n========================================================\n\n");
    printf("\n\t    CONVERSOR DE TEMPERATURA\n\n");
    printf("\n========================================================\n\n");
    printf("Digite a temperatura em Celsius: ");
    scanf("%f",&C);

    limpa_tela();
    printf("\n========================================================\n\n");
    printf("\n\t\t    Resultado\n\n");
    printf("\n========================================================\n\n");

    printf("\n%0.1f� celsius � igual a %0.2f� fahrenheit.\n", C, Aux_F);
    printf("\n%0.1f� celsius � igual a %0.2f kelvin.\n", C, Aux_K);

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
// Se n�o for nenhum desses dois vai aparecer essa mensagem
#else
    #pragma message ("So n�o detectado!")
#endif
}
