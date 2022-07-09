/*Atividade proposta em quest�o foi que de acordo com os n�meros digitado pelo usu�rio deve ser realizado a conta de uma resolu��o de uma raiz*/
/*Atividade realizada em sala no inicio do primeiro periodo e aprimorada com estudo*/
/*Autor: Guilherme Cunha da Cruz*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>//Biblioteca de Matem�tica
#include <locale.h>//biblioteca para colocar em acentua��o (utf-8)

void limpa_tela(void);//identifica o sistema operacional e limpa a tela conforme o sistema

main()
{
    setlocale (LC_ALL, "");//antes de todo c�digo colocar essa fun��o
    float aux,cateto1,cateto2;//Serve para definir as v�riaveis que vamos chamar


    printf("Digite o cateto 1: ");
    scanf("%f",&cateto1);
    printf("Digite o cateto 2: ");
    scanf("%f",&cateto2);

    aux=pow(cateto1, 2) + pow(cateto2, 2);//Aqui acontece a potencia��o

    limpa_tela();//identifica o sistema operacional e limpa a tela conforme o sistema
    printf("========================================================\n\n");
    printf("\t\t\tResultado");
    printf("\n\n\t\tA hipotenusa �: %f",sqrt(aux));//Aqui ocorre a Resolu��o da raiz
    printf("\n\n========================================================");

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
