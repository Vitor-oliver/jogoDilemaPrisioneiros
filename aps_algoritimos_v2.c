//Nomes: Bruno Garcia, Joao Vitor e Vitor Oliveira.
//Ra: 21170224, 21158561 e 21155660.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{

    int jogador, computador, jogadas = 0, opcao1 = 1, opcao2 = 1, trair = 0, n;
    float  tt = 0, tc = 0, cc = 0;

    while(opcao1 != 7)
    {
        opcao2 = 0;
        printf("Deigite uma opcao:\n1-Nao-iterado\n2-Olho por olho\n3-Olho por dois Olhos\n4-Provador ingenuo\n5-Retaliador Premanente\n6-Resultados\n7-Sair\n");
        scanf("%d", &opcao1);

        while(opcao1 < 1 || opcao1 > 6)
        {
            printf("\nValor invalido");
            printf("Deigite uma opcao:\n1-Nao-iterado\n2-Olho por olho\n3-Olho por dois Olhos\n4-Provador ingenuo\n5-Retaliador Premanente\n6-Resultados\n7-Sair\n");
            scanf("%d", &opcao1);
        }

        if(opcao1 == 1)
        {
            printf("A opcao escolhida foi nao-iterado");
            printf("\nVamos comecar");
            while(opcao2 != 2)
            {
                srand(time(NULL));
                computador = 1 + rand() % 2;
                printf("\nVoce quer trair ou cooperar(lembrando que 1 eh utilizado para trair e 2 para cooperar): ");
                scanf("%d", &jogador);

                while(jogador <= 0 || jogador >= 3)
                {
                    printf("\nValor invalido\n");
                    printf("\nVoce quer trair ou cooperar(lembrando que 1 eh utilizado para trair e 2 para cooperar): ");
                    scanf("%d", &jogador);
                }

                if(jogador == 1 && computador ==1)
                {
                    tt++;
                    jogadas++;
                }
                else if(jogador == 2 && computador ==2)
                {
                    cc++;
                    jogadas++;
                }
                else if(jogador == 1 && computador ==2 || jogador == 2 && computador ==1)
                {
                    tc++;
                    jogadas++;
                }
                else
                {
                    printf("\nValor invalido");
                }

                printf("o computador escolheu: %d, e voce escolheu: %d\n", computador, jogador);
                printf("deseja continuar nesse modo(digite 1 para sim e 2 para nao):");
                scanf("%d", &opcao2);

                while(opcao2 < 1 || opcao2 > 2)
                {
                    printf("\nValor invalido");
                    printf("deseja continuar nesse modo(digite 1 para sim e 2 para nao):");
                    scanf("%d", &opcao2);
                }
            }

        }

        else if(opcao1 == 2)
        {
            srand(time(NULL));
            computador = 1 + rand() % 2;
            printf("A opcao escolhida foi olho por olho");
            printf("\nVamos comecar");
            while(opcao2 != 2)
            {
                if(jogadas > 1)
                {
                    computador = jogador;
                }
                printf("\nVoce quer trair ou cooperar(lembrando que 1 eh utilizado para trair e 2 para cooperar): ");
                scanf("%d", &jogador);

                while(jogador <= 0 || jogador >= 3)
                {
                    printf("\nValor invalido\n");
                    printf("\nVoce quer trair ou cooperar(lembrando que 1 eh utilizado para trair e 2 para cooperar): ");
                    scanf("%d", &jogador);
                }

                if(jogador == 1 && computador ==1)
                {
                    tt++;
                    jogadas++;
                }
                else if(jogador == 2 && computador ==2)
                {
                    cc++;
                    jogadas++;
                }
                else if(jogador == 1 && computador ==2 || jogador == 2 && computador ==1)
                {
                    tc++;
                    jogadas++;
                }
                else
                {
                    printf("\nValor invalido");
                }

                printf("o computador escolheu: %d, e voce escolheu: %d\n", computador, jogador);
                printf("deseja continuar nesse modo(digite 1 para sim e 2 para nao):");
                scanf("%d", &opcao2);

                while(opcao2 < 1 || opcao2 > 2)
                {
                    printf("\nValor invalido");
                    printf("deseja continuar nesse modo(digite 1 para sim e 2 para nao):");
                    scanf("%d", &opcao2);
                }
            }

        }

        else if(opcao1 == 3)
        {
            trair = 0;
            printf("A opcao escolhida foi olho por dois olhos");
            printf("\nVamos comecar");
            while(opcao2 != 2)
            {
                if(trair >= 2)
                {
                    computador = 1;
                }
                else
                {
                    computador = 2;
                }
                printf("\nVoce quer trair ou cooperar(lembrando que 1 eh utilizado para trair e 2 para cooperar): ");
                scanf("%d", &jogador);

                while(jogador <= 0 || jogador >= 3)
                {
                    printf("\nValor invalido\n");
                    printf("\nVoce quer trair ou cooperar(lembrando que 1 eh utilizado para trair e 2 para cooperar): ");
                    scanf("%d", &jogador);
                }


                if(jogador == 1 && computador ==1)
                {
                    tt++;
                    trair++;
                    jogadas++;
                }
                else if(jogador == 2 && computador ==2)
                {
                    cc++;
                    jogadas++;
                }
                else if(jogador == 1 && computador ==2)
                {
                    tc++;
                    trair++;
                    jogadas++;
                }
                else if(jogador == 2 && computador ==1)
                {
                    tc++;
                    jogadas++;
                }
                else
                {
                    printf("\nValor invalido");
                }



                printf("o computador escolheu: %d, e voce escolheu: %d\n", computador, jogador);
                printf("deseja continuar nesse modo(digite 1 para sim e 2 para nao):");
                scanf("%d", &opcao2);

                while(opcao2 < 1 || opcao2 > 2)
                {
                    printf("\nValor invalido");
                    printf("deseja continuar nesse modo(digite 1 para sim e 2 para nao):");
                    scanf("%d", &opcao2);
                }
            }


        }

        else if(opcao1 == 4)
        {
            printf("A opcao escolhida foi provador ingenuo");
            printf("\nVamos comecar");
            while(opcao2 != 2)
            {
                printf("%d, %d", computador, jogador);
                n = 1 + rand() % jogadas;
                if(jogador == 2)
                {
                    if(jogadas == n)
                    {
                        computador = 1;
                    }
                    else
                    {
                        computador = jogador;
                    }
                }
                else
                {
                    computador = jogador;
                }
                printf("\nVoce quer trair ou cooperar(lembrando que 1 eh utilizado para trair e 2 para cooperar): ");
                scanf("%d", &jogador);

                while(jogador <= 0 || jogador >= 3)
                {
                    printf("\nValor invalido\n");
                    printf("\nVoce quer trair ou cooperar(lembrando que 1 eh utilizado para trair e 2 para cooperar): ");
                    scanf("%d", &jogador);
                }


                if(jogador == 1 && computador ==1)
                {
                    tt++;
                    jogadas++;
                }
                else if(jogador == 2 && computador ==2)
                {
                    cc++;
                    jogadas++;
                }
                else if(jogador == 1 && computador ==2 || jogador == 2 && computador ==1)
                {
                    tc++;
                    jogadas++;
                }
                else
                {
                    printf("\nValor invalido");
                }
                printf("o computador escolheu: %d, e voce escolheu: %d\n", computador, jogador);
                printf("deseja continuar nesse modo(digite 1 para sim e 2 para nao):");
                scanf("%d", &opcao2);

                while(opcao2 < 1 || opcao2 > 2)
                {
                    printf("\nValor invalido");
                    printf("deseja continuar nesse modo(digite 1 para sim e 2 para nao):");
                    scanf("%d", &opcao2);
                }

            }

        }

        else if(opcao1 == 5)
        {
            trair = 0;
            printf("A opcao escolhida foi Retaliador permanente");
            printf("\nVamos comecar");
            while(opcao2 != 2)
            {
                if(trair > 0)
                {
                    computador = 1;
                }
                else
                {
                    computador = 2;
                }
                printf("\nVoce quer trair ou cooperar(lembrando que 1 eh utilizado para trair e 2 para cooperar): ");
                scanf("%d", &jogador);

                while(jogador <= 0 || jogador >= 3)
                {
                    printf("\nValor invalido\n");
                    printf("\nVoce quer trair ou cooperar(lembrando que 1 eh utilizado para trair e 2 para cooperar): ");
                    scanf("%d", &jogador);
                }

                if(jogador == 1 && computador ==1)
                {
                    tt++;
                    trair++;
                    jogadas++;
                }
                else if(jogador == 2 && computador ==2)
                {
                    cc++;
                    jogadas++;
                }
                else if(jogador == 1 && computador ==2)
                {
                    tc++;
                    trair++;
                    jogadas++;
                }
                else if(jogador == 2 && computador ==1)
                {
                    tc++;
                    jogadas++;
                }
                else
                {
                    printf("\nValor invalido");
                }
                printf("o computador escolheu: %d, e voce escolheu: %d\n", computador, jogador);
                printf("deseja continuar nesse modo(digite 1 para sim e 2 para nao):");
                scanf("%d", &opcao2);

                while(opcao2 < 1 || opcao2 > 2)
                {
                    printf("\nValor invalido");
                    printf("deseja continuar nesse modo(digite 1 para sim e 2 para nao):");
                    scanf("%d", &opcao2);
                }
            }
        }

        else if(opcao1 == 6)
        {
            printf("\nResultados: \n");
            tt = (tt*100.0)/jogadas;
            tc = (tc*100.0)/jogadas;
            cc = (cc*100.0)/jogadas;
            printf("\nOs resultados foram:\nTotal de partidas: %d\nTrair X Trair: %.2f \nTrair X Cooperar: %.2f\nCooperar X Cooperar: %.2f", jogadas, tt, tc, cc);
        }

        else if(opcao1 == 7)
        {
            printf("Saindo...\n");
        }

        else
        {
            printf("\nValor invalido\n");
        }

    }

    tt = (tt*100.0)/jogadas;
    tc = (tc*100.0)/jogadas;
    cc = (cc*100.0)/jogadas;
    printf("\nOs resultados foram:\nTotal de partidas: %d\nTrair X Trair: %.2f \nTrair X Cooperar: %.2f\nCooperar X Cooperar: %.2f", jogadas, tt, tc, cc);

    return 0;
}
