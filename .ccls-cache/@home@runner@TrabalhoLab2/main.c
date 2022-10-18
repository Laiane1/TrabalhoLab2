#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
 

int jogador, computador, pedra, papel, tesoura, saida=4;

  
  while(saida==4){
  printf("Escolha uma opção:\n 1- pedra 2- papel 3- tesoura\n ");
  scanf("%d", &jogador);
  
    if (jogador == computador)
        printf("\nEmpate\n");
  
 
    if (jogador == 1 && computador == 2){
        printf("\nVocê perdeu\n");
      }

      else if(jogador == 2 && computador == 1){
        printf("\nVocê venceu\n");
      }

  if(jogador == 1 && computador == 3){
    printf("\nVocê venceu\n");
  }

  else if(jogador == 3 && computador == 1){
    printf("\nVocê perdeu\n");
  }

  if(jogador == 2 && computador == 3){
    printf("\nVocê perdeu\n");
  }

  else if(jogador == 3 && computador == 2){
    printf("\nVocê ganhou\n");
  }
 
          
    srand(time(NULL));
 
    computador = rand()%3+1;
  printf("Escolha do computador: %d", computador);

   if (jogador == computador)
        printf("\nEmpate\n");
  
    if (jogador == 1 && computador == 2){
        printf("\nVocê perdeu\n");
      }

      else if(jogador == 2 && computador == 1){
        printf("\nVocê venceu\n");
      }

  if(jogador == 1 && computador == 3){
    printf("\nVocê venceu\n");
  }

  else if(jogador == 3 && computador == 1){
    printf("\nVocê perdeu\n");
  }

  if(jogador == 2 && computador == 3){
    printf("\nVocê perdeu\n");
  }

  else if(jogador == 3 && computador == 2){
    printf("\nVocê ganhou\n");
  }
    printf("Deseja iniciar uma nova partida? Digite 4 para sim e qualquer outro número para não: ");
    scanf("%d", &saida);

    
    }
    return 0;
}