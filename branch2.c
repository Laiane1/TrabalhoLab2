#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  int jogador, computador, saida = 6;

  while (saida == 6) {
    printf("\nEscolha uma opção:\n 1- pedra 2- papel 3- tesoura  4- lagarto 5- "
           "spock\n ");
    scanf("%d", &jogador);

    if (jogador == computador)
      printf("\n");

    if (jogador == 1 && computador == 2) {
      printf("\n");
    }

    else if (jogador == 2 && computador == 1) {
      printf("\n");
    }

    if (jogador == 1 && computador == 3) {
      printf("\n");
    }

    else if (jogador == 3 && computador == 1) {
      printf("\n");
    }

    if (jogador == 2 && computador == 3) {
      printf("\n");
    }

    else if (jogador == 3 && computador == 2) {
      printf("\n");

      if (jogador == 1 && computador == 4) {
        printf("\n");
      }

      else if (jogador == 4 && computador == 1) {
        printf("\n");
      }

      if (jogador == 4 && computador == 5) {
        printf("\n");
      }

      else if (jogador == 5 && computador == 4) {
        printf("\n");
      }

      if (jogador == 5 && computador == 3) {
        printf("\n");
      }

      else if (jogador == 3 && computador == 5) {
        printf("\n");
      }

      if (jogador == 3 && computador == 4) {
        printf("\n");
      }

      else if (jogador == 4 && computador == 3) {
        printf("\n");
      }

      if (jogador == 4 && computador == 2) {
        printf("\n");
      }

      else if (jogador == 2 && computador == 4) {
        printf("\n");
      }

      if (jogador == 2 && computador == 5) {
        printf("\n");
      }

      else if (jogador == 5 && computador == 2) {
        printf("\n");
      }

      if (jogador == 5 && computador == 1) {
        printf("\n");
      }

      else if (jogador == 1 && computador == 5) {
        printf("\n");
      }
    }

    srand(time(NULL));

    computador = rand() % 5 + 1;
    printf("\nEscolha do computador: %d\n", computador);

    if (jogador == computador)
      printf("\nEmpate\n");

    if (jogador == 1 && computador == 2) {
      printf("\nVocê perdeu\n");
    }

    else if (jogador == 2 && computador == 1) {
      printf("\nVocê venceu\n");
    }

    if (jogador == 1 && computador == 3) {
      printf("\nVocê venceu\n");
    }

    else if (jogador == 3 && computador == 1) {
      printf("\nVocê perdeu\n");
    }

    if (jogador == 2 && computador == 3) {
      printf("\nVocê perdeu\n");
    }

    else if (jogador == 3 && computador == 2) {
      printf("\nVocê venceu\n");
    }

    if (jogador == 1 && computador == 4) {
      printf("\nVocê venceu\n");
    }

    else if (jogador == 4 && computador == 1) {
      printf("\nVocê perdeu\n");
    }

    if (jogador == 4 && computador == 5) {
      printf("\nVocê venceu\n");
    }

    else if (jogador == 5 && computador == 4) {
      printf("\nVocê perdeu\n");
    }

    if (jogador == 5 && computador == 3) {
      printf("\nVocê venceu\n");
    }

    else if (jogador == 3 && computador == 5) {
      printf("\nVocê perdeu\n");
    }

    if (jogador == 3 && computador == 4) {
      printf("\nVocê venceu\n");
    }

    else if (jogador == 4 && computador == 3) {
      printf("\nVocê perdeu\n");
    }

    if (jogador == 4 && computador == 2) {
      printf("\nVocê venceu\n");
    }

    else if (jogador == 2 && computador == 4) {
      printf("\nVocê perdeu\n");
    }

    if (jogador == 2 && computador == 5) {
      printf("\nVocê venceu\n");
    }

    else if (jogador == 5 && computador == 2) {
      printf("\nVocê perdeu\n");
    }

    if (jogador == 5 && computador == 1) {
      printf("\nVocê venceu\n");
    }

    else if (jogador == 1 && computador == 5) {
      printf("\nVocê perdeu\n");
    }

    printf("\nDeseja iniciar uma nova partida? Digite 6 para sim e qualquer "
           "outro número para não: \n");
    scanf("%d", &saida);
  }
  return 0;
}