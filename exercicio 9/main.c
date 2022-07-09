/*Atividade proposta em questão foi que de acordo com a letra digitada pelo usuário deve se dar uma resposta de acordo com a classificação*/
/*Classificação em questão foi que com a letra A escrevesse Amora, letra B - Bolo e letra C - Casa*/
/*Atividade realizada em sala no inicio do primeiro periodo e aprimorada com estudo*/
/*Autor: Guilherme Cunha da Cruz*/

#include <stdio.h>
#include <stdlib.h>

void limpa_tela(void);//identifica o sistema operacional e limpa a tela conforme o sistema

int main()
{
///////////////////////////////////////////////////////////Front-end/////////////////////////////////////////////////////////////////////////////
    char c;
    printf("\t\tDigite uma letra");
    printf("\n========================================================\n\n");
    scanf("%C", &c);
    printf("\n========================================================\n\n");
    limpa_tela();//identifica o sistema operacional e limpa a tela conforme o sistema
    printf("\n========================================================\n\n");
    printf("\n\t\t    Carregando...\n\n");
    printf("\n========================================================\n\n");
///////////////////////////////////////////////////////////Back-end/////////////////////////////////////////////////////////////////////////////
        switch(c)
        {
        case 'a':
        case 'A':
            printf("\n========================================================\n\n");
            printf("\t\t\tAmora\n");
            printf("\n========================================================\n\n");
            break;
        case 'b':
        case 'B':
            printf("\n========================================================\n\n");
            printf("\t\t\tBolo\n");
            printf("\n========================================================\n\n");
            break;
        case 'c':
        case 'C':
            printf("\n========================================================\n\n");
            printf("\t\t\tCasa\n");
            printf("\n========================================================\n\n");
            break;

        default :
            printf("Valor Incorreto!!\n\nTente Outra Vez!!");
            break;
//////////////////////////////////////////////////////////////END//////////////////////////////////////////////////////////////////////////////
        }
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
