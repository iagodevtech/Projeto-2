//exercício 2803 NOME: JÔNATHA MENDONÇA DOS SANTOS RA:534595 

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <dos.h>

int main()
{
 int cpu;
 char jogador;
 char nome[20];
 char desejaJogarDeNovo='1';
 
 printf("\n\n** BEM VINDO AO JOKENPO **"); 
 printf("\n\n   Regras:\n 1. Vence o melhor de 3 jogadas!\n 2. Pedra ganha de tesoura!\n 3. Papel vence de  pedra!\n 4. Tesoura vence de papel\n");
 printf("\n\nDigite seu nome:");
 scanf("%s",nome);
    
 system("cls");
 
while(desejaJogarDeNovo=='1')
{
  int pontos_jogador=0, pontos_cpu=0;//toda vez q for jogar de novo zera os pontos
  
 while( (pontos_jogador + pontos_cpu) < 3)
 {
     
    system("cls");   
    printf ("\n-------------------------JokenPo---------------------------\n\n");
    printf ("                   %d %s X CPU %d\n", pontos_jogador,nome, pontos_cpu);
    printf ("\n-----------------------------------------------------------\n");
    printf ("0. Pedra\n");
    printf ("1. Papel\n");
    printf ("2. Tesoura\n");
    jogador = getch();
    srand(time(NULL));
    cpu = rand() % 3; //gera um numero aleatorio
    switch(cpu)
    {
        case 0: printf ("\n\nCPU = Pedra"); break;
        case 1: printf ("\n\nCPU = Papel"); break;
        case 2: printf ("\n\nCPU = Tesoura"); 
    }
     switch(jogador)
    {
        case '0': printf ("\n%s = Pedra\n",nome); break;
        case '1': printf ("\n%s = Papel\n",nome); break;
        case '2': printf ("\n%s = Tesoura\n",nome); break;
    }
    
    if(jogador > '2')
    {
               printf("\n\n     Você escolheu uma opção invalida, escolha novamente!\n\n");
                  
                    switch(jogador)
    {
        case '0': printf ("\n%s = Pedra\n",nome); break;
        case '1': printf ("\n%s = Papel\n",nome); break;
        case '2': printf ("\n%s = Tesoura\n",nome); break;
    }
    
    }
    else
    {
    
    if ((jogador == '0' && cpu==2) || (jogador == '1' && cpu == 0) || (jogador == '2' && cpu == 1)) //verifica se o jogador venceu
    {
            printf("\n\n     %s venceu!\n\n", nome);
            printf ("\n\n   Placa atualiza na proxima rodada, aperte qualquer tecla para continuar jogando ou x, alt+f4 para fechar!\n\n");
            pontos_jogador++;
    }
    else
    {
		if ((jogador == '0' && cpu == 0) || (jogador == '1' && cpu == 1) || (jogador == '2' && cpu == 2)) //verifica se houve empate
           {
           printf ("\n\n    Empate!\n\n");
           printf ("\n\n   Placa atualiza na proxima rodada, aperte qualquer tecla para continuar jogando ou x, alt+f4 para fechar!\n\n");
            pontos_jogador++;
            pontos_cpu++;
            }
        else
        {
            printf ("\n\n   CPU venceu!\n\n");
             printf ("\n\n   Placa atualiza na proxima rodada, aperte qualquer tecla para continuar jogando ou x, alt+f4 para fechar!\n\n");
            pontos_cpu++;
        }
    }
}
  getch();
 }
    system("cls");   //LIMPA A TELA, EXIBE A PONTUACAO ATUALIZADA E O VENCEDOR
    printf ("\n-------------------------JokenPo---------------------------\n\n");
    printf ("                   %d %s X CPU %d\n", pontos_jogador,nome, pontos_cpu);
    printf ("\n-----------------------------------------------------------\n");
  if(pontos_jogador>pontos_cpu)
     printf("\n\n     %s venceu a melhor de 3!",nome);
  else
     printf("\n\n     CPU venceu a melhor de 3!");
     
     printf("\n\nDeseja jogar de novo?");
     printf("\n\n1 - SIM\n2 - NAO");
     desejaJogarDeNovo = getch();
     
 }
}


//exercício 2803 NOME: JÔNATHA MENDONÇA DOS SANTOS RA: 534595 
