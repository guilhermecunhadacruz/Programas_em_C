/*Atividade proposta em quest�o foi que deveriamos classificar as notas de aluno e dar uma resposta de acordo com a classifica��o*/
/*Atividade realizada em sala no inicio do primeiro periodo e aprimorada com estudo*/
/*Autor: Guilherme Cunha da Cruz*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void limpa_tela(void);//identifica o sistema operacional e limpa a tela conforme o sistema

void layout_menu(void);//Aqui ele s� imprimi o layout de op��es do menu principal

void aviso(void);//Aqui ele vai dar um aviso para voltar o menu

void invalido(void);//caso a pessoa digite uma op��o inv�lida

void invalido_nota(void);//caso a pessoa digite uma NOTA inv�lida

void agradecimento(void);//AQUI FICA LOCALIZADO UMA MENSAGEM DE DESPEDIDA

void verificador(void);//Ele vai comparar a nota e verificar os crit�rios definidos para aprova��o

void criterio(void);//ele imprime o crit�rio de avalia��o


int main()
{
    setlocale(LC_ALL, "");
    int loop=1, opcao;

    while(loop)
    {
        limpa_tela();//limpa a tela
        layout_menu();//Aqui ele s� imprimi o layout de op��es do menu principal
        scanf("%d",&opcao);//vai ler qual n�mero a gente digitou e vai exibir o que est� dentro do case
        getchar();// Para pegar o enter

        switch(opcao)
        {
            case 1:
                limpa_tela();//limpa a tela
                verificador();//Ele vai comparar a nota e verificar os crit�rios definidos para aprova��o
                break;//Finalizar o case e volta ao menu

            case 2:
                limpa_tela();//limpa a tela
                criterio();//ele imprime o crit�rio de avalia��o
                break;//Finalizar o case e volta ao menu

            case 0:
                limpa_tela();//limpa a tela
                agradecimento();//AQUI FICA LOCALIZADO UMA MENSAGEM DE DESPEDIDA
                loop = 0;// para desativar o loop
                break; //Finalizar o case e sai do programa

            default:
                limpa_tela();//limpa a tela
                invalido();//Caso N�o selecione uma das op��es validas.
        }
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
// Se n�o for nenhum desses dois vai aparecer essa mensagem
#else
    #pragma message ("So n�o detectado!")
#endif
}

void layout_menu(void)//Aqui ele s� imprimi o layout de op��es de op��es do menu principal
{
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("||                                                  ||\n");
    printf("||         Sistema de verifica��o de nota           ||\n");
    printf("||                                                  ||\n");
    printf("||                                    vers�o 2.8.9  ||\n");
    printf("||                                                  ||\n");
    printf("||//////////////////////////////////////////////////||\n");
    printf("||                                                  ||\n");
    printf("||          Selecione a op��o desejada              ||\n");
    printf("||                                                  ||\n");
    printf("||     (1) - Verificar nota                         ||\n");
    printf("||     (2) - Imprimir crit�rio de avalia��o         ||\n");
    printf("||                                                  ||\n");
    printf("||                    [0] - Sair                    ||\n");
    printf("||                                                  ||\n");
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n\n\t\t\t");
}


void aviso(void)//Aqui ele vai dar um aviso para voltar o menu
{
    printf("\n\n\tPressione ENTER para voltar ao menu\n");
    getchar();
}

void invalido(void)//caso a pessoa digite uma op��o inv�lida
{
    printf("\n========================================================\n\n");
    printf("\n\n                  OP��O INV�LIDA\n\n\n");
    printf("\n========================================================\n\n");
    aviso();
}

void invalido_nota(void)//caso a pessoa digite uma NOTA inv�lida
{
    printf("\n========================================================\n\n");
    printf("\n\n                  NOTA INV�LIDA\n\n\n");
    printf("\n========================================================\n\n");
    aviso();
}

void agradecimento(void)//AQUI FICA LOCALIZADO UMA MENSAGEM DE DESPEDIDA
{
    printf("\n========================================================\n\n");
    printf("\n\n                  OBRIGADO POR UTILIZAR!\n\n\n");
    printf("\n========================================================\n\n");
}

void verificador(void)//Ele vai comparar a nota e verificar os crit�rios definidos para aprova��o
{
    int nota;

    printf("\n========================================================");
    printf("\n\n\n\t\tDIGITE SUA NOTA FINAL\n\n");
    printf("\n========================================================\n\n\t\t\t");
    scanf("%d", &nota);
    getchar();

    if (nota<70)
    {
        limpa_tela();//limpa a tela
        printf("\n========================================================");
        printf("\n\t\tReprovado!!!");
        printf("\n========================================================");
        aviso();//Aqui ele vai dar um aviso para voltar o menu
    }
    else if(nota<80)
    {
        limpa_tela();//limpa a tela
        printf("\n========================================================");
        printf("\n\t\tAprovado!!!");
        printf("\n========================================================");
        aviso();//Aqui ele vai dar um aviso para voltar o menu
    }
    else if(nota<90)
    {
        limpa_tela();//limpa a tela
        printf("\n========================================================");
        printf("\n\t\tAprovado, parab�ns!!!");
        printf("\n========================================================");
        aviso();//Aqui ele vai dar um aviso para voltar o menu
    }
    else if(nota<=100)
    {
        limpa_tela();//limpa a tela
        printf("\n========================================================");
        printf("\n\t\tAprovado, parab�ns!!!");
        printf("\n\t\t     Muito Bom!");
        printf("\n========================================================");
        aviso();//Aqui ele vai dar um aviso para voltar o menu
    }
    else if( nota <0 || nota>100)
    {
        limpa_tela();//limpa a tela
        invalido_nota();//caso a pessoa digite uma NOTA inv�lida
    }
}

void criterio(void)//ele imprime o crit�rio de avalia��o
{
    printf("\n========================================================\n\n");
    printf("- Notas menores que 70 | Reprovado !!!\n\n");
    printf("- Notas maiores que 70 e menores que 80 | Aprovado !!!\n\n");
    printf("- Notas maiores que 80 e menores que 90 | Aprovado, parab�ns !!!\n\n");
    printf("- Notas maiores que 90 e menores que 100 | Aprovado, parab�ns !!! Muito Bom!\n\n");
    printf("- Notas menores que 0 e maiores que 100 | Nota inv�lida!\n\n");
    printf("\n========================================================");
    aviso();
}
