/*Atividade proposta em questão foi que de acordo com os números digitado pelo usuário deve ser realizado a conta de uma resolução de uma raiz*/
/*Atividade realizada em sala no inicio do primeiro periodo e aprimorada com estudo*/
/*Autor: Guilherme Cunha da Cruz*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>//Biblioteca de Matemática
#include <locale.h>//biblioteca para colocar em acentuação (utf-8)

void limpa_tela(void);//identifica o sistema operacional e limpa a tela conforme o sistema

main()
{
    setlocale (LC_ALL, "");//antes de todo código colocar essa função
    float aux,cateto1,cateto2;//Serve para definir as váriaveis que vamos chamar


    printf("Digite o cateto 1: ");
    scanf("%f",&cateto1);
    printf("Digite o cateto 2: ");
    scanf("%f",&cateto2);

    aux=pow(cateto1, 2) + pow(cateto2, 2);//Aqui acontece a potenciação

    limpa_tela();//identifica o sistema operacional e limpa a tela conforme o sistema
    printf("========================================================\n\n");
    printf("\t\t\tResultado");
    printf("\n\n\t\tA hipotenusa é: %f",sqrt(aux));//Aqui ocorre a Resolução da raiz
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
// Se não for nenhum desses dois vai aparecer essa mensagem
#else
    #pragma message ("So não detectado!")
#endif
}
